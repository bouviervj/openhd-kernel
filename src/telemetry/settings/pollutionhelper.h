#ifndef POLLUTIONHELPER_H
#define POLLUTIONHELPER_H

#include <map>
#include <mutex>
#include <optional>
#include <vector>

// Written by telemetry, read by UI
// This atomic behaviour is enough for us - we signal the ui to rebuild itself every time the data changes
// The OpenHD ground unit broadcast the whole pollution set during channel scan, filling it as the scan proceeds.
class PollutionHelper
{
public:
    explicit PollutionHelper();
    static PollutionHelper& instance();
public:
    struct PollutionElement{
        int frequency_mhz;
        int width_mhz;
        int n_foreign_packets;
        int n_foreign_packets_normalized;
    };
    void threadsafe_update(const std::vector<PollutionElement>& values);
    std::optional<PollutionElement> threadsafe_get_pollution_for_frequency(int frequency);
public:
     std::vector<std::string> pollution_frequencies_int_to_qstringlist(const std::vector<int>& frequencies);
     std::vector<int> pollution_frequencies_int_get_pollution(const std::vector<int>& frequencies,bool normalize=false);
     int pollution_get_last_scan_pollution_for_frequency(int frequency);
private:
    // Written by telemetry, read by UI
    std::map<int,PollutionElement> m_pollution_elements;
    std::mutex m_pollution_elements_mutex;
};


#endif // POLLUTIONHELPER_H
