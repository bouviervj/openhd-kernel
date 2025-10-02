#pragma once
// MESSAGE OPENHD_STATS_MONITOR_MODE_WIFI_CARD PACKING

#define MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD 1212


typedef struct __mavlink_openhd_stats_monitor_mode_wifi_card_t {
 uint32_t count_p_received; /*<  All received (incoming) packets*/
 uint32_t count_p_injected; /*<  All injected (outgoing) packets*/
 int32_t dummy2; /*<  for future use*/
 int16_t tx_power_current; /*<  either in override index units or mW*/
 int16_t tx_power_armed; /*<  either in override index units or mW*/
 int16_t tx_power_disarmed; /*<  either in override index units or mW*/
 int16_t dummy1; /*<  for future use*/
 uint8_t card_index; /*<  Ground might have multiple card(s) for diversity.*/
 uint8_t card_type; /*<  See openhd card_type enum*/
 uint8_t tx_active; /*<  On ground stations with multiple card(s), only one card is selected for TX at a time.*/
 int8_t rx_rssi; /*<  rx rssi in dBm of this card - depending on the hw, might be the max of all antennas or different.*/
 int8_t rx_rssi_1; /*<  rx rssi in dBm for antenna 1*/
 int8_t rx_rssi_2; /*<  rx rssi in dBm for antenna 2*/
 int8_t rx_noise_adapter; /*<  RX noise in dBm of adapter*/
 int8_t rx_noise_antenna1; /*<  RX noise in dBm of antenna1*/
 int8_t rx_noise_antenna2; /*<  RX noise in dBm of antenna2*/
 int8_t rx_signal_quality_adapter; /*<  Signal quality [0..100] of card*/
 int8_t rx_signal_quality_antenna1; /*<  Signal quality [0..100] of antenna1*/
 int8_t rx_signal_quality_antenna2; /*<  Signal quality [0..100] of antenna2*/
 int8_t curr_rx_packet_loss_perc; /*<  rx packet loss (for this card)*/
 uint8_t curr_status; /*<  set to 1 if something's wrong with the card*/
 int8_t dummy0; /*<  for future use*/
} mavlink_openhd_stats_monitor_mode_wifi_card_t;

#define MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN 35
#define MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_MIN_LEN 35
#define MAVLINK_MSG_ID_1212_LEN 35
#define MAVLINK_MSG_ID_1212_MIN_LEN 35

#define MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_CRC 52
#define MAVLINK_MSG_ID_1212_CRC 52



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_STATS_MONITOR_MODE_WIFI_CARD { \
    1212, \
    "OPENHD_STATS_MONITOR_MODE_WIFI_CARD", \
    22, \
    {  { "card_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, card_index) }, \
         { "card_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, card_type) }, \
         { "tx_active", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, tx_active) }, \
         { "rx_rssi", NULL, MAVLINK_TYPE_INT8_T, 0, 23, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_rssi) }, \
         { "rx_rssi_1", NULL, MAVLINK_TYPE_INT8_T, 0, 24, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_rssi_1) }, \
         { "rx_rssi_2", NULL, MAVLINK_TYPE_INT8_T, 0, 25, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_rssi_2) }, \
         { "rx_noise_adapter", NULL, MAVLINK_TYPE_INT8_T, 0, 26, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_noise_adapter) }, \
         { "rx_noise_antenna1", NULL, MAVLINK_TYPE_INT8_T, 0, 27, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_noise_antenna1) }, \
         { "rx_noise_antenna2", NULL, MAVLINK_TYPE_INT8_T, 0, 28, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_noise_antenna2) }, \
         { "rx_signal_quality_adapter", NULL, MAVLINK_TYPE_INT8_T, 0, 29, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_signal_quality_adapter) }, \
         { "rx_signal_quality_antenna1", NULL, MAVLINK_TYPE_INT8_T, 0, 30, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_signal_quality_antenna1) }, \
         { "rx_signal_quality_antenna2", NULL, MAVLINK_TYPE_INT8_T, 0, 31, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_signal_quality_antenna2) }, \
         { "tx_power_current", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, tx_power_current) }, \
         { "tx_power_armed", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, tx_power_armed) }, \
         { "tx_power_disarmed", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, tx_power_disarmed) }, \
         { "count_p_received", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, count_p_received) }, \
         { "count_p_injected", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, count_p_injected) }, \
         { "curr_rx_packet_loss_perc", NULL, MAVLINK_TYPE_INT8_T, 0, 32, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, curr_rx_packet_loss_perc) }, \
         { "curr_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, curr_status) }, \
         { "dummy0", NULL, MAVLINK_TYPE_INT8_T, 0, 34, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, dummy2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_STATS_MONITOR_MODE_WIFI_CARD { \
    "OPENHD_STATS_MONITOR_MODE_WIFI_CARD", \
    22, \
    {  { "card_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, card_index) }, \
         { "card_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, card_type) }, \
         { "tx_active", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, tx_active) }, \
         { "rx_rssi", NULL, MAVLINK_TYPE_INT8_T, 0, 23, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_rssi) }, \
         { "rx_rssi_1", NULL, MAVLINK_TYPE_INT8_T, 0, 24, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_rssi_1) }, \
         { "rx_rssi_2", NULL, MAVLINK_TYPE_INT8_T, 0, 25, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_rssi_2) }, \
         { "rx_noise_adapter", NULL, MAVLINK_TYPE_INT8_T, 0, 26, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_noise_adapter) }, \
         { "rx_noise_antenna1", NULL, MAVLINK_TYPE_INT8_T, 0, 27, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_noise_antenna1) }, \
         { "rx_noise_antenna2", NULL, MAVLINK_TYPE_INT8_T, 0, 28, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_noise_antenna2) }, \
         { "rx_signal_quality_adapter", NULL, MAVLINK_TYPE_INT8_T, 0, 29, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_signal_quality_adapter) }, \
         { "rx_signal_quality_antenna1", NULL, MAVLINK_TYPE_INT8_T, 0, 30, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_signal_quality_antenna1) }, \
         { "rx_signal_quality_antenna2", NULL, MAVLINK_TYPE_INT8_T, 0, 31, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, rx_signal_quality_antenna2) }, \
         { "tx_power_current", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, tx_power_current) }, \
         { "tx_power_armed", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, tx_power_armed) }, \
         { "tx_power_disarmed", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, tx_power_disarmed) }, \
         { "count_p_received", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, count_p_received) }, \
         { "count_p_injected", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, count_p_injected) }, \
         { "curr_rx_packet_loss_perc", NULL, MAVLINK_TYPE_INT8_T, 0, 32, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, curr_rx_packet_loss_perc) }, \
         { "curr_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, curr_status) }, \
         { "dummy0", NULL, MAVLINK_TYPE_INT8_T, 0, 34, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_openhd_stats_monitor_mode_wifi_card_t, dummy2) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_stats_monitor_mode_wifi_card message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param card_index  Ground might have multiple card(s) for diversity.
 * @param card_type  See openhd card_type enum
 * @param tx_active  On ground stations with multiple card(s), only one card is selected for TX at a time.
 * @param rx_rssi  rx rssi in dBm of this card - depending on the hw, might be the max of all antennas or different.
 * @param rx_rssi_1  rx rssi in dBm for antenna 1
 * @param rx_rssi_2  rx rssi in dBm for antenna 2
 * @param rx_noise_adapter  RX noise in dBm of adapter
 * @param rx_noise_antenna1  RX noise in dBm of antenna1
 * @param rx_noise_antenna2  RX noise in dBm of antenna2
 * @param rx_signal_quality_adapter  Signal quality [0..100] of card
 * @param rx_signal_quality_antenna1  Signal quality [0..100] of antenna1
 * @param rx_signal_quality_antenna2  Signal quality [0..100] of antenna2
 * @param tx_power_current  either in override index units or mW
 * @param tx_power_armed  either in override index units or mW
 * @param tx_power_disarmed  either in override index units or mW
 * @param count_p_received  All received (incoming) packets
 * @param count_p_injected  All injected (outgoing) packets
 * @param curr_rx_packet_loss_perc  rx packet loss (for this card)
 * @param curr_status  set to 1 if something's wrong with the card
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t card_index, uint8_t card_type, uint8_t tx_active, int8_t rx_rssi, int8_t rx_rssi_1, int8_t rx_rssi_2, int8_t rx_noise_adapter, int8_t rx_noise_antenna1, int8_t rx_noise_antenna2, int8_t rx_signal_quality_adapter, int8_t rx_signal_quality_antenna1, int8_t rx_signal_quality_antenna2, int16_t tx_power_current, int16_t tx_power_armed, int16_t tx_power_disarmed, uint32_t count_p_received, uint32_t count_p_injected, int8_t curr_rx_packet_loss_perc, uint8_t curr_status, int8_t dummy0, int16_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN];
    _mav_put_uint32_t(buf, 0, count_p_received);
    _mav_put_uint32_t(buf, 4, count_p_injected);
    _mav_put_int32_t(buf, 8, dummy2);
    _mav_put_int16_t(buf, 12, tx_power_current);
    _mav_put_int16_t(buf, 14, tx_power_armed);
    _mav_put_int16_t(buf, 16, tx_power_disarmed);
    _mav_put_int16_t(buf, 18, dummy1);
    _mav_put_uint8_t(buf, 20, card_index);
    _mav_put_uint8_t(buf, 21, card_type);
    _mav_put_uint8_t(buf, 22, tx_active);
    _mav_put_int8_t(buf, 23, rx_rssi);
    _mav_put_int8_t(buf, 24, rx_rssi_1);
    _mav_put_int8_t(buf, 25, rx_rssi_2);
    _mav_put_int8_t(buf, 26, rx_noise_adapter);
    _mav_put_int8_t(buf, 27, rx_noise_antenna1);
    _mav_put_int8_t(buf, 28, rx_noise_antenna2);
    _mav_put_int8_t(buf, 29, rx_signal_quality_adapter);
    _mav_put_int8_t(buf, 30, rx_signal_quality_antenna1);
    _mav_put_int8_t(buf, 31, rx_signal_quality_antenna2);
    _mav_put_int8_t(buf, 32, curr_rx_packet_loss_perc);
    _mav_put_uint8_t(buf, 33, curr_status);
    _mav_put_int8_t(buf, 34, dummy0);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN);
#else
    mavlink_openhd_stats_monitor_mode_wifi_card_t packet;
    packet.count_p_received = count_p_received;
    packet.count_p_injected = count_p_injected;
    packet.dummy2 = dummy2;
    packet.tx_power_current = tx_power_current;
    packet.tx_power_armed = tx_power_armed;
    packet.tx_power_disarmed = tx_power_disarmed;
    packet.dummy1 = dummy1;
    packet.card_index = card_index;
    packet.card_type = card_type;
    packet.tx_active = tx_active;
    packet.rx_rssi = rx_rssi;
    packet.rx_rssi_1 = rx_rssi_1;
    packet.rx_rssi_2 = rx_rssi_2;
    packet.rx_noise_adapter = rx_noise_adapter;
    packet.rx_noise_antenna1 = rx_noise_antenna1;
    packet.rx_noise_antenna2 = rx_noise_antenna2;
    packet.rx_signal_quality_adapter = rx_signal_quality_adapter;
    packet.rx_signal_quality_antenna1 = rx_signal_quality_antenna1;
    packet.rx_signal_quality_antenna2 = rx_signal_quality_antenna2;
    packet.curr_rx_packet_loss_perc = curr_rx_packet_loss_perc;
    packet.curr_status = curr_status;
    packet.dummy0 = dummy0;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_CRC);
}

/**
 * @brief Pack a openhd_stats_monitor_mode_wifi_card message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param card_index  Ground might have multiple card(s) for diversity.
 * @param card_type  See openhd card_type enum
 * @param tx_active  On ground stations with multiple card(s), only one card is selected for TX at a time.
 * @param rx_rssi  rx rssi in dBm of this card - depending on the hw, might be the max of all antennas or different.
 * @param rx_rssi_1  rx rssi in dBm for antenna 1
 * @param rx_rssi_2  rx rssi in dBm for antenna 2
 * @param rx_noise_adapter  RX noise in dBm of adapter
 * @param rx_noise_antenna1  RX noise in dBm of antenna1
 * @param rx_noise_antenna2  RX noise in dBm of antenna2
 * @param rx_signal_quality_adapter  Signal quality [0..100] of card
 * @param rx_signal_quality_antenna1  Signal quality [0..100] of antenna1
 * @param rx_signal_quality_antenna2  Signal quality [0..100] of antenna2
 * @param tx_power_current  either in override index units or mW
 * @param tx_power_armed  either in override index units or mW
 * @param tx_power_disarmed  either in override index units or mW
 * @param count_p_received  All received (incoming) packets
 * @param count_p_injected  All injected (outgoing) packets
 * @param curr_rx_packet_loss_perc  rx packet loss (for this card)
 * @param curr_status  set to 1 if something's wrong with the card
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t card_index,uint8_t card_type,uint8_t tx_active,int8_t rx_rssi,int8_t rx_rssi_1,int8_t rx_rssi_2,int8_t rx_noise_adapter,int8_t rx_noise_antenna1,int8_t rx_noise_antenna2,int8_t rx_signal_quality_adapter,int8_t rx_signal_quality_antenna1,int8_t rx_signal_quality_antenna2,int16_t tx_power_current,int16_t tx_power_armed,int16_t tx_power_disarmed,uint32_t count_p_received,uint32_t count_p_injected,int8_t curr_rx_packet_loss_perc,uint8_t curr_status,int8_t dummy0,int16_t dummy1,int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN];
    _mav_put_uint32_t(buf, 0, count_p_received);
    _mav_put_uint32_t(buf, 4, count_p_injected);
    _mav_put_int32_t(buf, 8, dummy2);
    _mav_put_int16_t(buf, 12, tx_power_current);
    _mav_put_int16_t(buf, 14, tx_power_armed);
    _mav_put_int16_t(buf, 16, tx_power_disarmed);
    _mav_put_int16_t(buf, 18, dummy1);
    _mav_put_uint8_t(buf, 20, card_index);
    _mav_put_uint8_t(buf, 21, card_type);
    _mav_put_uint8_t(buf, 22, tx_active);
    _mav_put_int8_t(buf, 23, rx_rssi);
    _mav_put_int8_t(buf, 24, rx_rssi_1);
    _mav_put_int8_t(buf, 25, rx_rssi_2);
    _mav_put_int8_t(buf, 26, rx_noise_adapter);
    _mav_put_int8_t(buf, 27, rx_noise_antenna1);
    _mav_put_int8_t(buf, 28, rx_noise_antenna2);
    _mav_put_int8_t(buf, 29, rx_signal_quality_adapter);
    _mav_put_int8_t(buf, 30, rx_signal_quality_antenna1);
    _mav_put_int8_t(buf, 31, rx_signal_quality_antenna2);
    _mav_put_int8_t(buf, 32, curr_rx_packet_loss_perc);
    _mav_put_uint8_t(buf, 33, curr_status);
    _mav_put_int8_t(buf, 34, dummy0);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN);
#else
    mavlink_openhd_stats_monitor_mode_wifi_card_t packet;
    packet.count_p_received = count_p_received;
    packet.count_p_injected = count_p_injected;
    packet.dummy2 = dummy2;
    packet.tx_power_current = tx_power_current;
    packet.tx_power_armed = tx_power_armed;
    packet.tx_power_disarmed = tx_power_disarmed;
    packet.dummy1 = dummy1;
    packet.card_index = card_index;
    packet.card_type = card_type;
    packet.tx_active = tx_active;
    packet.rx_rssi = rx_rssi;
    packet.rx_rssi_1 = rx_rssi_1;
    packet.rx_rssi_2 = rx_rssi_2;
    packet.rx_noise_adapter = rx_noise_adapter;
    packet.rx_noise_antenna1 = rx_noise_antenna1;
    packet.rx_noise_antenna2 = rx_noise_antenna2;
    packet.rx_signal_quality_adapter = rx_signal_quality_adapter;
    packet.rx_signal_quality_antenna1 = rx_signal_quality_antenna1;
    packet.rx_signal_quality_antenna2 = rx_signal_quality_antenna2;
    packet.curr_rx_packet_loss_perc = curr_rx_packet_loss_perc;
    packet.curr_status = curr_status;
    packet.dummy0 = dummy0;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_CRC);
}

/**
 * @brief Encode a openhd_stats_monitor_mode_wifi_card struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_stats_monitor_mode_wifi_card C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_stats_monitor_mode_wifi_card_t* openhd_stats_monitor_mode_wifi_card)
{
    return mavlink_msg_openhd_stats_monitor_mode_wifi_card_pack(system_id, component_id, msg, openhd_stats_monitor_mode_wifi_card->card_index, openhd_stats_monitor_mode_wifi_card->card_type, openhd_stats_monitor_mode_wifi_card->tx_active, openhd_stats_monitor_mode_wifi_card->rx_rssi, openhd_stats_monitor_mode_wifi_card->rx_rssi_1, openhd_stats_monitor_mode_wifi_card->rx_rssi_2, openhd_stats_monitor_mode_wifi_card->rx_noise_adapter, openhd_stats_monitor_mode_wifi_card->rx_noise_antenna1, openhd_stats_monitor_mode_wifi_card->rx_noise_antenna2, openhd_stats_monitor_mode_wifi_card->rx_signal_quality_adapter, openhd_stats_monitor_mode_wifi_card->rx_signal_quality_antenna1, openhd_stats_monitor_mode_wifi_card->rx_signal_quality_antenna2, openhd_stats_monitor_mode_wifi_card->tx_power_current, openhd_stats_monitor_mode_wifi_card->tx_power_armed, openhd_stats_monitor_mode_wifi_card->tx_power_disarmed, openhd_stats_monitor_mode_wifi_card->count_p_received, openhd_stats_monitor_mode_wifi_card->count_p_injected, openhd_stats_monitor_mode_wifi_card->curr_rx_packet_loss_perc, openhd_stats_monitor_mode_wifi_card->curr_status, openhd_stats_monitor_mode_wifi_card->dummy0, openhd_stats_monitor_mode_wifi_card->dummy1, openhd_stats_monitor_mode_wifi_card->dummy2);
}

/**
 * @brief Encode a openhd_stats_monitor_mode_wifi_card struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_stats_monitor_mode_wifi_card C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_stats_monitor_mode_wifi_card_t* openhd_stats_monitor_mode_wifi_card)
{
    return mavlink_msg_openhd_stats_monitor_mode_wifi_card_pack_chan(system_id, component_id, chan, msg, openhd_stats_monitor_mode_wifi_card->card_index, openhd_stats_monitor_mode_wifi_card->card_type, openhd_stats_monitor_mode_wifi_card->tx_active, openhd_stats_monitor_mode_wifi_card->rx_rssi, openhd_stats_monitor_mode_wifi_card->rx_rssi_1, openhd_stats_monitor_mode_wifi_card->rx_rssi_2, openhd_stats_monitor_mode_wifi_card->rx_noise_adapter, openhd_stats_monitor_mode_wifi_card->rx_noise_antenna1, openhd_stats_monitor_mode_wifi_card->rx_noise_antenna2, openhd_stats_monitor_mode_wifi_card->rx_signal_quality_adapter, openhd_stats_monitor_mode_wifi_card->rx_signal_quality_antenna1, openhd_stats_monitor_mode_wifi_card->rx_signal_quality_antenna2, openhd_stats_monitor_mode_wifi_card->tx_power_current, openhd_stats_monitor_mode_wifi_card->tx_power_armed, openhd_stats_monitor_mode_wifi_card->tx_power_disarmed, openhd_stats_monitor_mode_wifi_card->count_p_received, openhd_stats_monitor_mode_wifi_card->count_p_injected, openhd_stats_monitor_mode_wifi_card->curr_rx_packet_loss_perc, openhd_stats_monitor_mode_wifi_card->curr_status, openhd_stats_monitor_mode_wifi_card->dummy0, openhd_stats_monitor_mode_wifi_card->dummy1, openhd_stats_monitor_mode_wifi_card->dummy2);
}

/**
 * @brief Send a openhd_stats_monitor_mode_wifi_card message
 * @param chan MAVLink channel to send the message
 *
 * @param card_index  Ground might have multiple card(s) for diversity.
 * @param card_type  See openhd card_type enum
 * @param tx_active  On ground stations with multiple card(s), only one card is selected for TX at a time.
 * @param rx_rssi  rx rssi in dBm of this card - depending on the hw, might be the max of all antennas or different.
 * @param rx_rssi_1  rx rssi in dBm for antenna 1
 * @param rx_rssi_2  rx rssi in dBm for antenna 2
 * @param rx_noise_adapter  RX noise in dBm of adapter
 * @param rx_noise_antenna1  RX noise in dBm of antenna1
 * @param rx_noise_antenna2  RX noise in dBm of antenna2
 * @param rx_signal_quality_adapter  Signal quality [0..100] of card
 * @param rx_signal_quality_antenna1  Signal quality [0..100] of antenna1
 * @param rx_signal_quality_antenna2  Signal quality [0..100] of antenna2
 * @param tx_power_current  either in override index units or mW
 * @param tx_power_armed  either in override index units or mW
 * @param tx_power_disarmed  either in override index units or mW
 * @param count_p_received  All received (incoming) packets
 * @param count_p_injected  All injected (outgoing) packets
 * @param curr_rx_packet_loss_perc  rx packet loss (for this card)
 * @param curr_status  set to 1 if something's wrong with the card
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_stats_monitor_mode_wifi_card_send(mavlink_channel_t chan, uint8_t card_index, uint8_t card_type, uint8_t tx_active, int8_t rx_rssi, int8_t rx_rssi_1, int8_t rx_rssi_2, int8_t rx_noise_adapter, int8_t rx_noise_antenna1, int8_t rx_noise_antenna2, int8_t rx_signal_quality_adapter, int8_t rx_signal_quality_antenna1, int8_t rx_signal_quality_antenna2, int16_t tx_power_current, int16_t tx_power_armed, int16_t tx_power_disarmed, uint32_t count_p_received, uint32_t count_p_injected, int8_t curr_rx_packet_loss_perc, uint8_t curr_status, int8_t dummy0, int16_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN];
    _mav_put_uint32_t(buf, 0, count_p_received);
    _mav_put_uint32_t(buf, 4, count_p_injected);
    _mav_put_int32_t(buf, 8, dummy2);
    _mav_put_int16_t(buf, 12, tx_power_current);
    _mav_put_int16_t(buf, 14, tx_power_armed);
    _mav_put_int16_t(buf, 16, tx_power_disarmed);
    _mav_put_int16_t(buf, 18, dummy1);
    _mav_put_uint8_t(buf, 20, card_index);
    _mav_put_uint8_t(buf, 21, card_type);
    _mav_put_uint8_t(buf, 22, tx_active);
    _mav_put_int8_t(buf, 23, rx_rssi);
    _mav_put_int8_t(buf, 24, rx_rssi_1);
    _mav_put_int8_t(buf, 25, rx_rssi_2);
    _mav_put_int8_t(buf, 26, rx_noise_adapter);
    _mav_put_int8_t(buf, 27, rx_noise_antenna1);
    _mav_put_int8_t(buf, 28, rx_noise_antenna2);
    _mav_put_int8_t(buf, 29, rx_signal_quality_adapter);
    _mav_put_int8_t(buf, 30, rx_signal_quality_antenna1);
    _mav_put_int8_t(buf, 31, rx_signal_quality_antenna2);
    _mav_put_int8_t(buf, 32, curr_rx_packet_loss_perc);
    _mav_put_uint8_t(buf, 33, curr_status);
    _mav_put_int8_t(buf, 34, dummy0);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD, buf, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_CRC);
#else
    mavlink_openhd_stats_monitor_mode_wifi_card_t packet;
    packet.count_p_received = count_p_received;
    packet.count_p_injected = count_p_injected;
    packet.dummy2 = dummy2;
    packet.tx_power_current = tx_power_current;
    packet.tx_power_armed = tx_power_armed;
    packet.tx_power_disarmed = tx_power_disarmed;
    packet.dummy1 = dummy1;
    packet.card_index = card_index;
    packet.card_type = card_type;
    packet.tx_active = tx_active;
    packet.rx_rssi = rx_rssi;
    packet.rx_rssi_1 = rx_rssi_1;
    packet.rx_rssi_2 = rx_rssi_2;
    packet.rx_noise_adapter = rx_noise_adapter;
    packet.rx_noise_antenna1 = rx_noise_antenna1;
    packet.rx_noise_antenna2 = rx_noise_antenna2;
    packet.rx_signal_quality_adapter = rx_signal_quality_adapter;
    packet.rx_signal_quality_antenna1 = rx_signal_quality_antenna1;
    packet.rx_signal_quality_antenna2 = rx_signal_quality_antenna2;
    packet.curr_rx_packet_loss_perc = curr_rx_packet_loss_perc;
    packet.curr_status = curr_status;
    packet.dummy0 = dummy0;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_CRC);
#endif
}

/**
 * @brief Send a openhd_stats_monitor_mode_wifi_card message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_stats_monitor_mode_wifi_card_send_struct(mavlink_channel_t chan, const mavlink_openhd_stats_monitor_mode_wifi_card_t* openhd_stats_monitor_mode_wifi_card)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_stats_monitor_mode_wifi_card_send(chan, openhd_stats_monitor_mode_wifi_card->card_index, openhd_stats_monitor_mode_wifi_card->card_type, openhd_stats_monitor_mode_wifi_card->tx_active, openhd_stats_monitor_mode_wifi_card->rx_rssi, openhd_stats_monitor_mode_wifi_card->rx_rssi_1, openhd_stats_monitor_mode_wifi_card->rx_rssi_2, openhd_stats_monitor_mode_wifi_card->rx_noise_adapter, openhd_stats_monitor_mode_wifi_card->rx_noise_antenna1, openhd_stats_monitor_mode_wifi_card->rx_noise_antenna2, openhd_stats_monitor_mode_wifi_card->rx_signal_quality_adapter, openhd_stats_monitor_mode_wifi_card->rx_signal_quality_antenna1, openhd_stats_monitor_mode_wifi_card->rx_signal_quality_antenna2, openhd_stats_monitor_mode_wifi_card->tx_power_current, openhd_stats_monitor_mode_wifi_card->tx_power_armed, openhd_stats_monitor_mode_wifi_card->tx_power_disarmed, openhd_stats_monitor_mode_wifi_card->count_p_received, openhd_stats_monitor_mode_wifi_card->count_p_injected, openhd_stats_monitor_mode_wifi_card->curr_rx_packet_loss_perc, openhd_stats_monitor_mode_wifi_card->curr_status, openhd_stats_monitor_mode_wifi_card->dummy0, openhd_stats_monitor_mode_wifi_card->dummy1, openhd_stats_monitor_mode_wifi_card->dummy2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD, (const char *)openhd_stats_monitor_mode_wifi_card, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_stats_monitor_mode_wifi_card_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t card_index, uint8_t card_type, uint8_t tx_active, int8_t rx_rssi, int8_t rx_rssi_1, int8_t rx_rssi_2, int8_t rx_noise_adapter, int8_t rx_noise_antenna1, int8_t rx_noise_antenna2, int8_t rx_signal_quality_adapter, int8_t rx_signal_quality_antenna1, int8_t rx_signal_quality_antenna2, int16_t tx_power_current, int16_t tx_power_armed, int16_t tx_power_disarmed, uint32_t count_p_received, uint32_t count_p_injected, int8_t curr_rx_packet_loss_perc, uint8_t curr_status, int8_t dummy0, int16_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, count_p_received);
    _mav_put_uint32_t(buf, 4, count_p_injected);
    _mav_put_int32_t(buf, 8, dummy2);
    _mav_put_int16_t(buf, 12, tx_power_current);
    _mav_put_int16_t(buf, 14, tx_power_armed);
    _mav_put_int16_t(buf, 16, tx_power_disarmed);
    _mav_put_int16_t(buf, 18, dummy1);
    _mav_put_uint8_t(buf, 20, card_index);
    _mav_put_uint8_t(buf, 21, card_type);
    _mav_put_uint8_t(buf, 22, tx_active);
    _mav_put_int8_t(buf, 23, rx_rssi);
    _mav_put_int8_t(buf, 24, rx_rssi_1);
    _mav_put_int8_t(buf, 25, rx_rssi_2);
    _mav_put_int8_t(buf, 26, rx_noise_adapter);
    _mav_put_int8_t(buf, 27, rx_noise_antenna1);
    _mav_put_int8_t(buf, 28, rx_noise_antenna2);
    _mav_put_int8_t(buf, 29, rx_signal_quality_adapter);
    _mav_put_int8_t(buf, 30, rx_signal_quality_antenna1);
    _mav_put_int8_t(buf, 31, rx_signal_quality_antenna2);
    _mav_put_int8_t(buf, 32, curr_rx_packet_loss_perc);
    _mav_put_uint8_t(buf, 33, curr_status);
    _mav_put_int8_t(buf, 34, dummy0);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD, buf, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_CRC);
#else
    mavlink_openhd_stats_monitor_mode_wifi_card_t *packet = (mavlink_openhd_stats_monitor_mode_wifi_card_t *)msgbuf;
    packet->count_p_received = count_p_received;
    packet->count_p_injected = count_p_injected;
    packet->dummy2 = dummy2;
    packet->tx_power_current = tx_power_current;
    packet->tx_power_armed = tx_power_armed;
    packet->tx_power_disarmed = tx_power_disarmed;
    packet->dummy1 = dummy1;
    packet->card_index = card_index;
    packet->card_type = card_type;
    packet->tx_active = tx_active;
    packet->rx_rssi = rx_rssi;
    packet->rx_rssi_1 = rx_rssi_1;
    packet->rx_rssi_2 = rx_rssi_2;
    packet->rx_noise_adapter = rx_noise_adapter;
    packet->rx_noise_antenna1 = rx_noise_antenna1;
    packet->rx_noise_antenna2 = rx_noise_antenna2;
    packet->rx_signal_quality_adapter = rx_signal_quality_adapter;
    packet->rx_signal_quality_antenna1 = rx_signal_quality_antenna1;
    packet->rx_signal_quality_antenna2 = rx_signal_quality_antenna2;
    packet->curr_rx_packet_loss_perc = curr_rx_packet_loss_perc;
    packet->curr_status = curr_status;
    packet->dummy0 = dummy0;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD, (const char *)packet, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_CRC);
#endif
}
#endif

#endif

// MESSAGE OPENHD_STATS_MONITOR_MODE_WIFI_CARD UNPACKING


/**
 * @brief Get field card_index from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  Ground might have multiple card(s) for diversity.
 */
static inline uint8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_card_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field card_type from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  See openhd card_type enum
 */
static inline uint8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_card_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Get field tx_active from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  On ground stations with multiple card(s), only one card is selected for TX at a time.
 */
static inline uint8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_tx_active(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  22);
}

/**
 * @brief Get field rx_rssi from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  rx rssi in dBm of this card - depending on the hw, might be the max of all antennas or different.
 */
static inline int8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_rssi(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  23);
}

/**
 * @brief Get field rx_rssi_1 from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  rx rssi in dBm for antenna 1
 */
static inline int8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_rssi_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  24);
}

/**
 * @brief Get field rx_rssi_2 from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  rx rssi in dBm for antenna 2
 */
static inline int8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_rssi_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  25);
}

/**
 * @brief Get field rx_noise_adapter from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  RX noise in dBm of adapter
 */
static inline int8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_noise_adapter(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  26);
}

/**
 * @brief Get field rx_noise_antenna1 from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  RX noise in dBm of antenna1
 */
static inline int8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_noise_antenna1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  27);
}

/**
 * @brief Get field rx_noise_antenna2 from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  RX noise in dBm of antenna2
 */
static inline int8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_noise_antenna2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  28);
}

/**
 * @brief Get field rx_signal_quality_adapter from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  Signal quality [0..100] of card
 */
static inline int8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_signal_quality_adapter(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  29);
}

/**
 * @brief Get field rx_signal_quality_antenna1 from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  Signal quality [0..100] of antenna1
 */
static inline int8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_signal_quality_antenna1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  30);
}

/**
 * @brief Get field rx_signal_quality_antenna2 from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  Signal quality [0..100] of antenna2
 */
static inline int8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_signal_quality_antenna2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  31);
}

/**
 * @brief Get field tx_power_current from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  either in override index units or mW
 */
static inline int16_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_tx_power_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field tx_power_armed from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  either in override index units or mW
 */
static inline int16_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_tx_power_armed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field tx_power_disarmed from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  either in override index units or mW
 */
static inline int16_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_tx_power_disarmed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field count_p_received from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  All received (incoming) packets
 */
static inline uint32_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_count_p_received(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field count_p_injected from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  All injected (outgoing) packets
 */
static inline uint32_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_count_p_injected(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field curr_rx_packet_loss_perc from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  rx packet loss (for this card)
 */
static inline int8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_curr_rx_packet_loss_perc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  32);
}

/**
 * @brief Get field curr_status from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  set to 1 if something's wrong with the card
 */
static inline uint8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_curr_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field dummy0 from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  for future use
 */
static inline int8_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_dummy0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  34);
}

/**
 * @brief Get field dummy1 from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  for future use
 */
static inline int16_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_dummy1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field dummy2 from openhd_stats_monitor_mode_wifi_card message
 *
 * @return  for future use
 */
static inline int32_t mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_dummy2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Decode a openhd_stats_monitor_mode_wifi_card message into a struct
 *
 * @param msg The message to decode
 * @param openhd_stats_monitor_mode_wifi_card C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_stats_monitor_mode_wifi_card_decode(const mavlink_message_t* msg, mavlink_openhd_stats_monitor_mode_wifi_card_t* openhd_stats_monitor_mode_wifi_card)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    openhd_stats_monitor_mode_wifi_card->count_p_received = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_count_p_received(msg);
    openhd_stats_monitor_mode_wifi_card->count_p_injected = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_count_p_injected(msg);
    openhd_stats_monitor_mode_wifi_card->dummy2 = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_dummy2(msg);
    openhd_stats_monitor_mode_wifi_card->tx_power_current = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_tx_power_current(msg);
    openhd_stats_monitor_mode_wifi_card->tx_power_armed = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_tx_power_armed(msg);
    openhd_stats_monitor_mode_wifi_card->tx_power_disarmed = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_tx_power_disarmed(msg);
    openhd_stats_monitor_mode_wifi_card->dummy1 = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_dummy1(msg);
    openhd_stats_monitor_mode_wifi_card->card_index = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_card_index(msg);
    openhd_stats_monitor_mode_wifi_card->card_type = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_card_type(msg);
    openhd_stats_monitor_mode_wifi_card->tx_active = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_tx_active(msg);
    openhd_stats_monitor_mode_wifi_card->rx_rssi = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_rssi(msg);
    openhd_stats_monitor_mode_wifi_card->rx_rssi_1 = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_rssi_1(msg);
    openhd_stats_monitor_mode_wifi_card->rx_rssi_2 = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_rssi_2(msg);
    openhd_stats_monitor_mode_wifi_card->rx_noise_adapter = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_noise_adapter(msg);
    openhd_stats_monitor_mode_wifi_card->rx_noise_antenna1 = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_noise_antenna1(msg);
    openhd_stats_monitor_mode_wifi_card->rx_noise_antenna2 = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_noise_antenna2(msg);
    openhd_stats_monitor_mode_wifi_card->rx_signal_quality_adapter = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_signal_quality_adapter(msg);
    openhd_stats_monitor_mode_wifi_card->rx_signal_quality_antenna1 = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_signal_quality_antenna1(msg);
    openhd_stats_monitor_mode_wifi_card->rx_signal_quality_antenna2 = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_rx_signal_quality_antenna2(msg);
    openhd_stats_monitor_mode_wifi_card->curr_rx_packet_loss_perc = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_curr_rx_packet_loss_perc(msg);
    openhd_stats_monitor_mode_wifi_card->curr_status = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_curr_status(msg);
    openhd_stats_monitor_mode_wifi_card->dummy0 = mavlink_msg_openhd_stats_monitor_mode_wifi_card_get_dummy0(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN;
        memset(openhd_stats_monitor_mode_wifi_card, 0, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_LEN);
    memcpy(openhd_stats_monitor_mode_wifi_card, _MAV_PAYLOAD(msg), len);
#endif
}
