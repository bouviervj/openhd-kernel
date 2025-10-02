
#ifndef __SETTINGS_H__
#define __SETTINGS_H__

#include <string>
#include <map>
#include <memory>
#include <atomic>

class SettingValue {

    public:

        SettingValue(const std::string& str);

        int toInt() const;
        std::string toString() const;
        bool toBool() const;
        double toDouble() const;

        // Static methods to contruct values
        static std::shared_ptr<SettingValue> fromInt(const int value);

    private:

    std::string _internal_value;

};

class Settings {

    public:
        Settings();

        const SettingValue& value(const std::string& str) const;
        const SettingValue& value(const std::string& str, const int defaultValue);
        const SettingValue& value(const std::string& str, const std::string& defaultValue);

        void setValue(const std::string& str,const int value);
        void setValue(const std::string& str,const std::string& value);

        void clear(){
            init();
        }

        const std::string fileName() const;

    private:

        void init();

        void readProperties(const std::string& filename);

    // Stores setttings
    static std::atomic<bool> _properties_loaded;
    static std::map<std::string, std::shared_ptr<SettingValue> > _store;

    bool contains(const std::string& str) const;
    void print() const;

};

#endif
