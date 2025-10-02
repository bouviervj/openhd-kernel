#pragma once
// MESSAGE OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE PACKING

#define MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE 1217


typedef struct __mavlink_openhd_stats_wb_video_ground_fec_performance_t {
 uint32_t curr_fec_decode_time_avg_us; /*<  todo*/
 uint32_t curr_fec_decode_time_min_us; /*<  todo*/
 uint32_t curr_fec_decode_time_max_us; /*<  todo*/
 int32_t dummy2; /*<  for future use*/
 int16_t dummy1; /*<  for future use*/
 uint8_t link_index; /*<  link_index*/
 int8_t dummy0; /*<  for future use*/
} mavlink_openhd_stats_wb_video_ground_fec_performance_t;

#define MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_LEN 20
#define MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_MIN_LEN 20
#define MAVLINK_MSG_ID_1217_LEN 20
#define MAVLINK_MSG_ID_1217_MIN_LEN 20

#define MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_CRC 247
#define MAVLINK_MSG_ID_1217_CRC 247



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE { \
    1217, \
    "OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE", \
    7, \
    {  { "link_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_openhd_stats_wb_video_ground_fec_performance_t, link_index) }, \
         { "curr_fec_decode_time_avg_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_openhd_stats_wb_video_ground_fec_performance_t, curr_fec_decode_time_avg_us) }, \
         { "curr_fec_decode_time_min_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_openhd_stats_wb_video_ground_fec_performance_t, curr_fec_decode_time_min_us) }, \
         { "curr_fec_decode_time_max_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_openhd_stats_wb_video_ground_fec_performance_t, curr_fec_decode_time_max_us) }, \
         { "dummy0", NULL, MAVLINK_TYPE_INT8_T, 0, 19, offsetof(mavlink_openhd_stats_wb_video_ground_fec_performance_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_openhd_stats_wb_video_ground_fec_performance_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_openhd_stats_wb_video_ground_fec_performance_t, dummy2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE { \
    "OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE", \
    7, \
    {  { "link_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_openhd_stats_wb_video_ground_fec_performance_t, link_index) }, \
         { "curr_fec_decode_time_avg_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_openhd_stats_wb_video_ground_fec_performance_t, curr_fec_decode_time_avg_us) }, \
         { "curr_fec_decode_time_min_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_openhd_stats_wb_video_ground_fec_performance_t, curr_fec_decode_time_min_us) }, \
         { "curr_fec_decode_time_max_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_openhd_stats_wb_video_ground_fec_performance_t, curr_fec_decode_time_max_us) }, \
         { "dummy0", NULL, MAVLINK_TYPE_INT8_T, 0, 19, offsetof(mavlink_openhd_stats_wb_video_ground_fec_performance_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_openhd_stats_wb_video_ground_fec_performance_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_openhd_stats_wb_video_ground_fec_performance_t, dummy2) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_stats_wb_video_ground_fec_performance message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param link_index  link_index
 * @param curr_fec_decode_time_avg_us  todo
 * @param curr_fec_decode_time_min_us  todo
 * @param curr_fec_decode_time_max_us  todo
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_stats_wb_video_ground_fec_performance_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t link_index, uint32_t curr_fec_decode_time_avg_us, uint32_t curr_fec_decode_time_min_us, uint32_t curr_fec_decode_time_max_us, int8_t dummy0, int16_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_LEN];
    _mav_put_uint32_t(buf, 0, curr_fec_decode_time_avg_us);
    _mav_put_uint32_t(buf, 4, curr_fec_decode_time_min_us);
    _mav_put_uint32_t(buf, 8, curr_fec_decode_time_max_us);
    _mav_put_int32_t(buf, 12, dummy2);
    _mav_put_int16_t(buf, 16, dummy1);
    _mav_put_uint8_t(buf, 18, link_index);
    _mav_put_int8_t(buf, 19, dummy0);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_LEN);
#else
    mavlink_openhd_stats_wb_video_ground_fec_performance_t packet;
    packet.curr_fec_decode_time_avg_us = curr_fec_decode_time_avg_us;
    packet.curr_fec_decode_time_min_us = curr_fec_decode_time_min_us;
    packet.curr_fec_decode_time_max_us = curr_fec_decode_time_max_us;
    packet.dummy2 = dummy2;
    packet.dummy1 = dummy1;
    packet.link_index = link_index;
    packet.dummy0 = dummy0;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_CRC);
}

/**
 * @brief Pack a openhd_stats_wb_video_ground_fec_performance message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param link_index  link_index
 * @param curr_fec_decode_time_avg_us  todo
 * @param curr_fec_decode_time_min_us  todo
 * @param curr_fec_decode_time_max_us  todo
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_stats_wb_video_ground_fec_performance_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t link_index,uint32_t curr_fec_decode_time_avg_us,uint32_t curr_fec_decode_time_min_us,uint32_t curr_fec_decode_time_max_us,int8_t dummy0,int16_t dummy1,int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_LEN];
    _mav_put_uint32_t(buf, 0, curr_fec_decode_time_avg_us);
    _mav_put_uint32_t(buf, 4, curr_fec_decode_time_min_us);
    _mav_put_uint32_t(buf, 8, curr_fec_decode_time_max_us);
    _mav_put_int32_t(buf, 12, dummy2);
    _mav_put_int16_t(buf, 16, dummy1);
    _mav_put_uint8_t(buf, 18, link_index);
    _mav_put_int8_t(buf, 19, dummy0);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_LEN);
#else
    mavlink_openhd_stats_wb_video_ground_fec_performance_t packet;
    packet.curr_fec_decode_time_avg_us = curr_fec_decode_time_avg_us;
    packet.curr_fec_decode_time_min_us = curr_fec_decode_time_min_us;
    packet.curr_fec_decode_time_max_us = curr_fec_decode_time_max_us;
    packet.dummy2 = dummy2;
    packet.dummy1 = dummy1;
    packet.link_index = link_index;
    packet.dummy0 = dummy0;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_CRC);
}

/**
 * @brief Encode a openhd_stats_wb_video_ground_fec_performance struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_stats_wb_video_ground_fec_performance C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_stats_wb_video_ground_fec_performance_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_stats_wb_video_ground_fec_performance_t* openhd_stats_wb_video_ground_fec_performance)
{
    return mavlink_msg_openhd_stats_wb_video_ground_fec_performance_pack(system_id, component_id, msg, openhd_stats_wb_video_ground_fec_performance->link_index, openhd_stats_wb_video_ground_fec_performance->curr_fec_decode_time_avg_us, openhd_stats_wb_video_ground_fec_performance->curr_fec_decode_time_min_us, openhd_stats_wb_video_ground_fec_performance->curr_fec_decode_time_max_us, openhd_stats_wb_video_ground_fec_performance->dummy0, openhd_stats_wb_video_ground_fec_performance->dummy1, openhd_stats_wb_video_ground_fec_performance->dummy2);
}

/**
 * @brief Encode a openhd_stats_wb_video_ground_fec_performance struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_stats_wb_video_ground_fec_performance C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_stats_wb_video_ground_fec_performance_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_stats_wb_video_ground_fec_performance_t* openhd_stats_wb_video_ground_fec_performance)
{
    return mavlink_msg_openhd_stats_wb_video_ground_fec_performance_pack_chan(system_id, component_id, chan, msg, openhd_stats_wb_video_ground_fec_performance->link_index, openhd_stats_wb_video_ground_fec_performance->curr_fec_decode_time_avg_us, openhd_stats_wb_video_ground_fec_performance->curr_fec_decode_time_min_us, openhd_stats_wb_video_ground_fec_performance->curr_fec_decode_time_max_us, openhd_stats_wb_video_ground_fec_performance->dummy0, openhd_stats_wb_video_ground_fec_performance->dummy1, openhd_stats_wb_video_ground_fec_performance->dummy2);
}

/**
 * @brief Send a openhd_stats_wb_video_ground_fec_performance message
 * @param chan MAVLink channel to send the message
 *
 * @param link_index  link_index
 * @param curr_fec_decode_time_avg_us  todo
 * @param curr_fec_decode_time_min_us  todo
 * @param curr_fec_decode_time_max_us  todo
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_stats_wb_video_ground_fec_performance_send(mavlink_channel_t chan, uint8_t link_index, uint32_t curr_fec_decode_time_avg_us, uint32_t curr_fec_decode_time_min_us, uint32_t curr_fec_decode_time_max_us, int8_t dummy0, int16_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_LEN];
    _mav_put_uint32_t(buf, 0, curr_fec_decode_time_avg_us);
    _mav_put_uint32_t(buf, 4, curr_fec_decode_time_min_us);
    _mav_put_uint32_t(buf, 8, curr_fec_decode_time_max_us);
    _mav_put_int32_t(buf, 12, dummy2);
    _mav_put_int16_t(buf, 16, dummy1);
    _mav_put_uint8_t(buf, 18, link_index);
    _mav_put_int8_t(buf, 19, dummy0);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE, buf, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_CRC);
#else
    mavlink_openhd_stats_wb_video_ground_fec_performance_t packet;
    packet.curr_fec_decode_time_avg_us = curr_fec_decode_time_avg_us;
    packet.curr_fec_decode_time_min_us = curr_fec_decode_time_min_us;
    packet.curr_fec_decode_time_max_us = curr_fec_decode_time_max_us;
    packet.dummy2 = dummy2;
    packet.dummy1 = dummy1;
    packet.link_index = link_index;
    packet.dummy0 = dummy0;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_CRC);
#endif
}

/**
 * @brief Send a openhd_stats_wb_video_ground_fec_performance message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_stats_wb_video_ground_fec_performance_send_struct(mavlink_channel_t chan, const mavlink_openhd_stats_wb_video_ground_fec_performance_t* openhd_stats_wb_video_ground_fec_performance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_stats_wb_video_ground_fec_performance_send(chan, openhd_stats_wb_video_ground_fec_performance->link_index, openhd_stats_wb_video_ground_fec_performance->curr_fec_decode_time_avg_us, openhd_stats_wb_video_ground_fec_performance->curr_fec_decode_time_min_us, openhd_stats_wb_video_ground_fec_performance->curr_fec_decode_time_max_us, openhd_stats_wb_video_ground_fec_performance->dummy0, openhd_stats_wb_video_ground_fec_performance->dummy1, openhd_stats_wb_video_ground_fec_performance->dummy2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE, (const char *)openhd_stats_wb_video_ground_fec_performance, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_stats_wb_video_ground_fec_performance_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t link_index, uint32_t curr_fec_decode_time_avg_us, uint32_t curr_fec_decode_time_min_us, uint32_t curr_fec_decode_time_max_us, int8_t dummy0, int16_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, curr_fec_decode_time_avg_us);
    _mav_put_uint32_t(buf, 4, curr_fec_decode_time_min_us);
    _mav_put_uint32_t(buf, 8, curr_fec_decode_time_max_us);
    _mav_put_int32_t(buf, 12, dummy2);
    _mav_put_int16_t(buf, 16, dummy1);
    _mav_put_uint8_t(buf, 18, link_index);
    _mav_put_int8_t(buf, 19, dummy0);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE, buf, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_CRC);
#else
    mavlink_openhd_stats_wb_video_ground_fec_performance_t *packet = (mavlink_openhd_stats_wb_video_ground_fec_performance_t *)msgbuf;
    packet->curr_fec_decode_time_avg_us = curr_fec_decode_time_avg_us;
    packet->curr_fec_decode_time_min_us = curr_fec_decode_time_min_us;
    packet->curr_fec_decode_time_max_us = curr_fec_decode_time_max_us;
    packet->dummy2 = dummy2;
    packet->dummy1 = dummy1;
    packet->link_index = link_index;
    packet->dummy0 = dummy0;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE, (const char *)packet, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_CRC);
#endif
}
#endif

#endif

// MESSAGE OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE UNPACKING


/**
 * @brief Get field link_index from openhd_stats_wb_video_ground_fec_performance message
 *
 * @return  link_index
 */
static inline uint8_t mavlink_msg_openhd_stats_wb_video_ground_fec_performance_get_link_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field curr_fec_decode_time_avg_us from openhd_stats_wb_video_ground_fec_performance message
 *
 * @return  todo
 */
static inline uint32_t mavlink_msg_openhd_stats_wb_video_ground_fec_performance_get_curr_fec_decode_time_avg_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field curr_fec_decode_time_min_us from openhd_stats_wb_video_ground_fec_performance message
 *
 * @return  todo
 */
static inline uint32_t mavlink_msg_openhd_stats_wb_video_ground_fec_performance_get_curr_fec_decode_time_min_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field curr_fec_decode_time_max_us from openhd_stats_wb_video_ground_fec_performance message
 *
 * @return  todo
 */
static inline uint32_t mavlink_msg_openhd_stats_wb_video_ground_fec_performance_get_curr_fec_decode_time_max_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field dummy0 from openhd_stats_wb_video_ground_fec_performance message
 *
 * @return  for future use
 */
static inline int8_t mavlink_msg_openhd_stats_wb_video_ground_fec_performance_get_dummy0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  19);
}

/**
 * @brief Get field dummy1 from openhd_stats_wb_video_ground_fec_performance message
 *
 * @return  for future use
 */
static inline int16_t mavlink_msg_openhd_stats_wb_video_ground_fec_performance_get_dummy1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field dummy2 from openhd_stats_wb_video_ground_fec_performance message
 *
 * @return  for future use
 */
static inline int32_t mavlink_msg_openhd_stats_wb_video_ground_fec_performance_get_dummy2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Decode a openhd_stats_wb_video_ground_fec_performance message into a struct
 *
 * @param msg The message to decode
 * @param openhd_stats_wb_video_ground_fec_performance C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_stats_wb_video_ground_fec_performance_decode(const mavlink_message_t* msg, mavlink_openhd_stats_wb_video_ground_fec_performance_t* openhd_stats_wb_video_ground_fec_performance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    openhd_stats_wb_video_ground_fec_performance->curr_fec_decode_time_avg_us = mavlink_msg_openhd_stats_wb_video_ground_fec_performance_get_curr_fec_decode_time_avg_us(msg);
    openhd_stats_wb_video_ground_fec_performance->curr_fec_decode_time_min_us = mavlink_msg_openhd_stats_wb_video_ground_fec_performance_get_curr_fec_decode_time_min_us(msg);
    openhd_stats_wb_video_ground_fec_performance->curr_fec_decode_time_max_us = mavlink_msg_openhd_stats_wb_video_ground_fec_performance_get_curr_fec_decode_time_max_us(msg);
    openhd_stats_wb_video_ground_fec_performance->dummy2 = mavlink_msg_openhd_stats_wb_video_ground_fec_performance_get_dummy2(msg);
    openhd_stats_wb_video_ground_fec_performance->dummy1 = mavlink_msg_openhd_stats_wb_video_ground_fec_performance_get_dummy1(msg);
    openhd_stats_wb_video_ground_fec_performance->link_index = mavlink_msg_openhd_stats_wb_video_ground_fec_performance_get_link_index(msg);
    openhd_stats_wb_video_ground_fec_performance->dummy0 = mavlink_msg_openhd_stats_wb_video_ground_fec_performance_get_dummy0(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_LEN;
        memset(openhd_stats_wb_video_ground_fec_performance, 0, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_LEN);
    memcpy(openhd_stats_wb_video_ground_fec_performance, _MAV_PAYLOAD(msg), len);
#endif
}
