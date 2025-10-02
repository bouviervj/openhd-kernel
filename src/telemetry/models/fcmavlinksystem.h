#ifndef FC_MAVLINK_SYSTEM_H
#define FC_MAVLINK_SYSTEM_H

#include "../tutil/mavlink_include.h"

#include <atomic>
#include <optional>
#include <memory>
#include <chrono>

#include "../../timer/Timer.h"
#include "../../util/time_utils.h"

/**
 * This used to be called OpenHD and was a mix of everything, it has become FCMavlinkSystem -
 * A QT model for (fire and forget) data from the mavlink FC connected to the air unit.
 * OpenHD always has only one connected FC, so this can be a singleton, too.
 * Also, note that nothing OpenHD specific should ever make it into here - OpenHD supports raw access to
 * the Flight Controller, but it is NOT a Flight Controller ;)
 * The corresponding qml element is called _fcMavlinkSystem.
 *
 * NOTE: This is a c++ - write, qml - read only model - this greatly increases simplicity.
 * You cannot 'talk' to the FC from here - use the action class for that.
 *
 * NOTE: When adding new values, please try and be specific about their unit - e.g. add a "volt" suffix if the value is in volts.
 */
class FCMavlinkSystem 
{
public:
    explicit FCMavlinkSystem();
    // singleton for accessing the model from c++
    static FCMavlinkSystem& instance();
    // Process a new telemetry message coming from the FC mavlink system
    // return true if we know what to do with this message type (aka this message type has been consumed)
    bool process_message(const mavlink_message_t& msg);
    // mavlink sys id of the FC. Pretty much always 1, but it is not a hard requirement that FC always use a sys id of 1.
    // If the FC has not been discovered yet, return std::nullopt.
    std::optional<uint8_t> get_fc_sys_id();
    // Set the mavlink system reference, once discovered.
    // NOTE: We only use the system to get broadcast message(s) (pass_through) and a few more things
    bool set_system_id(int sys_id);
public: // Stuff needs to be public for qt
    double m_battery_current_ampere = 0;
    void set_battery_current_ampere(double value) { m_battery_current_ampere = value; }
    double m_battery_voltage_volt = 0;
    void set_battery_voltage_volt(double value) { m_battery_voltage_volt = value; }
    double m_battery_voltage_single_cell = 0;
    void set_battery_voltage_single_cell(double value) { m_battery_voltage_single_cell = value; }
    int m_battery_percent = 0;
    void set_battery_percent(int value) { m_battery_percent = value; }
    std::string m_battery_percent_gauge = "\uf091";
    void set_battery_percent_gauge(std::string value) { m_battery_percent_gauge = value; }
    int m_battery_consumed_mah = 0;
    void set_battery_consumed_mah(int value) { m_battery_consumed_mah = value; }
    int m_battery_consumed_mah_per_km = -1;
    void set_battery_consumed_mah_per_km(int value) { m_battery_consumed_mah_per_km = value; }
    double m_battery_id0_current_ampere = 0;
    void set_battery_id0_current_ampere(double value) { m_battery_id0_current_ampere = value; }
    double m_battery_id0_voltage_volt = 0;
    void set_battery_id0_voltage_volt(double value) { m_battery_id0_voltage_volt = value; }
    int m_battery_id0_consumed_mah = 0;
    void set_battery_id0_consumed_mah(int value) { m_battery_id0_consumed_mah = value; }
    std::string m_battery_id0_type = "N/A";
    void set_battery_id0_type(std::string value) { m_battery_id0_type = value; }
    int m_battery_id0_remaining_time_s = -1;
    void set_battery_id0_remaining_time_s(int value) { m_battery_id0_remaining_time_s = value; }
    double m_battery_id1_current_ampere = 0;
    void set_battery_id1_current_ampere(double value) { m_battery_id1_current_ampere = value; }
    double m_battery_id1_voltage_volt = 0;
    void set_battery_id1_voltage_volt(double value) { m_battery_id1_voltage_volt = value; }
    int m_battery_id1_consumed_mah = 0;
    void set_battery_id1_consumed_mah(int value) { m_battery_id1_consumed_mah = value; }
    std::string m_battery_id1_type = "N/A";
    void set_battery_id1_type(std::string value) { m_battery_id1_type = value; }
    int m_battery_id1_remaining_time_s = -1;
    void set_battery_id1_remaining_time_s(int value) { m_battery_id1_remaining_time_s = value; }
    double m_pitch = 0;
    void set_pitch(double value) { m_pitch = value; }
    double m_roll = 0;
    void set_roll(double value) { m_roll = value; }
    double m_yaw = 0;
    void set_yaw(double value) { m_yaw = value; }
    double m_throttle = 0;
    void set_throttle(double value) { m_throttle = value; }
    float m_vibration_x = 0;
    void set_vibration_x(float value) { m_vibration_x = value; }
    float m_vibration_y = 0;
    void set_vibration_y(float value) { m_vibration_y = value; }
    float m_vibration_z = 0;
    void set_vibration_z(float value) { m_vibration_z = value; }
    bool m_is_alive = false;
    void set_is_alive(bool value) { m_is_alive = value; }
    double m_lat = 0.0;
    void set_lat(double value) { m_lat = value; }
    double m_lon = 0.0;
    void set_lon(double value) { m_lon = value; }
    double m_last_lat = 0.0;
    void set_last_lat(double value) { m_last_lat = value; }
    double m_last_lon = 0.0;
    void set_last_lon(double value) { m_last_lon = value; }
    int satellites_visible = 0;
    void set_satellites_visible(int value) { satellites_visible = value; }
    double m_gps_hdop = -1;
    void set_gps_hdop(double value) { m_gps_hdop = value; }
    double m_gps_vdop = -1;
    void set_gps_vdop(double value) { m_gps_vdop = value; }
    int gps_fix_type = 0;
    void set_gps_fix_type(int value) { gps_fix_type = value; }
    std::string gps_status_fix_type_str = "Unknown";
    void set_gps_status_fix_type_str(std::string value) { gps_status_fix_type_str = value; }
    double m_home_latitude = 0.0;
    void set_home_latitude(double value) { m_home_latitude = value; }
    double m_home_longitude = 0.0;
    void set_home_longitude(double value) { m_home_longitude = value; }
    double m_vx = 0.0;
    void set_vx(double value) { m_vx = value; }
    double m_vy = 0.0;
    void set_vy(double value) { m_vy = value; }
    double m_vz = 0.0;
    void set_vz(double value) { m_vz = value; }
    double m_altitude_rel_m = 0.0;
    void set_altitude_rel_m(double value) { m_altitude_rel_m = value; }
    double m_altitude_msl_m = 0.0;
    void set_altitude_msl_m(double value) { m_altitude_msl_m = value; }
    double m_vehicle_vx_angle = 0.0;
    void set_vehicle_vx_angle(double value) { m_vehicle_vx_angle = value; }
    double m_vehicle_vy_angle = 0.0;
    void set_vehicle_vy_angle(double value) { m_vehicle_vy_angle = value; }
    double m_vehicle_vz_angle = 0.0;
    void set_vehicle_vz_angle(double value) { m_vehicle_vz_angle = value; }
    double m_wind_speed = 0;
    void set_wind_speed(double value) { m_wind_speed = value; }
    double m_wind_direction = 0;
    void set_wind_direction(double value) { m_wind_direction = value; }
    float m_mav_wind_direction = 0;
    void set_mav_wind_direction(float value) { m_mav_wind_direction = value; }
    float m_mav_wind_speed = 0;
    void set_mav_wind_speed(float value) { m_mav_wind_speed = value; }
    int m_rc_rssi_percentage = -1;
    void set_rc_rssi_percentage(int value) { m_rc_rssi_percentage = value; }
    int m_imu_temp_degree = 0;
    void set_imu_temp_degree(int value) { m_imu_temp_degree = value; }
    int m_preasure_sensor_temperature_degree = 0;
    void set_preasure_sensor_temperature_degree(int value) { m_preasure_sensor_temperature_degree = value; }
    int m_preasure_sensor2_temperature_degree = 0;
    void set_preasure_sensor2_temperature_degree(int value) { m_preasure_sensor2_temperature_degree = value; }
    int m_preasure_sensor3_temperature_degree = 0;
    void set_preasure_sensor3_temperature_degree(int value) { m_preasure_sensor3_temperature_degree = value; }
    int m_airspeed_sensor_temperature_degree = 99;
    void set_airspeed_sensor_temperature_degree(int value) { m_airspeed_sensor_temperature_degree = value; }
    int m_esc_temp = 0;
    void set_esc_temp(int value) { m_esc_temp = value; }
    int m_battery_temperature = 0;
    void set_battery_temperature(int value) { m_battery_temperature = value; }
    std::string m_flight_time = "00:00";
    void set_flight_time(std::string value) { m_flight_time = value; }
    double m_flight_distance_m = 0;
    void set_flight_distance_m(double value) { m_flight_distance_m = value; }
    double m_lateral_speed = 0;
    void set_lateral_speed(double value) { m_lateral_speed = value; }
    double m_home_distance = 0;
    void set_home_distance(double value) { m_home_distance = value; }
    int m_boot_time = 0;
    void set_boot_time(int value) { m_boot_time = value; }
    int m_hdg = 0;
    void set_hdg(int value) { m_hdg = value; }
    double m_ground_speed_meter_per_second = 0;
    void set_ground_speed_meter_per_second(double value) { m_ground_speed_meter_per_second = value; }
    double m_air_speed_meter_per_second = 0;
    void set_air_speed_meter_per_second(double value) { m_air_speed_meter_per_second = value; }
    float m_clipping_x = 0.0;
    void set_clipping_x(float value) { m_clipping_x = value; }
    float m_clipping_y = 0.0;
    void set_clipping_y(float value) { m_clipping_y = value; }
    float m_clipping_z = 0.0;
    void set_clipping_z(float value) { m_clipping_z = value; }
    float m_aoa = 0.0;
    void set_aoa(float value) { m_aoa = value; }
    float m_vertical_speed_indicator_mps = 0;
    void set_vertical_speed_indicator_mps(float value) { m_vertical_speed_indicator_mps = value; }
    std::string m_mav_type_str = "UNKNOWN";
    void set_mav_type_str(std::string value) { m_mav_type_str = value; }
    std::string m_autopilot_type_str = "UNKNOWN";
    void set_autopilot_type_str(std::string value) { m_autopilot_type_str = value; }
    std::string m_last_ping_result_flight_ctrl = "N/A";
    void set_last_ping_result_flight_ctrl(std::string value) { m_last_ping_result_flight_ctrl = value; }
    float m_curr_update_rate_mavlink_message_attitude = -1;
    void set_curr_update_rate_mavlink_message_attitude(float value) { m_curr_update_rate_mavlink_message_attitude = value; }
    int m_for_osd_sys_id = -1;
    void set_for_osd_sys_id(int value) { m_for_osd_sys_id = value; }
    int m_distance_sensor_distance_cm = -1;
    void set_distance_sensor_distance_cm(int value) { m_distance_sensor_distance_cm = value; }
    long long int m_sys_time_unix_usec = 0;
    void set_sys_time_unix_usec(long long int value) { m_sys_time_unix_usec = value; }
    std::string m_sys_time_unix_as_str = "N/A";
    void set_sys_time_unix_as_str(std::string value) { m_sys_time_unix_as_str = value; }
public:
    void calculate_home_distance();
    void calculate_home_course();
    // Updates the flight time by increasing the time when armed
    void updateFlightTimer();
    // Something something luke
    void updateVehicleAngles();
    // Something somethng luke
    void updateWind();

    //Q_PROPERTY(int home_course MEMBER m_home_course WRITE set_home_course NOTIFY home_course_changed)
    void set_home_course(int home_course);

    //Q_PROPERTY(int home_heading MEMBER m_home_heading WRITE set_home_heading NOTIFY home_heading_changed)
    void set_home_heading(int home_heading);

    //Q_PROPERTY(bool armed MEMBER m_armed WRITE set_armed NOTIFY armed_changed)
    void set_armed(bool armed);

    //Q_PROPERTY(std::string flight_mode MEMBER m_flight_mode WRITE set_flight_mode NOTIFY flight_mode_changed)
    void set_flight_mode(std::string flight_mode);
//signals:
    // mavlink
    void armed_changed(bool armed){

    }
    void flight_mode_changed(std::string flight_mode){

    }
    void home_course_changed(int home_course){

    }
    void home_heading_changed(int home_heading){
        
    }

private:
    // other members
    bool m_armed = false;
    std::string m_flight_mode = "------";

    int gps_quality_count = 0;

    int m_home_heading = 0; //this is actual global heading
    int m_home_course = 0; //this is the relative course from nose

    double speed_last_time = 0.0;

    long long int m_flight_distance_last_time_ms= 0;
    double total_dist= 0.0;

    uint64_t totalTime;
    Time flightTimeStart;

    std::unique_ptr<Timer> m_flight_time_timer = nullptr;
    //
    std::unique_ptr<Timer> m_alive_timer = nullptr;
    std::atomic<int64_t> m_last_heartbeat_ms = -1;
    std::atomic<int64_t> m_last_message_ms= -1;
    void update_alive();
    std::chrono::steady_clock::time_point m_last_update_update_rate_mavlink_message_attitude=std::chrono::steady_clock::now();
    int m_n_messages_update_rate_mavlink_message_attitude=0;
    // -----------------------
private:
    void send_message_hud_connection(bool connected);
    void send_message_arm_change(bool armed);
private:
    static bool get_SHOW_FC_MESSAGES_IN_HUD();
    // Used to calculate efficiency in mAh / km
    void recalculate_efficiency();
    double m_efficiency_last_distance_m=0;
    int m_efficiency_last_charge_consumed_mAh=0;
    std::chrono::steady_clock::time_point m_efficiency_last_update=std::chrono::steady_clock::now();
private:
    // Feature: log warning if heartbeats are received, but no "attitude" messages -
    // we use this as a hint that the telemetry rate(s) are messed up
    // Every 10 heartbeats, check when we received the last "attitude" message - if we didn't receive an attiude message in this interval,
    // log a warning
    int m_n_heartbeats=0;
    int m_n_attitude_messages=0;
private:
    std::atomic<bool> m_discovered=false;
    int m_sys_id=-1;
};



#endif // FC_MAVLINK_SYSTEM_H
