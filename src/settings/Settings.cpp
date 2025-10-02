
#include "Settings.h"

#include <iomanip>
#include <algorithm>
#include <cctype>
#include <sstream>
#include <iostream>
#include <cassert>
#include <fstream>
#include <cstdlib>
#include <filesystem>

SettingValue::SettingValue(const std::string& str){
    _internal_value = str;
}

std::shared_ptr<SettingValue> SettingValue::fromInt(const int value){
    return std::shared_ptr<SettingValue>(new SettingValue(std::to_string(value)));
}

int SettingValue::toInt() const{
    try {
        return std::stoi(_internal_value);
    } catch (const std::invalid_argument& e){
        std::cerr << "Unable to read value." << std::endl;
        std::cerr << "Error: " << e.what() << std::endl;
        return 0;
    }
}

double SettingValue::toDouble() const{
    try {
        return std::stod(_internal_value);
    } catch (const std::invalid_argument& e){
        std::cerr << "Unable to read value." << std::endl;
        std::cerr << "Error: " << e.what() << std::endl;
        return 0.0;
    }
}

std::string SettingValue::toString() const{
    return _internal_value;
}

bool SettingValue::toBool() const{
    std::string str(_internal_value);
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    std::istringstream is(str);
    bool b;
    is >> std::boolalpha >> b;
    return b; 
}


std::atomic<bool> Settings::_properties_loaded(false);
std::map<std::string, std::shared_ptr<SettingValue> > Settings::_store;

#define OPENHD_PROPERTIES_PATH "OPENHD_PROPERTIES_PATH"
#define OPENHD_CONFIG_PROPERTIES_FILE "openhd_config.properties"

Settings::Settings(){

    if (!_properties_loaded.load()) {
        init();
        _properties_loaded.store(true);
    }

}

const std::string Settings::fileName() const {
    char const* env_value_cstr = std::getenv(OPENHD_PROPERTIES_PATH);
    std::filesystem::path base_path = "";
    if (env_value_cstr) {
        base_path = env_value_cstr;
    }
    std::filesystem::path file_name = OPENHD_CONFIG_PROPERTIES_FILE;
    std::filesystem::path relativePath = base_path / file_name;

    std::filesystem::path parentAbsolutePath = std::filesystem::absolute(relativePath);
    return parentAbsolutePath.string();
}

void Settings::init(){
    auto filename = fileName();
    std::cout << "Loading configuration from " << filename << std::endl;
    readProperties(filename);
    print();
}

bool Settings::contains(const std::string& str) const{
    return _store.find(str) != _store.end();
}

void Settings::setValue(const std::string& str,const std::string& value){
    _store[str] = std::shared_ptr<SettingValue>(new SettingValue(value));
}

void Settings::setValue(const std::string& str,const int value){
    _store[str] = SettingValue::fromInt(value);
}

const SettingValue& Settings::value(const std::string& str) const {
    auto it = _store.find(str);
    if (it != _store.end()) {
        return *(*it).second;
    }
    std::cerr << "key " << str << " not found in settings." << std::endl;  
    assert(0);
}

const SettingValue& Settings::value(const std::string& str, const int defaultValue) {
    if (!contains(str)) {
        setValue(str, defaultValue);
        return *_store[str];
    }
    return value(str);
}   

const SettingValue& Settings::value(const std::string& str, const std::string& defaultValue){
    if (!contains(str)) {
        setValue(str, defaultValue);
        return *_store[str];
    }
    return value(str);
}


void Settings::readProperties(const std::string& filename) {

    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        // Trim leading/trailing whitespace
        size_t first_char = line.find_first_not_of(" \t");
        if (std::string::npos == first_char) {
            continue; // Empty line
        }
        line = line.substr(first_char);

        // Ignore comments
        if (line.empty() || line[0] == '#') {
            continue;
        }

        // Find the separator
        size_t separator_pos = line.find('=');
        if (std::string::npos == separator_pos) {
            continue; // Line without separator
        }

        // Extract key and value
        std::string key = line.substr(0, separator_pos);
        std::string value = line.substr(separator_pos + 1);

        // Trim whitespace from key and value
        key.erase(key.find_last_not_of(" \t") + 1);
        value.erase(0, value.find_first_not_of(" \t"));
        value.erase(value.find_last_not_of(" \t") + 1);

        _store[key] = std::shared_ptr<SettingValue>(new SettingValue(value));
    }

    file.close();

}

void Settings::print() const {
    std::cout << "Registered properties: (" << _store.size() << ") "<< std::endl;
    for (const auto& pair : _store) {
        std::cout << " - " << pair.first << " = " << pair.second->toString() << std::endl;
    }
}