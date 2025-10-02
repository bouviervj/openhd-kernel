#ifndef WIFICARD_H
#define WIFICARD_H

#include <memory>
#include "../tutil/mavlink_include.h"
#include "../timer/Timer.h"

// Stats unique per each connected (wifibroadcast) wfi card
// Air has only one card, ground can have one or more card(s)
class WiFiCard
{
public:
    bool m_alive = false;
    void set_alive(bool value) { m_alive = value; }
    int m_n_received_packets = 0;
    void set_n_received_packets(int value) { m_n_received_packets = value; }
    int m_curr_rx_rssi_dbm = -128;
    void set_curr_rx_rssi_dbm(int value) { m_curr_rx_rssi_dbm = value; }
    int m_packet_loss_perc = -1;
    void set_packet_loss_perc(int value) {m_packet_loss_perc = value; }
    bool m_is_active_tx = false;
    void set_is_active_tx(bool value) { m_is_active_tx = value; }
    int m_tx_power = -1;
    void set_tx_power(int value) { m_tx_power = value; }
    std::string m_tx_power_unit = "N/A";
    void set_tx_power_unit(std::string value) { m_tx_power_unit = value; }
    std::string m_tx_power_current_str = "N/A";
    void set_tx_power_current_str(std::string value) { m_tx_power_current_str = value; }
    int m_tx_power_armed = -1;
    void set_tx_power_armed(int value) { m_tx_power_armed = value; }
    std::string m_tx_power_armed_str = "DISABLED";
    void set_tx_power_armed_str(std::string value) { m_tx_power_armed_str = value; }
    int m_tx_power_disarmed = -1;
    void set_tx_power_disarmed(int value) { m_tx_power_disarmed = value; }
    int m_n_received_packets_rolling = 0;
    void set_n_received_packets_rolling(int value) { m_n_received_packets_rolling = value; }
    int m_curr_rx_rssi_dbm_antenna1 = -128;
    void set_curr_rx_rssi_dbm_antenna1(int value) { m_curr_rx_rssi_dbm_antenna1 = value; }
    int m_curr_rx_rssi_dbm_antenna2 = -128;
    void set_curr_rx_rssi_dbm_antenna2(int value) { m_curr_rx_rssi_dbm_antenna2 = value; }
    int m_card_type = -1; // -1 = no info available yet, otherwise, openhd card type (0..?)
    void set_card_type(int value) { m_card_type = value; }
    std::string m_card_type_as_string = "N/A";
    void set_card_type_as_string(std::string value) { m_card_type_as_string = value; }
    int m_card_type_supported = false;
    void set_card_type_supported(int value) { m_card_type_supported = value; }
    int m_card_sub_type = -1;
    void set_card_sub_type(int value) { m_card_sub_type = value; }
public:
    int mWIFI_CARD_SUB_TYPE_RTL8812AU_ASUS = 1;
    void unused_WIFI_CARD_SUB_TYPE_RTL8812AU_ASUS(int value) { mWIFI_CARD_SUB_TYPE_RTL8812AU_ASUS = value; }
    int mWIFI_CARD_SUB_TYPE_RTL8812AU_X20 = 2;
    void unused_WIFI_CARD_SUB_TYPE_RTL8812AU_X20(int value) { mWIFI_CARD_SUB_TYPE_RTL8812AU_X20 = value; }
public:
    explicit WiFiCard(bool is_air,int card_idx);
    static constexpr int N_CARDS=4;
    // Ground might have multiple rx-es
    static WiFiCard& instance_gnd(int index);
    // air always has only one rx
    static WiFiCard& instance_air();
    //
    void process_mavlink(const mavlink_openhd_stats_monitor_mode_wifi_card_t &msg);

    static int helper_get_gnd_curr_best_rssi();
private:
    std::chrono::steady_clock::time_point m_last_disconnected_warning=std::chrono::steady_clock::now();
    static constexpr auto CARD_DISCONNECTED_WARNING_INTERVAL=std::chrono::seconds(3);
    const bool m_is_air_card;
    const int m_card_idx;
    // On the OSD, we show how many packets were received on each card in X seconds intervals
    std::chrono::steady_clock::time_point m_last_packets_in_X_second_recalculation=std::chrono::steady_clock::now();
    int64_t m_last_packets_in_X_second_value=-1;
    // Card alive - ONLY USED FOR GROUND CARD(s)
    std::unique_ptr<Timer> m_alive_timer = nullptr;
    std::atomic<int64_t> m_last_mavlink_message=0;
    void update_alive();
};

#endif // WIFICARD_H
