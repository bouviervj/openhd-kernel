#pragma once
// MESSAGE OPENHD_STATS_MONITOR_MODE_WIFI_LINK PACKING

#define MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK 1211


typedef struct __mavlink_openhd_stats_monitor_mode_wifi_link_t {
 int32_t curr_tx_bps; /*<  tx bits per second*/
 int32_t curr_rx_bps; /*<  rx bits per second*/
 uint32_t count_tx_inj_error_hint; /*<  count_tx_inj_error_hint*/
 uint32_t count_tx_dropped_packets; /*<  count_tx_dropped_packets*/
 int32_t dummy2; /*<  for future use*/
 int16_t curr_tx_pps; /*<  tx packets per second*/
 int16_t curr_rx_pps; /*<  rx packets per second*/
 int16_t curr_rx_big_gaps_counter; /*<  complicated but important stat*/
 uint16_t curr_tx_channel_mhz; /*<  curr tx channel used when injecting packets*/
 uint16_t curr_rate_kbits; /*<  curr link rate, in kbit/s, might be slightly lower than default for MCS when TX errors are detected*/
 int16_t dummy1; /*<  for future use*/
 int8_t curr_rx_packet_loss_perc; /*<  curr_rx_packet_loss*/
 uint8_t curr_tx_channel_w_mhz; /*<  curr tx channel width used when injecting packets (20mhz/40Mhz)*/
 uint8_t curr_tx_mcs_index; /*<  curr tx mcs index used when injecting packets*/
 uint8_t curr_n_rate_adjustments; /*<  If the TX cannot keep up (at a given mcs), openhd reduces the bitrate in 1MBit/s increments*/
 uint8_t bitfield; /*<  bitfield, see openhd for usage.*/
 uint8_t pollution_perc; /*<  pollution [0..100],aka percentage of foreign vs openhd packets on the current channel.*/
 int8_t dummy0; /*<  for future use*/
} mavlink_openhd_stats_monitor_mode_wifi_link_t;

#define MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN 39
#define MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_MIN_LEN 39
#define MAVLINK_MSG_ID_1211_LEN 39
#define MAVLINK_MSG_ID_1211_MIN_LEN 39

#define MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_CRC 148
#define MAVLINK_MSG_ID_1211_CRC 148



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_STATS_MONITOR_MODE_WIFI_LINK { \
    1211, \
    "OPENHD_STATS_MONITOR_MODE_WIFI_LINK", \
    18, \
    {  { "curr_tx_pps", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_tx_pps) }, \
         { "curr_rx_pps", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_rx_pps) }, \
         { "curr_tx_bps", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_tx_bps) }, \
         { "curr_rx_bps", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_rx_bps) }, \
         { "curr_rx_packet_loss_perc", NULL, MAVLINK_TYPE_INT8_T, 0, 32, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_rx_packet_loss_perc) }, \
         { "curr_rx_big_gaps_counter", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_rx_big_gaps_counter) }, \
         { "count_tx_inj_error_hint", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, count_tx_inj_error_hint) }, \
         { "count_tx_dropped_packets", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, count_tx_dropped_packets) }, \
         { "curr_tx_channel_mhz", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_tx_channel_mhz) }, \
         { "curr_tx_channel_w_mhz", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_tx_channel_w_mhz) }, \
         { "curr_tx_mcs_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_tx_mcs_index) }, \
         { "curr_rate_kbits", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_rate_kbits) }, \
         { "curr_n_rate_adjustments", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_n_rate_adjustments) }, \
         { "bitfield", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, bitfield) }, \
         { "pollution_perc", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, pollution_perc) }, \
         { "dummy0", NULL, MAVLINK_TYPE_INT8_T, 0, 38, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, dummy2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_STATS_MONITOR_MODE_WIFI_LINK { \
    "OPENHD_STATS_MONITOR_MODE_WIFI_LINK", \
    18, \
    {  { "curr_tx_pps", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_tx_pps) }, \
         { "curr_rx_pps", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_rx_pps) }, \
         { "curr_tx_bps", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_tx_bps) }, \
         { "curr_rx_bps", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_rx_bps) }, \
         { "curr_rx_packet_loss_perc", NULL, MAVLINK_TYPE_INT8_T, 0, 32, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_rx_packet_loss_perc) }, \
         { "curr_rx_big_gaps_counter", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_rx_big_gaps_counter) }, \
         { "count_tx_inj_error_hint", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, count_tx_inj_error_hint) }, \
         { "count_tx_dropped_packets", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, count_tx_dropped_packets) }, \
         { "curr_tx_channel_mhz", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_tx_channel_mhz) }, \
         { "curr_tx_channel_w_mhz", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_tx_channel_w_mhz) }, \
         { "curr_tx_mcs_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_tx_mcs_index) }, \
         { "curr_rate_kbits", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_rate_kbits) }, \
         { "curr_n_rate_adjustments", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, curr_n_rate_adjustments) }, \
         { "bitfield", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, bitfield) }, \
         { "pollution_perc", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, pollution_perc) }, \
         { "dummy0", NULL, MAVLINK_TYPE_INT8_T, 0, 38, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_openhd_stats_monitor_mode_wifi_link_t, dummy2) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_stats_monitor_mode_wifi_link message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param curr_tx_pps  tx packets per second
 * @param curr_rx_pps  rx packets per second
 * @param curr_tx_bps  tx bits per second
 * @param curr_rx_bps  rx bits per second
 * @param curr_rx_packet_loss_perc  curr_rx_packet_loss
 * @param curr_rx_big_gaps_counter  complicated but important stat
 * @param count_tx_inj_error_hint  count_tx_inj_error_hint
 * @param count_tx_dropped_packets  count_tx_dropped_packets
 * @param curr_tx_channel_mhz  curr tx channel used when injecting packets
 * @param curr_tx_channel_w_mhz  curr tx channel width used when injecting packets (20mhz/40Mhz)
 * @param curr_tx_mcs_index  curr tx mcs index used when injecting packets
 * @param curr_rate_kbits  curr link rate, in kbit/s, might be slightly lower than default for MCS when TX errors are detected
 * @param curr_n_rate_adjustments  If the TX cannot keep up (at a given mcs), openhd reduces the bitrate in 1MBit/s increments
 * @param bitfield  bitfield, see openhd for usage.
 * @param pollution_perc  pollution [0..100],aka percentage of foreign vs openhd packets on the current channel.
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t curr_tx_pps, int16_t curr_rx_pps, int32_t curr_tx_bps, int32_t curr_rx_bps, int8_t curr_rx_packet_loss_perc, int16_t curr_rx_big_gaps_counter, uint32_t count_tx_inj_error_hint, uint32_t count_tx_dropped_packets, uint16_t curr_tx_channel_mhz, uint8_t curr_tx_channel_w_mhz, uint8_t curr_tx_mcs_index, uint16_t curr_rate_kbits, uint8_t curr_n_rate_adjustments, uint8_t bitfield, uint8_t pollution_perc, int8_t dummy0, int16_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN];
    _mav_put_int32_t(buf, 0, curr_tx_bps);
    _mav_put_int32_t(buf, 4, curr_rx_bps);
    _mav_put_uint32_t(buf, 8, count_tx_inj_error_hint);
    _mav_put_uint32_t(buf, 12, count_tx_dropped_packets);
    _mav_put_int32_t(buf, 16, dummy2);
    _mav_put_int16_t(buf, 20, curr_tx_pps);
    _mav_put_int16_t(buf, 22, curr_rx_pps);
    _mav_put_int16_t(buf, 24, curr_rx_big_gaps_counter);
    _mav_put_uint16_t(buf, 26, curr_tx_channel_mhz);
    _mav_put_uint16_t(buf, 28, curr_rate_kbits);
    _mav_put_int16_t(buf, 30, dummy1);
    _mav_put_int8_t(buf, 32, curr_rx_packet_loss_perc);
    _mav_put_uint8_t(buf, 33, curr_tx_channel_w_mhz);
    _mav_put_uint8_t(buf, 34, curr_tx_mcs_index);
    _mav_put_uint8_t(buf, 35, curr_n_rate_adjustments);
    _mav_put_uint8_t(buf, 36, bitfield);
    _mav_put_uint8_t(buf, 37, pollution_perc);
    _mav_put_int8_t(buf, 38, dummy0);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN);
#else
    mavlink_openhd_stats_monitor_mode_wifi_link_t packet;
    packet.curr_tx_bps = curr_tx_bps;
    packet.curr_rx_bps = curr_rx_bps;
    packet.count_tx_inj_error_hint = count_tx_inj_error_hint;
    packet.count_tx_dropped_packets = count_tx_dropped_packets;
    packet.dummy2 = dummy2;
    packet.curr_tx_pps = curr_tx_pps;
    packet.curr_rx_pps = curr_rx_pps;
    packet.curr_rx_big_gaps_counter = curr_rx_big_gaps_counter;
    packet.curr_tx_channel_mhz = curr_tx_channel_mhz;
    packet.curr_rate_kbits = curr_rate_kbits;
    packet.dummy1 = dummy1;
    packet.curr_rx_packet_loss_perc = curr_rx_packet_loss_perc;
    packet.curr_tx_channel_w_mhz = curr_tx_channel_w_mhz;
    packet.curr_tx_mcs_index = curr_tx_mcs_index;
    packet.curr_n_rate_adjustments = curr_n_rate_adjustments;
    packet.bitfield = bitfield;
    packet.pollution_perc = pollution_perc;
    packet.dummy0 = dummy0;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_CRC);
}

/**
 * @brief Pack a openhd_stats_monitor_mode_wifi_link message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param curr_tx_pps  tx packets per second
 * @param curr_rx_pps  rx packets per second
 * @param curr_tx_bps  tx bits per second
 * @param curr_rx_bps  rx bits per second
 * @param curr_rx_packet_loss_perc  curr_rx_packet_loss
 * @param curr_rx_big_gaps_counter  complicated but important stat
 * @param count_tx_inj_error_hint  count_tx_inj_error_hint
 * @param count_tx_dropped_packets  count_tx_dropped_packets
 * @param curr_tx_channel_mhz  curr tx channel used when injecting packets
 * @param curr_tx_channel_w_mhz  curr tx channel width used when injecting packets (20mhz/40Mhz)
 * @param curr_tx_mcs_index  curr tx mcs index used when injecting packets
 * @param curr_rate_kbits  curr link rate, in kbit/s, might be slightly lower than default for MCS when TX errors are detected
 * @param curr_n_rate_adjustments  If the TX cannot keep up (at a given mcs), openhd reduces the bitrate in 1MBit/s increments
 * @param bitfield  bitfield, see openhd for usage.
 * @param pollution_perc  pollution [0..100],aka percentage of foreign vs openhd packets on the current channel.
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t curr_tx_pps,int16_t curr_rx_pps,int32_t curr_tx_bps,int32_t curr_rx_bps,int8_t curr_rx_packet_loss_perc,int16_t curr_rx_big_gaps_counter,uint32_t count_tx_inj_error_hint,uint32_t count_tx_dropped_packets,uint16_t curr_tx_channel_mhz,uint8_t curr_tx_channel_w_mhz,uint8_t curr_tx_mcs_index,uint16_t curr_rate_kbits,uint8_t curr_n_rate_adjustments,uint8_t bitfield,uint8_t pollution_perc,int8_t dummy0,int16_t dummy1,int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN];
    _mav_put_int32_t(buf, 0, curr_tx_bps);
    _mav_put_int32_t(buf, 4, curr_rx_bps);
    _mav_put_uint32_t(buf, 8, count_tx_inj_error_hint);
    _mav_put_uint32_t(buf, 12, count_tx_dropped_packets);
    _mav_put_int32_t(buf, 16, dummy2);
    _mav_put_int16_t(buf, 20, curr_tx_pps);
    _mav_put_int16_t(buf, 22, curr_rx_pps);
    _mav_put_int16_t(buf, 24, curr_rx_big_gaps_counter);
    _mav_put_uint16_t(buf, 26, curr_tx_channel_mhz);
    _mav_put_uint16_t(buf, 28, curr_rate_kbits);
    _mav_put_int16_t(buf, 30, dummy1);
    _mav_put_int8_t(buf, 32, curr_rx_packet_loss_perc);
    _mav_put_uint8_t(buf, 33, curr_tx_channel_w_mhz);
    _mav_put_uint8_t(buf, 34, curr_tx_mcs_index);
    _mav_put_uint8_t(buf, 35, curr_n_rate_adjustments);
    _mav_put_uint8_t(buf, 36, bitfield);
    _mav_put_uint8_t(buf, 37, pollution_perc);
    _mav_put_int8_t(buf, 38, dummy0);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN);
#else
    mavlink_openhd_stats_monitor_mode_wifi_link_t packet;
    packet.curr_tx_bps = curr_tx_bps;
    packet.curr_rx_bps = curr_rx_bps;
    packet.count_tx_inj_error_hint = count_tx_inj_error_hint;
    packet.count_tx_dropped_packets = count_tx_dropped_packets;
    packet.dummy2 = dummy2;
    packet.curr_tx_pps = curr_tx_pps;
    packet.curr_rx_pps = curr_rx_pps;
    packet.curr_rx_big_gaps_counter = curr_rx_big_gaps_counter;
    packet.curr_tx_channel_mhz = curr_tx_channel_mhz;
    packet.curr_rate_kbits = curr_rate_kbits;
    packet.dummy1 = dummy1;
    packet.curr_rx_packet_loss_perc = curr_rx_packet_loss_perc;
    packet.curr_tx_channel_w_mhz = curr_tx_channel_w_mhz;
    packet.curr_tx_mcs_index = curr_tx_mcs_index;
    packet.curr_n_rate_adjustments = curr_n_rate_adjustments;
    packet.bitfield = bitfield;
    packet.pollution_perc = pollution_perc;
    packet.dummy0 = dummy0;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_CRC);
}

/**
 * @brief Encode a openhd_stats_monitor_mode_wifi_link struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_stats_monitor_mode_wifi_link C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_stats_monitor_mode_wifi_link_t* openhd_stats_monitor_mode_wifi_link)
{
    return mavlink_msg_openhd_stats_monitor_mode_wifi_link_pack(system_id, component_id, msg, openhd_stats_monitor_mode_wifi_link->curr_tx_pps, openhd_stats_monitor_mode_wifi_link->curr_rx_pps, openhd_stats_monitor_mode_wifi_link->curr_tx_bps, openhd_stats_monitor_mode_wifi_link->curr_rx_bps, openhd_stats_monitor_mode_wifi_link->curr_rx_packet_loss_perc, openhd_stats_monitor_mode_wifi_link->curr_rx_big_gaps_counter, openhd_stats_monitor_mode_wifi_link->count_tx_inj_error_hint, openhd_stats_monitor_mode_wifi_link->count_tx_dropped_packets, openhd_stats_monitor_mode_wifi_link->curr_tx_channel_mhz, openhd_stats_monitor_mode_wifi_link->curr_tx_channel_w_mhz, openhd_stats_monitor_mode_wifi_link->curr_tx_mcs_index, openhd_stats_monitor_mode_wifi_link->curr_rate_kbits, openhd_stats_monitor_mode_wifi_link->curr_n_rate_adjustments, openhd_stats_monitor_mode_wifi_link->bitfield, openhd_stats_monitor_mode_wifi_link->pollution_perc, openhd_stats_monitor_mode_wifi_link->dummy0, openhd_stats_monitor_mode_wifi_link->dummy1, openhd_stats_monitor_mode_wifi_link->dummy2);
}

/**
 * @brief Encode a openhd_stats_monitor_mode_wifi_link struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_stats_monitor_mode_wifi_link C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_stats_monitor_mode_wifi_link_t* openhd_stats_monitor_mode_wifi_link)
{
    return mavlink_msg_openhd_stats_monitor_mode_wifi_link_pack_chan(system_id, component_id, chan, msg, openhd_stats_monitor_mode_wifi_link->curr_tx_pps, openhd_stats_monitor_mode_wifi_link->curr_rx_pps, openhd_stats_monitor_mode_wifi_link->curr_tx_bps, openhd_stats_monitor_mode_wifi_link->curr_rx_bps, openhd_stats_monitor_mode_wifi_link->curr_rx_packet_loss_perc, openhd_stats_monitor_mode_wifi_link->curr_rx_big_gaps_counter, openhd_stats_monitor_mode_wifi_link->count_tx_inj_error_hint, openhd_stats_monitor_mode_wifi_link->count_tx_dropped_packets, openhd_stats_monitor_mode_wifi_link->curr_tx_channel_mhz, openhd_stats_monitor_mode_wifi_link->curr_tx_channel_w_mhz, openhd_stats_monitor_mode_wifi_link->curr_tx_mcs_index, openhd_stats_monitor_mode_wifi_link->curr_rate_kbits, openhd_stats_monitor_mode_wifi_link->curr_n_rate_adjustments, openhd_stats_monitor_mode_wifi_link->bitfield, openhd_stats_monitor_mode_wifi_link->pollution_perc, openhd_stats_monitor_mode_wifi_link->dummy0, openhd_stats_monitor_mode_wifi_link->dummy1, openhd_stats_monitor_mode_wifi_link->dummy2);
}

/**
 * @brief Send a openhd_stats_monitor_mode_wifi_link message
 * @param chan MAVLink channel to send the message
 *
 * @param curr_tx_pps  tx packets per second
 * @param curr_rx_pps  rx packets per second
 * @param curr_tx_bps  tx bits per second
 * @param curr_rx_bps  rx bits per second
 * @param curr_rx_packet_loss_perc  curr_rx_packet_loss
 * @param curr_rx_big_gaps_counter  complicated but important stat
 * @param count_tx_inj_error_hint  count_tx_inj_error_hint
 * @param count_tx_dropped_packets  count_tx_dropped_packets
 * @param curr_tx_channel_mhz  curr tx channel used when injecting packets
 * @param curr_tx_channel_w_mhz  curr tx channel width used when injecting packets (20mhz/40Mhz)
 * @param curr_tx_mcs_index  curr tx mcs index used when injecting packets
 * @param curr_rate_kbits  curr link rate, in kbit/s, might be slightly lower than default for MCS when TX errors are detected
 * @param curr_n_rate_adjustments  If the TX cannot keep up (at a given mcs), openhd reduces the bitrate in 1MBit/s increments
 * @param bitfield  bitfield, see openhd for usage.
 * @param pollution_perc  pollution [0..100],aka percentage of foreign vs openhd packets on the current channel.
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_stats_monitor_mode_wifi_link_send(mavlink_channel_t chan, int16_t curr_tx_pps, int16_t curr_rx_pps, int32_t curr_tx_bps, int32_t curr_rx_bps, int8_t curr_rx_packet_loss_perc, int16_t curr_rx_big_gaps_counter, uint32_t count_tx_inj_error_hint, uint32_t count_tx_dropped_packets, uint16_t curr_tx_channel_mhz, uint8_t curr_tx_channel_w_mhz, uint8_t curr_tx_mcs_index, uint16_t curr_rate_kbits, uint8_t curr_n_rate_adjustments, uint8_t bitfield, uint8_t pollution_perc, int8_t dummy0, int16_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN];
    _mav_put_int32_t(buf, 0, curr_tx_bps);
    _mav_put_int32_t(buf, 4, curr_rx_bps);
    _mav_put_uint32_t(buf, 8, count_tx_inj_error_hint);
    _mav_put_uint32_t(buf, 12, count_tx_dropped_packets);
    _mav_put_int32_t(buf, 16, dummy2);
    _mav_put_int16_t(buf, 20, curr_tx_pps);
    _mav_put_int16_t(buf, 22, curr_rx_pps);
    _mav_put_int16_t(buf, 24, curr_rx_big_gaps_counter);
    _mav_put_uint16_t(buf, 26, curr_tx_channel_mhz);
    _mav_put_uint16_t(buf, 28, curr_rate_kbits);
    _mav_put_int16_t(buf, 30, dummy1);
    _mav_put_int8_t(buf, 32, curr_rx_packet_loss_perc);
    _mav_put_uint8_t(buf, 33, curr_tx_channel_w_mhz);
    _mav_put_uint8_t(buf, 34, curr_tx_mcs_index);
    _mav_put_uint8_t(buf, 35, curr_n_rate_adjustments);
    _mav_put_uint8_t(buf, 36, bitfield);
    _mav_put_uint8_t(buf, 37, pollution_perc);
    _mav_put_int8_t(buf, 38, dummy0);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK, buf, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_CRC);
#else
    mavlink_openhd_stats_monitor_mode_wifi_link_t packet;
    packet.curr_tx_bps = curr_tx_bps;
    packet.curr_rx_bps = curr_rx_bps;
    packet.count_tx_inj_error_hint = count_tx_inj_error_hint;
    packet.count_tx_dropped_packets = count_tx_dropped_packets;
    packet.dummy2 = dummy2;
    packet.curr_tx_pps = curr_tx_pps;
    packet.curr_rx_pps = curr_rx_pps;
    packet.curr_rx_big_gaps_counter = curr_rx_big_gaps_counter;
    packet.curr_tx_channel_mhz = curr_tx_channel_mhz;
    packet.curr_rate_kbits = curr_rate_kbits;
    packet.dummy1 = dummy1;
    packet.curr_rx_packet_loss_perc = curr_rx_packet_loss_perc;
    packet.curr_tx_channel_w_mhz = curr_tx_channel_w_mhz;
    packet.curr_tx_mcs_index = curr_tx_mcs_index;
    packet.curr_n_rate_adjustments = curr_n_rate_adjustments;
    packet.bitfield = bitfield;
    packet.pollution_perc = pollution_perc;
    packet.dummy0 = dummy0;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_CRC);
#endif
}

/**
 * @brief Send a openhd_stats_monitor_mode_wifi_link message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_stats_monitor_mode_wifi_link_send_struct(mavlink_channel_t chan, const mavlink_openhd_stats_monitor_mode_wifi_link_t* openhd_stats_monitor_mode_wifi_link)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_stats_monitor_mode_wifi_link_send(chan, openhd_stats_monitor_mode_wifi_link->curr_tx_pps, openhd_stats_monitor_mode_wifi_link->curr_rx_pps, openhd_stats_monitor_mode_wifi_link->curr_tx_bps, openhd_stats_monitor_mode_wifi_link->curr_rx_bps, openhd_stats_monitor_mode_wifi_link->curr_rx_packet_loss_perc, openhd_stats_monitor_mode_wifi_link->curr_rx_big_gaps_counter, openhd_stats_monitor_mode_wifi_link->count_tx_inj_error_hint, openhd_stats_monitor_mode_wifi_link->count_tx_dropped_packets, openhd_stats_monitor_mode_wifi_link->curr_tx_channel_mhz, openhd_stats_monitor_mode_wifi_link->curr_tx_channel_w_mhz, openhd_stats_monitor_mode_wifi_link->curr_tx_mcs_index, openhd_stats_monitor_mode_wifi_link->curr_rate_kbits, openhd_stats_monitor_mode_wifi_link->curr_n_rate_adjustments, openhd_stats_monitor_mode_wifi_link->bitfield, openhd_stats_monitor_mode_wifi_link->pollution_perc, openhd_stats_monitor_mode_wifi_link->dummy0, openhd_stats_monitor_mode_wifi_link->dummy1, openhd_stats_monitor_mode_wifi_link->dummy2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK, (const char *)openhd_stats_monitor_mode_wifi_link, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_stats_monitor_mode_wifi_link_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t curr_tx_pps, int16_t curr_rx_pps, int32_t curr_tx_bps, int32_t curr_rx_bps, int8_t curr_rx_packet_loss_perc, int16_t curr_rx_big_gaps_counter, uint32_t count_tx_inj_error_hint, uint32_t count_tx_dropped_packets, uint16_t curr_tx_channel_mhz, uint8_t curr_tx_channel_w_mhz, uint8_t curr_tx_mcs_index, uint16_t curr_rate_kbits, uint8_t curr_n_rate_adjustments, uint8_t bitfield, uint8_t pollution_perc, int8_t dummy0, int16_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, curr_tx_bps);
    _mav_put_int32_t(buf, 4, curr_rx_bps);
    _mav_put_uint32_t(buf, 8, count_tx_inj_error_hint);
    _mav_put_uint32_t(buf, 12, count_tx_dropped_packets);
    _mav_put_int32_t(buf, 16, dummy2);
    _mav_put_int16_t(buf, 20, curr_tx_pps);
    _mav_put_int16_t(buf, 22, curr_rx_pps);
    _mav_put_int16_t(buf, 24, curr_rx_big_gaps_counter);
    _mav_put_uint16_t(buf, 26, curr_tx_channel_mhz);
    _mav_put_uint16_t(buf, 28, curr_rate_kbits);
    _mav_put_int16_t(buf, 30, dummy1);
    _mav_put_int8_t(buf, 32, curr_rx_packet_loss_perc);
    _mav_put_uint8_t(buf, 33, curr_tx_channel_w_mhz);
    _mav_put_uint8_t(buf, 34, curr_tx_mcs_index);
    _mav_put_uint8_t(buf, 35, curr_n_rate_adjustments);
    _mav_put_uint8_t(buf, 36, bitfield);
    _mav_put_uint8_t(buf, 37, pollution_perc);
    _mav_put_int8_t(buf, 38, dummy0);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK, buf, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_CRC);
#else
    mavlink_openhd_stats_monitor_mode_wifi_link_t *packet = (mavlink_openhd_stats_monitor_mode_wifi_link_t *)msgbuf;
    packet->curr_tx_bps = curr_tx_bps;
    packet->curr_rx_bps = curr_rx_bps;
    packet->count_tx_inj_error_hint = count_tx_inj_error_hint;
    packet->count_tx_dropped_packets = count_tx_dropped_packets;
    packet->dummy2 = dummy2;
    packet->curr_tx_pps = curr_tx_pps;
    packet->curr_rx_pps = curr_rx_pps;
    packet->curr_rx_big_gaps_counter = curr_rx_big_gaps_counter;
    packet->curr_tx_channel_mhz = curr_tx_channel_mhz;
    packet->curr_rate_kbits = curr_rate_kbits;
    packet->dummy1 = dummy1;
    packet->curr_rx_packet_loss_perc = curr_rx_packet_loss_perc;
    packet->curr_tx_channel_w_mhz = curr_tx_channel_w_mhz;
    packet->curr_tx_mcs_index = curr_tx_mcs_index;
    packet->curr_n_rate_adjustments = curr_n_rate_adjustments;
    packet->bitfield = bitfield;
    packet->pollution_perc = pollution_perc;
    packet->dummy0 = dummy0;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK, (const char *)packet, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_CRC);
#endif
}
#endif

#endif

// MESSAGE OPENHD_STATS_MONITOR_MODE_WIFI_LINK UNPACKING


/**
 * @brief Get field curr_tx_pps from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  tx packets per second
 */
static inline int16_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_tx_pps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field curr_rx_pps from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  rx packets per second
 */
static inline int16_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_rx_pps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field curr_tx_bps from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  tx bits per second
 */
static inline int32_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_tx_bps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field curr_rx_bps from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  rx bits per second
 */
static inline int32_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_rx_bps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field curr_rx_packet_loss_perc from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  curr_rx_packet_loss
 */
static inline int8_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_rx_packet_loss_perc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  32);
}

/**
 * @brief Get field curr_rx_big_gaps_counter from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  complicated but important stat
 */
static inline int16_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_rx_big_gaps_counter(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field count_tx_inj_error_hint from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  count_tx_inj_error_hint
 */
static inline uint32_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_count_tx_inj_error_hint(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field count_tx_dropped_packets from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  count_tx_dropped_packets
 */
static inline uint32_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_count_tx_dropped_packets(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  12);
}

/**
 * @brief Get field curr_tx_channel_mhz from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  curr tx channel used when injecting packets
 */
static inline uint16_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_tx_channel_mhz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  26);
}

/**
 * @brief Get field curr_tx_channel_w_mhz from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  curr tx channel width used when injecting packets (20mhz/40Mhz)
 */
static inline uint8_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_tx_channel_w_mhz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field curr_tx_mcs_index from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  curr tx mcs index used when injecting packets
 */
static inline uint8_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_tx_mcs_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  34);
}

/**
 * @brief Get field curr_rate_kbits from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  curr link rate, in kbit/s, might be slightly lower than default for MCS when TX errors are detected
 */
static inline uint16_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_rate_kbits(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Get field curr_n_rate_adjustments from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  If the TX cannot keep up (at a given mcs), openhd reduces the bitrate in 1MBit/s increments
 */
static inline uint8_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_n_rate_adjustments(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  35);
}

/**
 * @brief Get field bitfield from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  bitfield, see openhd for usage.
 */
static inline uint8_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_bitfield(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  36);
}

/**
 * @brief Get field pollution_perc from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  pollution [0..100],aka percentage of foreign vs openhd packets on the current channel.
 */
static inline uint8_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_pollution_perc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  37);
}

/**
 * @brief Get field dummy0 from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  for future use
 */
static inline int8_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_dummy0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  38);
}

/**
 * @brief Get field dummy1 from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  for future use
 */
static inline int16_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_dummy1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  30);
}

/**
 * @brief Get field dummy2 from openhd_stats_monitor_mode_wifi_link message
 *
 * @return  for future use
 */
static inline int32_t mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_dummy2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Decode a openhd_stats_monitor_mode_wifi_link message into a struct
 *
 * @param msg The message to decode
 * @param openhd_stats_monitor_mode_wifi_link C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_stats_monitor_mode_wifi_link_decode(const mavlink_message_t* msg, mavlink_openhd_stats_monitor_mode_wifi_link_t* openhd_stats_monitor_mode_wifi_link)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    openhd_stats_monitor_mode_wifi_link->curr_tx_bps = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_tx_bps(msg);
    openhd_stats_monitor_mode_wifi_link->curr_rx_bps = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_rx_bps(msg);
    openhd_stats_monitor_mode_wifi_link->count_tx_inj_error_hint = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_count_tx_inj_error_hint(msg);
    openhd_stats_monitor_mode_wifi_link->count_tx_dropped_packets = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_count_tx_dropped_packets(msg);
    openhd_stats_monitor_mode_wifi_link->dummy2 = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_dummy2(msg);
    openhd_stats_monitor_mode_wifi_link->curr_tx_pps = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_tx_pps(msg);
    openhd_stats_monitor_mode_wifi_link->curr_rx_pps = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_rx_pps(msg);
    openhd_stats_monitor_mode_wifi_link->curr_rx_big_gaps_counter = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_rx_big_gaps_counter(msg);
    openhd_stats_monitor_mode_wifi_link->curr_tx_channel_mhz = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_tx_channel_mhz(msg);
    openhd_stats_monitor_mode_wifi_link->curr_rate_kbits = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_rate_kbits(msg);
    openhd_stats_monitor_mode_wifi_link->dummy1 = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_dummy1(msg);
    openhd_stats_monitor_mode_wifi_link->curr_rx_packet_loss_perc = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_rx_packet_loss_perc(msg);
    openhd_stats_monitor_mode_wifi_link->curr_tx_channel_w_mhz = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_tx_channel_w_mhz(msg);
    openhd_stats_monitor_mode_wifi_link->curr_tx_mcs_index = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_tx_mcs_index(msg);
    openhd_stats_monitor_mode_wifi_link->curr_n_rate_adjustments = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_curr_n_rate_adjustments(msg);
    openhd_stats_monitor_mode_wifi_link->bitfield = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_bitfield(msg);
    openhd_stats_monitor_mode_wifi_link->pollution_perc = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_pollution_perc(msg);
    openhd_stats_monitor_mode_wifi_link->dummy0 = mavlink_msg_openhd_stats_monitor_mode_wifi_link_get_dummy0(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN;
        memset(openhd_stats_monitor_mode_wifi_link, 0, MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_LEN);
    memcpy(openhd_stats_monitor_mode_wifi_link, _MAV_PAYLOAD(msg), len);
#endif
}
