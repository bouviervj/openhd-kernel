#ifndef FREQUENCYHELPER_H
#define FREQUENCYHELPER_H

#include <mutex>
#include <vector>

class FrequencyHelper
{
public:
    explicit FrequencyHelper();
    static FrequencyHelper &instance();
    // Filter: 0 - OpenHD 1-7 only, 1= all 2.4G freq, 2 = all 5.8G freq
    std::vector<int> get_frequencies(int filter);
    std::vector<int> filter_frequencies_40mhz_ht40plus_only(const std::vector<int>& frequencies);

    std::vector<int> get_frequencies_all_40Mhz();

    bool get_frequency_radar(int frequency_mhz);
    int get_frequency_openhd_race_band(int frequency_mhz);
    int get_frequency_openhd_licensed_band(int frequency_mhz);
    int get_frequency_channel_nr(int frequency_mhz);
    // --------------
    bool hw_supports_frequency_threadsafe(int frequency_mhz);
    //
    std::string get_frequency_description(int frequency_mhz);

    std::vector<int> filter_frequencies(const std::vector<int>& frequencies,int filter_level);
public:
    bool set_hw_supported_frequencies_threadsafe(const std::vector<uint16_t> supported_channels);
    bool has_valid_supported_frequencies_data();
private:
    // Written by telemetry, read by UI
    std::mutex m_supported_channels_mutex;
    std::vector<uint16_t> m_supported_channels;
};

#endif // FREQUENCYHELPER_H
