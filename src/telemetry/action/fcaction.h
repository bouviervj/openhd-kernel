#ifndef FCACTION_H
#define FCACTION_H

#include <mutex>
#include <atomic>
#include <string>

#include "../tutil/mavlink_include.h"

/**
 * This is the one and only class from which messages / actions can be sent to the FC.
 * THE REST IS BROADCAST !
 */
class FCAction 
{
public:
    explicit FCAction();
    static FCAction& instance();
public:
    int m_ardupilot_mav_type = -1;
    void set_ardupilot_mav_type(int value){
        m_ardupilot_mav_type = value;
    }
public:
    // WARNING: Do not call any non-async send command methods from the same thread that is parsing the mavlink messages !
    //
    // Try to change the arming state.
    // The result (success/failure) is logged in the HUD once completed
    void arm_fc_async(bool arm=false);

    // Sends a command to change the flight mode. Note that this is more complicated than it sounds at first,
    // since copter and plane for example do have different flight mode enums.
    // This function is async to not block the calling UI - the result is logged to the HUDLogMessageModel
    // also, this method only allows one flight mode change queued up at a time
    void flight_mode_cmd_async(long cmd_msg);
    // FUCKING ANNOYING / DANGEROUS:
    // The mapping of flight modes is completely different for copter/plane/...
    // If we haven't mapped a (unique) flight mode string to the appropriate COPTER_, PLANE_ command
    // we just log a warning and return.
    void flight_mode_cmd_async_string(std::string flight_mode);
    // Returns true if we have a mapping for this flight mode (string id)
    // taking the current mav type (copter, plane, ..) int account.
    // This method is called from qml to only show FLightModeSlider elements that will work for the given mav type
    bool has_mapping(std::string flight_mode);

    // Some FC stop sending home position when armed, re-request the home position
    void request_home_position_from_fc();

    bool send_command_reboot(bool reboot);
private:
    std::atomic<bool> m_has_currently_runnning_flight_mode_change=false;
};

#endif // FCACTION_H
