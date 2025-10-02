#ifndef FCMISSIONHANDLER_H
#define FCMISSIONHANDLER_H

#include <map>
#include <mutex>
#include <utility>
#include <vector>
#include <mutex>
#include <optional>

#include "../tutil/mavlink_include.h"

/**
 * Simple class to (semi-reliably) get all the mission waypoints from the FC and more.
 */
class FCMissionHandler {
    
public:
    explicit FCMissionHandler();
    // singleton for accessing the model from c++
    static FCMissionHandler& instance();
    // Returns true if the message was "consumed" and does not need to be processed by anybody else, e.g. the main fc model
    bool process_message(const mavlink_message_t& msg);
    // Should be called every time a msg from the FC is received - this class takes care to not pollute the link
    void opt_send_messages();
    void resync();
public:
    // We expose some variables as read-only for the OSD+
    // NOTE: the description "waypoints" is not exactly accurate, left in for now due to legacy reasons though
    int mission_waypoints_current_total = -1;
    void set_mission_waypoints_current_total(int value){
        mission_waypoints_current_total = value;
    }
    int mission_waypoints_current = -1;
    void set_mission_waypoints_current(int value){
        mission_waypoints_current = value;
    }
    // Current mission type, verbose as string for the user
    std::string mission_current_type = "Unknown";
    void set_mission_current_type(const std::string& value){
        mission_current_type = value;
    }
    // For the user to
    std::string current_status = "N/A";
    void set_current_status(const std::string& value){
        current_status = value;
    }
private:
    struct MItem{
        int mission_index=0;
        double latitude;
        double longitude;
        double altitude_meter=0;
        // Set to true once we got an update for this mission item
        bool updated=false;
    };
    std::mutex m_mutex;
    std::vector<MItem> m_mission_items;
    std::vector<int> m_missing_items;
    static constexpr auto MAX_N_MISSION_ITEMS=200;
    std::chrono::steady_clock::time_point m_last_count_request=std::chrono::steady_clock::now();
    std::chrono::steady_clock::time_point m_last_item_request=std::chrono::steady_clock::now();
    bool m_has_mission_count=false;
    void update_mission_count(const mavlink_mission_count_t& mission_count);
    void update_mission(const mavlink_mission_item_int_t& item);
    void update_mission_current(const mavlink_mission_current_t& mission_current);
    // Needs to be called with lock locked !
    void recalculate_missing();
};

#endif // FCMISSIONHANDLER_H
