#include "pollutionhelper.h"

#include <sstream>

PollutionHelper::PollutionHelper()
{

}

PollutionHelper& PollutionHelper::instance()
{
    static PollutionHelper instance;
    return instance;
}

static std::vector<PollutionHelper::PollutionElement> normalize(const std::vector<PollutionHelper::PollutionElement> &values){
    int max=0;
    for(const auto& value:values){
        max=std::max(max,value.n_foreign_packets);
    }
    if(max==0)return values;
    std::vector<PollutionHelper::PollutionElement> ret;
    for(auto value:values){
        value.n_foreign_packets_normalized=value.n_foreign_packets*100 / max;
        //value.n_foreign_packets=value.n_foreign_packets*100 / max;
        ret.push_back(value);
    }
    return ret;

}

void PollutionHelper::threadsafe_update(const std::vector<PollutionElement> &values)
{
    const auto normalized=normalize(values);
    std::lock_guard<std::mutex> lock(m_pollution_elements_mutex);
    m_pollution_elements.clear();
    //for(const auto& value:values){
    for(const auto& value:normalized){
        m_pollution_elements[value.frequency_mhz]=value;
        //qDebug()<<"Value:"<<value.frequency_mhz;
    }
}

std::optional<PollutionHelper::PollutionElement> PollutionHelper::threadsafe_get_pollution_for_frequency(int frequency)
{
    std::lock_guard<std::mutex> lock(m_pollution_elements_mutex);
    auto search = m_pollution_elements.find(frequency);
    if(search != m_pollution_elements.end()){
        return search->second;
    }
    //qDebug()<<"Cannot find pollution for "<<frequency;
    return std::nullopt;
}

std::vector<std::string> PollutionHelper::pollution_frequencies_int_to_qstringlist(const std::vector<int>& frequencies)
{
    std::vector<std::string> ret;
    for(auto& freq:frequencies){
        std::stringstream ss;
        ss<<freq<<"Mhz";
        auto pollution=threadsafe_get_pollution_for_frequency(freq);
        if(pollution.has_value()){
            /*if(pollution.value().n_foreign_packets<1){
                ss<<"\nFREE";
            }else{
                ss<<"\nPOLLUTED";
            }*/
            ret.push_back(ss.str());
        }else{
            //ss<<" N/A";
            //ret.push_back(QString(ss.str().c_str()));
            ret.push_back(" ");
        }
    }
    return ret;
}

std::vector<int> PollutionHelper::pollution_frequencies_int_get_pollution(const std::vector<int>& frequencies, bool normalize)
{
    std::vector<int> ret;
    for(auto& freq: frequencies){
        auto pollution=threadsafe_get_pollution_for_frequency(freq);
        if(pollution.has_value()){
            if(normalize){
                ret.push_back(static_cast<int>(pollution.value().n_foreign_packets_normalized));
            }else{
                /*if(pollution.value().n_foreign_packets<1){
                    ret.push_back(static_cast<int>(0));
                }else{
                    ret.push_back(static_cast<int>(100));
                }*/
                ret.push_back(static_cast<int>(pollution.value().n_foreign_packets));
            }

        }else{
            ret.push_back(static_cast<int>(0));
        }
    }
    return ret;
}

int PollutionHelper::pollution_get_last_scan_pollution_for_frequency(int frequency)
{
    auto tmp=threadsafe_get_pollution_for_frequency(frequency);
    if(tmp.has_value()){
        return tmp.value().n_foreign_packets;
    }
    return -1;
}
