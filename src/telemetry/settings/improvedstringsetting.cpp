#include "improvedstringsetting.h"

ImprovedStringSetting::ImprovedStringSetting(std::vector<Item> values):m_values_enum(values)
{

}

ImprovedStringSetting::ImprovedStringSetting(const ImprovedStringSetting &other):m_values_enum(other.m_values_enum)
{
}

ImprovedStringSetting ImprovedStringSetting::create_from_keys_only(const std::vector<std::string> &keys){
    std::vector<Item> values{};
    for(const auto& key:keys){
        values.emplace_back(Item{key,key});
    }
    return ImprovedStringSetting{values};
}


std::vector<std::string> ImprovedStringSetting::enum_keys() const{
    std::vector<std::string> ret{};
    for(const auto& item:m_values_enum){
        ret.push_back(item.key);
    }
    return ret;
}

std::vector<std::string> ImprovedStringSetting::enum_values() const{
    std::vector<std::string> ret{};
    for(const auto& item:m_values_enum){
        ret.push_back(item.value);
    }
    return ret;
}

std::optional<std::string> ImprovedStringSetting::value_to_key(const std::string& value) const
{
    for(const auto& item:m_values_enum){
        if(item.value==value)return item.key;
    }
    return std::nullopt;
}

std::optional<std::string> ImprovedStringSetting::key_to_value(const std::string &key) const
{
    for(const auto& item:m_values_enum){
        if(item.key==key)return item.value;
    }
    return std::nullopt;
}
