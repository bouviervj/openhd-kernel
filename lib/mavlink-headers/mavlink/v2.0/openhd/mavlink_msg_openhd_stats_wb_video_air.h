#pragma once
// MESSAGE OPENHD_STATS_WB_VIDEO_AIR PACKING

#define MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR 1214


typedef struct __mavlink_openhd_stats_wb_video_air_t {
 int32_t curr_measured_encoder_bitrate; /*<  curr_measured_encoder_bitrate*/
 int32_t curr_injected_bitrate; /*<  curr_injected_bitrate (+FEC overhead)*/
 int32_t curr_injected_pps; /*<  curr_injected_pps*/
 int32_t curr_dropped_frames; /*<  curr_dropped_frames*/
 int32_t dummy2; /*<  for future use*/
 int16_t curr_recommended_bitrate; /*<  curr_recommended_bitrate*/
 int16_t curr_fec_percentage; /*<  curr_fec_percentage*/
 int16_t dummy1; /*<  for future use*/
 uint8_t link_index; /*<  link_index*/
 int8_t dummy0; /*<  for future use*/
} mavlink_openhd_stats_wb_video_air_t;

#define MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN 28
#define MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_MIN_LEN 28
#define MAVLINK_MSG_ID_1214_LEN 28
#define MAVLINK_MSG_ID_1214_MIN_LEN 28

#define MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_CRC 137
#define MAVLINK_MSG_ID_1214_CRC 137



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_STATS_WB_VIDEO_AIR { \
    1214, \
    "OPENHD_STATS_WB_VIDEO_AIR", \
    10, \
    {  { "link_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_openhd_stats_wb_video_air_t, link_index) }, \
         { "curr_recommended_bitrate", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_recommended_bitrate) }, \
         { "curr_measured_encoder_bitrate", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_measured_encoder_bitrate) }, \
         { "curr_injected_bitrate", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_injected_bitrate) }, \
         { "curr_injected_pps", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_injected_pps) }, \
         { "curr_dropped_frames", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_dropped_frames) }, \
         { "curr_fec_percentage", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_fec_percentage) }, \
         { "dummy0", NULL, MAVLINK_TYPE_INT8_T, 0, 27, offsetof(mavlink_openhd_stats_wb_video_air_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_openhd_stats_wb_video_air_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_openhd_stats_wb_video_air_t, dummy2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_STATS_WB_VIDEO_AIR { \
    "OPENHD_STATS_WB_VIDEO_AIR", \
    10, \
    {  { "link_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_openhd_stats_wb_video_air_t, link_index) }, \
         { "curr_recommended_bitrate", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_recommended_bitrate) }, \
         { "curr_measured_encoder_bitrate", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_measured_encoder_bitrate) }, \
         { "curr_injected_bitrate", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_injected_bitrate) }, \
         { "curr_injected_pps", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_injected_pps) }, \
         { "curr_dropped_frames", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_dropped_frames) }, \
         { "curr_fec_percentage", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_openhd_stats_wb_video_air_t, curr_fec_percentage) }, \
         { "dummy0", NULL, MAVLINK_TYPE_INT8_T, 0, 27, offsetof(mavlink_openhd_stats_wb_video_air_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_openhd_stats_wb_video_air_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_openhd_stats_wb_video_air_t, dummy2) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_stats_wb_video_air message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param link_index  link_index
 * @param curr_recommended_bitrate  curr_recommended_bitrate
 * @param curr_measured_encoder_bitrate  curr_measured_encoder_bitrate
 * @param curr_injected_bitrate  curr_injected_bitrate (+FEC overhead)
 * @param curr_injected_pps  curr_injected_pps
 * @param curr_dropped_frames  curr_dropped_frames
 * @param curr_fec_percentage  curr_fec_percentage
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_stats_wb_video_air_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t link_index, int16_t curr_recommended_bitrate, int32_t curr_measured_encoder_bitrate, int32_t curr_injected_bitrate, int32_t curr_injected_pps, int32_t curr_dropped_frames, int16_t curr_fec_percentage, int8_t dummy0, int16_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN];
    _mav_put_int32_t(buf, 0, curr_measured_encoder_bitrate);
    _mav_put_int32_t(buf, 4, curr_injected_bitrate);
    _mav_put_int32_t(buf, 8, curr_injected_pps);
    _mav_put_int32_t(buf, 12, curr_dropped_frames);
    _mav_put_int32_t(buf, 16, dummy2);
    _mav_put_int16_t(buf, 20, curr_recommended_bitrate);
    _mav_put_int16_t(buf, 22, curr_fec_percentage);
    _mav_put_int16_t(buf, 24, dummy1);
    _mav_put_uint8_t(buf, 26, link_index);
    _mav_put_int8_t(buf, 27, dummy0);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN);
#else
    mavlink_openhd_stats_wb_video_air_t packet;
    packet.curr_measured_encoder_bitrate = curr_measured_encoder_bitrate;
    packet.curr_injected_bitrate = curr_injected_bitrate;
    packet.curr_injected_pps = curr_injected_pps;
    packet.curr_dropped_frames = curr_dropped_frames;
    packet.dummy2 = dummy2;
    packet.curr_recommended_bitrate = curr_recommended_bitrate;
    packet.curr_fec_percentage = curr_fec_percentage;
    packet.dummy1 = dummy1;
    packet.link_index = link_index;
    packet.dummy0 = dummy0;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_CRC);
}

/**
 * @brief Pack a openhd_stats_wb_video_air message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param link_index  link_index
 * @param curr_recommended_bitrate  curr_recommended_bitrate
 * @param curr_measured_encoder_bitrate  curr_measured_encoder_bitrate
 * @param curr_injected_bitrate  curr_injected_bitrate (+FEC overhead)
 * @param curr_injected_pps  curr_injected_pps
 * @param curr_dropped_frames  curr_dropped_frames
 * @param curr_fec_percentage  curr_fec_percentage
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_stats_wb_video_air_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t link_index,int16_t curr_recommended_bitrate,int32_t curr_measured_encoder_bitrate,int32_t curr_injected_bitrate,int32_t curr_injected_pps,int32_t curr_dropped_frames,int16_t curr_fec_percentage,int8_t dummy0,int16_t dummy1,int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN];
    _mav_put_int32_t(buf, 0, curr_measured_encoder_bitrate);
    _mav_put_int32_t(buf, 4, curr_injected_bitrate);
    _mav_put_int32_t(buf, 8, curr_injected_pps);
    _mav_put_int32_t(buf, 12, curr_dropped_frames);
    _mav_put_int32_t(buf, 16, dummy2);
    _mav_put_int16_t(buf, 20, curr_recommended_bitrate);
    _mav_put_int16_t(buf, 22, curr_fec_percentage);
    _mav_put_int16_t(buf, 24, dummy1);
    _mav_put_uint8_t(buf, 26, link_index);
    _mav_put_int8_t(buf, 27, dummy0);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN);
#else
    mavlink_openhd_stats_wb_video_air_t packet;
    packet.curr_measured_encoder_bitrate = curr_measured_encoder_bitrate;
    packet.curr_injected_bitrate = curr_injected_bitrate;
    packet.curr_injected_pps = curr_injected_pps;
    packet.curr_dropped_frames = curr_dropped_frames;
    packet.dummy2 = dummy2;
    packet.curr_recommended_bitrate = curr_recommended_bitrate;
    packet.curr_fec_percentage = curr_fec_percentage;
    packet.dummy1 = dummy1;
    packet.link_index = link_index;
    packet.dummy0 = dummy0;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_CRC);
}

/**
 * @brief Encode a openhd_stats_wb_video_air struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_stats_wb_video_air C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_stats_wb_video_air_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_stats_wb_video_air_t* openhd_stats_wb_video_air)
{
    return mavlink_msg_openhd_stats_wb_video_air_pack(system_id, component_id, msg, openhd_stats_wb_video_air->link_index, openhd_stats_wb_video_air->curr_recommended_bitrate, openhd_stats_wb_video_air->curr_measured_encoder_bitrate, openhd_stats_wb_video_air->curr_injected_bitrate, openhd_stats_wb_video_air->curr_injected_pps, openhd_stats_wb_video_air->curr_dropped_frames, openhd_stats_wb_video_air->curr_fec_percentage, openhd_stats_wb_video_air->dummy0, openhd_stats_wb_video_air->dummy1, openhd_stats_wb_video_air->dummy2);
}

/**
 * @brief Encode a openhd_stats_wb_video_air struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_stats_wb_video_air C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_stats_wb_video_air_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_stats_wb_video_air_t* openhd_stats_wb_video_air)
{
    return mavlink_msg_openhd_stats_wb_video_air_pack_chan(system_id, component_id, chan, msg, openhd_stats_wb_video_air->link_index, openhd_stats_wb_video_air->curr_recommended_bitrate, openhd_stats_wb_video_air->curr_measured_encoder_bitrate, openhd_stats_wb_video_air->curr_injected_bitrate, openhd_stats_wb_video_air->curr_injected_pps, openhd_stats_wb_video_air->curr_dropped_frames, openhd_stats_wb_video_air->curr_fec_percentage, openhd_stats_wb_video_air->dummy0, openhd_stats_wb_video_air->dummy1, openhd_stats_wb_video_air->dummy2);
}

/**
 * @brief Send a openhd_stats_wb_video_air message
 * @param chan MAVLink channel to send the message
 *
 * @param link_index  link_index
 * @param curr_recommended_bitrate  curr_recommended_bitrate
 * @param curr_measured_encoder_bitrate  curr_measured_encoder_bitrate
 * @param curr_injected_bitrate  curr_injected_bitrate (+FEC overhead)
 * @param curr_injected_pps  curr_injected_pps
 * @param curr_dropped_frames  curr_dropped_frames
 * @param curr_fec_percentage  curr_fec_percentage
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_stats_wb_video_air_send(mavlink_channel_t chan, uint8_t link_index, int16_t curr_recommended_bitrate, int32_t curr_measured_encoder_bitrate, int32_t curr_injected_bitrate, int32_t curr_injected_pps, int32_t curr_dropped_frames, int16_t curr_fec_percentage, int8_t dummy0, int16_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN];
    _mav_put_int32_t(buf, 0, curr_measured_encoder_bitrate);
    _mav_put_int32_t(buf, 4, curr_injected_bitrate);
    _mav_put_int32_t(buf, 8, curr_injected_pps);
    _mav_put_int32_t(buf, 12, curr_dropped_frames);
    _mav_put_int32_t(buf, 16, dummy2);
    _mav_put_int16_t(buf, 20, curr_recommended_bitrate);
    _mav_put_int16_t(buf, 22, curr_fec_percentage);
    _mav_put_int16_t(buf, 24, dummy1);
    _mav_put_uint8_t(buf, 26, link_index);
    _mav_put_int8_t(buf, 27, dummy0);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR, buf, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_CRC);
#else
    mavlink_openhd_stats_wb_video_air_t packet;
    packet.curr_measured_encoder_bitrate = curr_measured_encoder_bitrate;
    packet.curr_injected_bitrate = curr_injected_bitrate;
    packet.curr_injected_pps = curr_injected_pps;
    packet.curr_dropped_frames = curr_dropped_frames;
    packet.dummy2 = dummy2;
    packet.curr_recommended_bitrate = curr_recommended_bitrate;
    packet.curr_fec_percentage = curr_fec_percentage;
    packet.dummy1 = dummy1;
    packet.link_index = link_index;
    packet.dummy0 = dummy0;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_CRC);
#endif
}

/**
 * @brief Send a openhd_stats_wb_video_air message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_stats_wb_video_air_send_struct(mavlink_channel_t chan, const mavlink_openhd_stats_wb_video_air_t* openhd_stats_wb_video_air)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_stats_wb_video_air_send(chan, openhd_stats_wb_video_air->link_index, openhd_stats_wb_video_air->curr_recommended_bitrate, openhd_stats_wb_video_air->curr_measured_encoder_bitrate, openhd_stats_wb_video_air->curr_injected_bitrate, openhd_stats_wb_video_air->curr_injected_pps, openhd_stats_wb_video_air->curr_dropped_frames, openhd_stats_wb_video_air->curr_fec_percentage, openhd_stats_wb_video_air->dummy0, openhd_stats_wb_video_air->dummy1, openhd_stats_wb_video_air->dummy2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR, (const char *)openhd_stats_wb_video_air, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_stats_wb_video_air_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t link_index, int16_t curr_recommended_bitrate, int32_t curr_measured_encoder_bitrate, int32_t curr_injected_bitrate, int32_t curr_injected_pps, int32_t curr_dropped_frames, int16_t curr_fec_percentage, int8_t dummy0, int16_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, curr_measured_encoder_bitrate);
    _mav_put_int32_t(buf, 4, curr_injected_bitrate);
    _mav_put_int32_t(buf, 8, curr_injected_pps);
    _mav_put_int32_t(buf, 12, curr_dropped_frames);
    _mav_put_int32_t(buf, 16, dummy2);
    _mav_put_int16_t(buf, 20, curr_recommended_bitrate);
    _mav_put_int16_t(buf, 22, curr_fec_percentage);
    _mav_put_int16_t(buf, 24, dummy1);
    _mav_put_uint8_t(buf, 26, link_index);
    _mav_put_int8_t(buf, 27, dummy0);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR, buf, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_CRC);
#else
    mavlink_openhd_stats_wb_video_air_t *packet = (mavlink_openhd_stats_wb_video_air_t *)msgbuf;
    packet->curr_measured_encoder_bitrate = curr_measured_encoder_bitrate;
    packet->curr_injected_bitrate = curr_injected_bitrate;
    packet->curr_injected_pps = curr_injected_pps;
    packet->curr_dropped_frames = curr_dropped_frames;
    packet->dummy2 = dummy2;
    packet->curr_recommended_bitrate = curr_recommended_bitrate;
    packet->curr_fec_percentage = curr_fec_percentage;
    packet->dummy1 = dummy1;
    packet->link_index = link_index;
    packet->dummy0 = dummy0;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR, (const char *)packet, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_CRC);
#endif
}
#endif

#endif

// MESSAGE OPENHD_STATS_WB_VIDEO_AIR UNPACKING


/**
 * @brief Get field link_index from openhd_stats_wb_video_air message
 *
 * @return  link_index
 */
static inline uint8_t mavlink_msg_openhd_stats_wb_video_air_get_link_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  26);
}

/**
 * @brief Get field curr_recommended_bitrate from openhd_stats_wb_video_air message
 *
 * @return  curr_recommended_bitrate
 */
static inline int16_t mavlink_msg_openhd_stats_wb_video_air_get_curr_recommended_bitrate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field curr_measured_encoder_bitrate from openhd_stats_wb_video_air message
 *
 * @return  curr_measured_encoder_bitrate
 */
static inline int32_t mavlink_msg_openhd_stats_wb_video_air_get_curr_measured_encoder_bitrate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field curr_injected_bitrate from openhd_stats_wb_video_air message
 *
 * @return  curr_injected_bitrate (+FEC overhead)
 */
static inline int32_t mavlink_msg_openhd_stats_wb_video_air_get_curr_injected_bitrate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field curr_injected_pps from openhd_stats_wb_video_air message
 *
 * @return  curr_injected_pps
 */
static inline int32_t mavlink_msg_openhd_stats_wb_video_air_get_curr_injected_pps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field curr_dropped_frames from openhd_stats_wb_video_air message
 *
 * @return  curr_dropped_frames
 */
static inline int32_t mavlink_msg_openhd_stats_wb_video_air_get_curr_dropped_frames(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field curr_fec_percentage from openhd_stats_wb_video_air message
 *
 * @return  curr_fec_percentage
 */
static inline int16_t mavlink_msg_openhd_stats_wb_video_air_get_curr_fec_percentage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field dummy0 from openhd_stats_wb_video_air message
 *
 * @return  for future use
 */
static inline int8_t mavlink_msg_openhd_stats_wb_video_air_get_dummy0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  27);
}

/**
 * @brief Get field dummy1 from openhd_stats_wb_video_air message
 *
 * @return  for future use
 */
static inline int16_t mavlink_msg_openhd_stats_wb_video_air_get_dummy1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field dummy2 from openhd_stats_wb_video_air message
 *
 * @return  for future use
 */
static inline int32_t mavlink_msg_openhd_stats_wb_video_air_get_dummy2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Decode a openhd_stats_wb_video_air message into a struct
 *
 * @param msg The message to decode
 * @param openhd_stats_wb_video_air C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_stats_wb_video_air_decode(const mavlink_message_t* msg, mavlink_openhd_stats_wb_video_air_t* openhd_stats_wb_video_air)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    openhd_stats_wb_video_air->curr_measured_encoder_bitrate = mavlink_msg_openhd_stats_wb_video_air_get_curr_measured_encoder_bitrate(msg);
    openhd_stats_wb_video_air->curr_injected_bitrate = mavlink_msg_openhd_stats_wb_video_air_get_curr_injected_bitrate(msg);
    openhd_stats_wb_video_air->curr_injected_pps = mavlink_msg_openhd_stats_wb_video_air_get_curr_injected_pps(msg);
    openhd_stats_wb_video_air->curr_dropped_frames = mavlink_msg_openhd_stats_wb_video_air_get_curr_dropped_frames(msg);
    openhd_stats_wb_video_air->dummy2 = mavlink_msg_openhd_stats_wb_video_air_get_dummy2(msg);
    openhd_stats_wb_video_air->curr_recommended_bitrate = mavlink_msg_openhd_stats_wb_video_air_get_curr_recommended_bitrate(msg);
    openhd_stats_wb_video_air->curr_fec_percentage = mavlink_msg_openhd_stats_wb_video_air_get_curr_fec_percentage(msg);
    openhd_stats_wb_video_air->dummy1 = mavlink_msg_openhd_stats_wb_video_air_get_dummy1(msg);
    openhd_stats_wb_video_air->link_index = mavlink_msg_openhd_stats_wb_video_air_get_link_index(msg);
    openhd_stats_wb_video_air->dummy0 = mavlink_msg_openhd_stats_wb_video_air_get_dummy0(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN;
        memset(openhd_stats_wb_video_air, 0, MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_LEN);
    memcpy(openhd_stats_wb_video_air, _MAV_PAYLOAD(msg), len);
#endif
}
