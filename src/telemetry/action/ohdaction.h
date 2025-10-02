#ifndef OHDACTION_H
#define OHDACTION_H


/**
 * @brief This is the only class (other than param /settings) where one can talk to the OpenHD air / ground unit.
 * THE REST IS BROADCAST !
 */
class OHDAction 
{
public:
    explicit OHDAction();

    static OHDAction& instance();
public:
    // request the OpenHD version, both OpenHD air and ground unit will respond to that message.
    // Deprecated, version is now broadcasted, too
    //void request_openhd_version_async();
    // send the reboot / shutdown command to openhd air or ground unit
    // @param system_id: 0 for ground, 1 for air, 2 for FC
    bool send_command_reboot_air(bool reboot);
    bool send_command_reboot_gnd(bool reboot);

    // Sent to the ground unit only
    bool send_command_analyze_channels_blocking(int freq_bands);
    bool send_command_start_scan_channels_blocking(int freq_bands,int channel_widths);
private:
};

#endif // OHDACTION_H
