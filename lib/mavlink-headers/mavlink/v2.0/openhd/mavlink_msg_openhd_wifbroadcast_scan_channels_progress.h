#pragma once
// MESSAGE OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS PACKING

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS 1223


typedef struct __mavlink_openhd_wifbroadcast_scan_channels_progress_t {
 uint16_t channel_mhz; /*<  Scanned channel*/
 uint8_t progress; /*<  progress [0..100]*/
 uint8_t channel_width_mhz; /*<  channel width mhz*/
 uint8_t success; /*<  Set to 1 if openhd air unit was found on this channel (break)*/
} mavlink_openhd_wifbroadcast_scan_channels_progress_t;

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_LEN 5
#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_MIN_LEN 5
#define MAVLINK_MSG_ID_1223_LEN 5
#define MAVLINK_MSG_ID_1223_MIN_LEN 5

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_CRC 60
#define MAVLINK_MSG_ID_1223_CRC 60



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS { \
    1223, \
    "OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS", \
    4, \
    {  { "progress", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_openhd_wifbroadcast_scan_channels_progress_t, progress) }, \
         { "channel_mhz", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_openhd_wifbroadcast_scan_channels_progress_t, channel_mhz) }, \
         { "channel_width_mhz", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_openhd_wifbroadcast_scan_channels_progress_t, channel_width_mhz) }, \
         { "success", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_openhd_wifbroadcast_scan_channels_progress_t, success) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS { \
    "OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS", \
    4, \
    {  { "progress", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_openhd_wifbroadcast_scan_channels_progress_t, progress) }, \
         { "channel_mhz", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_openhd_wifbroadcast_scan_channels_progress_t, channel_mhz) }, \
         { "channel_width_mhz", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_openhd_wifbroadcast_scan_channels_progress_t, channel_width_mhz) }, \
         { "success", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_openhd_wifbroadcast_scan_channels_progress_t, success) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_wifbroadcast_scan_channels_progress message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param progress  progress [0..100]
 * @param channel_mhz  Scanned channel
 * @param channel_width_mhz  channel width mhz
 * @param success  Set to 1 if openhd air unit was found on this channel (break)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_scan_channels_progress_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t progress, uint16_t channel_mhz, uint8_t channel_width_mhz, uint8_t success)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_LEN];
    _mav_put_uint16_t(buf, 0, channel_mhz);
    _mav_put_uint8_t(buf, 2, progress);
    _mav_put_uint8_t(buf, 3, channel_width_mhz);
    _mav_put_uint8_t(buf, 4, success);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_LEN);
#else
    mavlink_openhd_wifbroadcast_scan_channels_progress_t packet;
    packet.channel_mhz = channel_mhz;
    packet.progress = progress;
    packet.channel_width_mhz = channel_width_mhz;
    packet.success = success;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_CRC);
}

/**
 * @brief Pack a openhd_wifbroadcast_scan_channels_progress message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param progress  progress [0..100]
 * @param channel_mhz  Scanned channel
 * @param channel_width_mhz  channel width mhz
 * @param success  Set to 1 if openhd air unit was found on this channel (break)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_scan_channels_progress_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t progress,uint16_t channel_mhz,uint8_t channel_width_mhz,uint8_t success)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_LEN];
    _mav_put_uint16_t(buf, 0, channel_mhz);
    _mav_put_uint8_t(buf, 2, progress);
    _mav_put_uint8_t(buf, 3, channel_width_mhz);
    _mav_put_uint8_t(buf, 4, success);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_LEN);
#else
    mavlink_openhd_wifbroadcast_scan_channels_progress_t packet;
    packet.channel_mhz = channel_mhz;
    packet.progress = progress;
    packet.channel_width_mhz = channel_width_mhz;
    packet.success = success;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_CRC);
}

/**
 * @brief Encode a openhd_wifbroadcast_scan_channels_progress struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_wifbroadcast_scan_channels_progress C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_scan_channels_progress_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_wifbroadcast_scan_channels_progress_t* openhd_wifbroadcast_scan_channels_progress)
{
    return mavlink_msg_openhd_wifbroadcast_scan_channels_progress_pack(system_id, component_id, msg, openhd_wifbroadcast_scan_channels_progress->progress, openhd_wifbroadcast_scan_channels_progress->channel_mhz, openhd_wifbroadcast_scan_channels_progress->channel_width_mhz, openhd_wifbroadcast_scan_channels_progress->success);
}

/**
 * @brief Encode a openhd_wifbroadcast_scan_channels_progress struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_wifbroadcast_scan_channels_progress C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_scan_channels_progress_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_wifbroadcast_scan_channels_progress_t* openhd_wifbroadcast_scan_channels_progress)
{
    return mavlink_msg_openhd_wifbroadcast_scan_channels_progress_pack_chan(system_id, component_id, chan, msg, openhd_wifbroadcast_scan_channels_progress->progress, openhd_wifbroadcast_scan_channels_progress->channel_mhz, openhd_wifbroadcast_scan_channels_progress->channel_width_mhz, openhd_wifbroadcast_scan_channels_progress->success);
}

/**
 * @brief Send a openhd_wifbroadcast_scan_channels_progress message
 * @param chan MAVLink channel to send the message
 *
 * @param progress  progress [0..100]
 * @param channel_mhz  Scanned channel
 * @param channel_width_mhz  channel width mhz
 * @param success  Set to 1 if openhd air unit was found on this channel (break)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_wifbroadcast_scan_channels_progress_send(mavlink_channel_t chan, uint8_t progress, uint16_t channel_mhz, uint8_t channel_width_mhz, uint8_t success)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_LEN];
    _mav_put_uint16_t(buf, 0, channel_mhz);
    _mav_put_uint8_t(buf, 2, progress);
    _mav_put_uint8_t(buf, 3, channel_width_mhz);
    _mav_put_uint8_t(buf, 4, success);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS, buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_CRC);
#else
    mavlink_openhd_wifbroadcast_scan_channels_progress_t packet;
    packet.channel_mhz = channel_mhz;
    packet.progress = progress;
    packet.channel_width_mhz = channel_width_mhz;
    packet.success = success;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_CRC);
#endif
}

/**
 * @brief Send a openhd_wifbroadcast_scan_channels_progress message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_wifbroadcast_scan_channels_progress_send_struct(mavlink_channel_t chan, const mavlink_openhd_wifbroadcast_scan_channels_progress_t* openhd_wifbroadcast_scan_channels_progress)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_wifbroadcast_scan_channels_progress_send(chan, openhd_wifbroadcast_scan_channels_progress->progress, openhd_wifbroadcast_scan_channels_progress->channel_mhz, openhd_wifbroadcast_scan_channels_progress->channel_width_mhz, openhd_wifbroadcast_scan_channels_progress->success);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS, (const char *)openhd_wifbroadcast_scan_channels_progress, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_wifbroadcast_scan_channels_progress_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t progress, uint16_t channel_mhz, uint8_t channel_width_mhz, uint8_t success)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, channel_mhz);
    _mav_put_uint8_t(buf, 2, progress);
    _mav_put_uint8_t(buf, 3, channel_width_mhz);
    _mav_put_uint8_t(buf, 4, success);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS, buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_CRC);
#else
    mavlink_openhd_wifbroadcast_scan_channels_progress_t *packet = (mavlink_openhd_wifbroadcast_scan_channels_progress_t *)msgbuf;
    packet->channel_mhz = channel_mhz;
    packet->progress = progress;
    packet->channel_width_mhz = channel_width_mhz;
    packet->success = success;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS, (const char *)packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_CRC);
#endif
}
#endif

#endif

// MESSAGE OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS UNPACKING


/**
 * @brief Get field progress from openhd_wifbroadcast_scan_channels_progress message
 *
 * @return  progress [0..100]
 */
static inline uint8_t mavlink_msg_openhd_wifbroadcast_scan_channels_progress_get_progress(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field channel_mhz from openhd_wifbroadcast_scan_channels_progress message
 *
 * @return  Scanned channel
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_scan_channels_progress_get_channel_mhz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field channel_width_mhz from openhd_wifbroadcast_scan_channels_progress message
 *
 * @return  channel width mhz
 */
static inline uint8_t mavlink_msg_openhd_wifbroadcast_scan_channels_progress_get_channel_width_mhz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field success from openhd_wifbroadcast_scan_channels_progress message
 *
 * @return  Set to 1 if openhd air unit was found on this channel (break)
 */
static inline uint8_t mavlink_msg_openhd_wifbroadcast_scan_channels_progress_get_success(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Decode a openhd_wifbroadcast_scan_channels_progress message into a struct
 *
 * @param msg The message to decode
 * @param openhd_wifbroadcast_scan_channels_progress C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_wifbroadcast_scan_channels_progress_decode(const mavlink_message_t* msg, mavlink_openhd_wifbroadcast_scan_channels_progress_t* openhd_wifbroadcast_scan_channels_progress)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    openhd_wifbroadcast_scan_channels_progress->channel_mhz = mavlink_msg_openhd_wifbroadcast_scan_channels_progress_get_channel_mhz(msg);
    openhd_wifbroadcast_scan_channels_progress->progress = mavlink_msg_openhd_wifbroadcast_scan_channels_progress_get_progress(msg);
    openhd_wifbroadcast_scan_channels_progress->channel_width_mhz = mavlink_msg_openhd_wifbroadcast_scan_channels_progress_get_channel_width_mhz(msg);
    openhd_wifbroadcast_scan_channels_progress->success = mavlink_msg_openhd_wifbroadcast_scan_channels_progress_get_success(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_LEN;
        memset(openhd_wifbroadcast_scan_channels_progress, 0, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_LEN);
    memcpy(openhd_wifbroadcast_scan_channels_progress, _MAV_PAYLOAD(msg), len);
#endif
}
