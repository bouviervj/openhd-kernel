#pragma once
// MESSAGE OPENHD_VERSION_MESSAGE PACKING

#define MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE 1221


typedef struct __mavlink_openhd_version_message_t {
 uint8_t major; /*<  major version,e.g. 2*/
 uint8_t minor; /*<  minor version,e.g. 5*/
 uint8_t patch; /*<  patch version,e.g. 1*/
 uint8_t release_type; /*<  release=0,beta=1,alpha=2,development=3*/
 uint8_t dummy; /*<  reserved for future use*/
} mavlink_openhd_version_message_t;

#define MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_LEN 5
#define MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_MIN_LEN 5
#define MAVLINK_MSG_ID_1221_LEN 5
#define MAVLINK_MSG_ID_1221_MIN_LEN 5

#define MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_CRC 246
#define MAVLINK_MSG_ID_1221_CRC 246



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_VERSION_MESSAGE { \
    1221, \
    "OPENHD_VERSION_MESSAGE", \
    5, \
    {  { "major", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_openhd_version_message_t, major) }, \
         { "minor", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_openhd_version_message_t, minor) }, \
         { "patch", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_openhd_version_message_t, patch) }, \
         { "release_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_openhd_version_message_t, release_type) }, \
         { "dummy", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_openhd_version_message_t, dummy) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_VERSION_MESSAGE { \
    "OPENHD_VERSION_MESSAGE", \
    5, \
    {  { "major", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_openhd_version_message_t, major) }, \
         { "minor", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_openhd_version_message_t, minor) }, \
         { "patch", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_openhd_version_message_t, patch) }, \
         { "release_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_openhd_version_message_t, release_type) }, \
         { "dummy", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_openhd_version_message_t, dummy) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_version_message message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param major  major version,e.g. 2
 * @param minor  minor version,e.g. 5
 * @param patch  patch version,e.g. 1
 * @param release_type  release=0,beta=1,alpha=2,development=3
 * @param dummy  reserved for future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_version_message_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t major, uint8_t minor, uint8_t patch, uint8_t release_type, uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_LEN];
    _mav_put_uint8_t(buf, 0, major);
    _mav_put_uint8_t(buf, 1, minor);
    _mav_put_uint8_t(buf, 2, patch);
    _mav_put_uint8_t(buf, 3, release_type);
    _mav_put_uint8_t(buf, 4, dummy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_LEN);
#else
    mavlink_openhd_version_message_t packet;
    packet.major = major;
    packet.minor = minor;
    packet.patch = patch;
    packet.release_type = release_type;
    packet.dummy = dummy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_LEN, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_CRC);
}

/**
 * @brief Pack a openhd_version_message message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param major  major version,e.g. 2
 * @param minor  minor version,e.g. 5
 * @param patch  patch version,e.g. 1
 * @param release_type  release=0,beta=1,alpha=2,development=3
 * @param dummy  reserved for future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_version_message_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t major,uint8_t minor,uint8_t patch,uint8_t release_type,uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_LEN];
    _mav_put_uint8_t(buf, 0, major);
    _mav_put_uint8_t(buf, 1, minor);
    _mav_put_uint8_t(buf, 2, patch);
    _mav_put_uint8_t(buf, 3, release_type);
    _mav_put_uint8_t(buf, 4, dummy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_LEN);
#else
    mavlink_openhd_version_message_t packet;
    packet.major = major;
    packet.minor = minor;
    packet.patch = patch;
    packet.release_type = release_type;
    packet.dummy = dummy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_LEN, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_CRC);
}

/**
 * @brief Encode a openhd_version_message struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_version_message C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_version_message_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_version_message_t* openhd_version_message)
{
    return mavlink_msg_openhd_version_message_pack(system_id, component_id, msg, openhd_version_message->major, openhd_version_message->minor, openhd_version_message->patch, openhd_version_message->release_type, openhd_version_message->dummy);
}

/**
 * @brief Encode a openhd_version_message struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_version_message C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_version_message_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_version_message_t* openhd_version_message)
{
    return mavlink_msg_openhd_version_message_pack_chan(system_id, component_id, chan, msg, openhd_version_message->major, openhd_version_message->minor, openhd_version_message->patch, openhd_version_message->release_type, openhd_version_message->dummy);
}

/**
 * @brief Send a openhd_version_message message
 * @param chan MAVLink channel to send the message
 *
 * @param major  major version,e.g. 2
 * @param minor  minor version,e.g. 5
 * @param patch  patch version,e.g. 1
 * @param release_type  release=0,beta=1,alpha=2,development=3
 * @param dummy  reserved for future use
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_version_message_send(mavlink_channel_t chan, uint8_t major, uint8_t minor, uint8_t patch, uint8_t release_type, uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_LEN];
    _mav_put_uint8_t(buf, 0, major);
    _mav_put_uint8_t(buf, 1, minor);
    _mav_put_uint8_t(buf, 2, patch);
    _mav_put_uint8_t(buf, 3, release_type);
    _mav_put_uint8_t(buf, 4, dummy);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE, buf, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_LEN, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_CRC);
#else
    mavlink_openhd_version_message_t packet;
    packet.major = major;
    packet.minor = minor;
    packet.patch = patch;
    packet.release_type = release_type;
    packet.dummy = dummy;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_LEN, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_CRC);
#endif
}

/**
 * @brief Send a openhd_version_message message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_version_message_send_struct(mavlink_channel_t chan, const mavlink_openhd_version_message_t* openhd_version_message)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_version_message_send(chan, openhd_version_message->major, openhd_version_message->minor, openhd_version_message->patch, openhd_version_message->release_type, openhd_version_message->dummy);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE, (const char *)openhd_version_message, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_LEN, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_version_message_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t major, uint8_t minor, uint8_t patch, uint8_t release_type, uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, major);
    _mav_put_uint8_t(buf, 1, minor);
    _mav_put_uint8_t(buf, 2, patch);
    _mav_put_uint8_t(buf, 3, release_type);
    _mav_put_uint8_t(buf, 4, dummy);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE, buf, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_LEN, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_CRC);
#else
    mavlink_openhd_version_message_t *packet = (mavlink_openhd_version_message_t *)msgbuf;
    packet->major = major;
    packet->minor = minor;
    packet->patch = patch;
    packet->release_type = release_type;
    packet->dummy = dummy;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE, (const char *)packet, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_LEN, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_CRC);
#endif
}
#endif

#endif

// MESSAGE OPENHD_VERSION_MESSAGE UNPACKING


/**
 * @brief Get field major from openhd_version_message message
 *
 * @return  major version,e.g. 2
 */
static inline uint8_t mavlink_msg_openhd_version_message_get_major(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field minor from openhd_version_message message
 *
 * @return  minor version,e.g. 5
 */
static inline uint8_t mavlink_msg_openhd_version_message_get_minor(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field patch from openhd_version_message message
 *
 * @return  patch version,e.g. 1
 */
static inline uint8_t mavlink_msg_openhd_version_message_get_patch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field release_type from openhd_version_message message
 *
 * @return  release=0,beta=1,alpha=2,development=3
 */
static inline uint8_t mavlink_msg_openhd_version_message_get_release_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field dummy from openhd_version_message message
 *
 * @return  reserved for future use
 */
static inline uint8_t mavlink_msg_openhd_version_message_get_dummy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Decode a openhd_version_message message into a struct
 *
 * @param msg The message to decode
 * @param openhd_version_message C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_version_message_decode(const mavlink_message_t* msg, mavlink_openhd_version_message_t* openhd_version_message)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    openhd_version_message->major = mavlink_msg_openhd_version_message_get_major(msg);
    openhd_version_message->minor = mavlink_msg_openhd_version_message_get_minor(msg);
    openhd_version_message->patch = mavlink_msg_openhd_version_message_get_patch(msg);
    openhd_version_message->release_type = mavlink_msg_openhd_version_message_get_release_type(msg);
    openhd_version_message->dummy = mavlink_msg_openhd_version_message_get_dummy(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_LEN;
        memset(openhd_version_message, 0, MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_LEN);
    memcpy(openhd_version_message, _MAV_PAYLOAD(msg), len);
#endif
}
