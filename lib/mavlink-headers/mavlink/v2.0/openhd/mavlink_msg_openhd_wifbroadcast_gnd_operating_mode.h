#pragma once
// MESSAGE OPENHD_WIFBROADCAST_GND_OPERATING_MODE PACKING

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE 1225


typedef struct __mavlink_openhd_wifbroadcast_gnd_operating_mode_t {
 int32_t dummy1; /*<  future use*/
 int32_t dummy2; /*<  future use*/
 uint16_t dummy0; /*<  future use*/
 uint8_t operating_mode; /*<  0=normal,1=currently scanning, 2=currently analyzing*/
 int8_t tx_passive_mode_is_enabled; /*<  Act as a passive listener (NO TX EVER), 0=disabled, 1=enabled.*/
} mavlink_openhd_wifbroadcast_gnd_operating_mode_t;

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_LEN 12
#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_MIN_LEN 12
#define MAVLINK_MSG_ID_1225_LEN 12
#define MAVLINK_MSG_ID_1225_MIN_LEN 12

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_CRC 169
#define MAVLINK_MSG_ID_1225_CRC 169



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_WIFBROADCAST_GND_OPERATING_MODE { \
    1225, \
    "OPENHD_WIFBROADCAST_GND_OPERATING_MODE", \
    5, \
    {  { "operating_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_openhd_wifbroadcast_gnd_operating_mode_t, operating_mode) }, \
         { "tx_passive_mode_is_enabled", NULL, MAVLINK_TYPE_INT8_T, 0, 11, offsetof(mavlink_openhd_wifbroadcast_gnd_operating_mode_t, tx_passive_mode_is_enabled) }, \
         { "dummy0", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_openhd_wifbroadcast_gnd_operating_mode_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_openhd_wifbroadcast_gnd_operating_mode_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_openhd_wifbroadcast_gnd_operating_mode_t, dummy2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_WIFBROADCAST_GND_OPERATING_MODE { \
    "OPENHD_WIFBROADCAST_GND_OPERATING_MODE", \
    5, \
    {  { "operating_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_openhd_wifbroadcast_gnd_operating_mode_t, operating_mode) }, \
         { "tx_passive_mode_is_enabled", NULL, MAVLINK_TYPE_INT8_T, 0, 11, offsetof(mavlink_openhd_wifbroadcast_gnd_operating_mode_t, tx_passive_mode_is_enabled) }, \
         { "dummy0", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_openhd_wifbroadcast_gnd_operating_mode_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_openhd_wifbroadcast_gnd_operating_mode_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_openhd_wifbroadcast_gnd_operating_mode_t, dummy2) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_wifbroadcast_gnd_operating_mode message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param operating_mode  0=normal,1=currently scanning, 2=currently analyzing
 * @param tx_passive_mode_is_enabled  Act as a passive listener (NO TX EVER), 0=disabled, 1=enabled.
 * @param dummy0  future use
 * @param dummy1  future use
 * @param dummy2  future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t operating_mode, int8_t tx_passive_mode_is_enabled, uint16_t dummy0, int32_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_LEN];
    _mav_put_int32_t(buf, 0, dummy1);
    _mav_put_int32_t(buf, 4, dummy2);
    _mav_put_uint16_t(buf, 8, dummy0);
    _mav_put_uint8_t(buf, 10, operating_mode);
    _mav_put_int8_t(buf, 11, tx_passive_mode_is_enabled);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_LEN);
#else
    mavlink_openhd_wifbroadcast_gnd_operating_mode_t packet;
    packet.dummy1 = dummy1;
    packet.dummy2 = dummy2;
    packet.dummy0 = dummy0;
    packet.operating_mode = operating_mode;
    packet.tx_passive_mode_is_enabled = tx_passive_mode_is_enabled;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_CRC);
}

/**
 * @brief Pack a openhd_wifbroadcast_gnd_operating_mode message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param operating_mode  0=normal,1=currently scanning, 2=currently analyzing
 * @param tx_passive_mode_is_enabled  Act as a passive listener (NO TX EVER), 0=disabled, 1=enabled.
 * @param dummy0  future use
 * @param dummy1  future use
 * @param dummy2  future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t operating_mode,int8_t tx_passive_mode_is_enabled,uint16_t dummy0,int32_t dummy1,int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_LEN];
    _mav_put_int32_t(buf, 0, dummy1);
    _mav_put_int32_t(buf, 4, dummy2);
    _mav_put_uint16_t(buf, 8, dummy0);
    _mav_put_uint8_t(buf, 10, operating_mode);
    _mav_put_int8_t(buf, 11, tx_passive_mode_is_enabled);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_LEN);
#else
    mavlink_openhd_wifbroadcast_gnd_operating_mode_t packet;
    packet.dummy1 = dummy1;
    packet.dummy2 = dummy2;
    packet.dummy0 = dummy0;
    packet.operating_mode = operating_mode;
    packet.tx_passive_mode_is_enabled = tx_passive_mode_is_enabled;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_CRC);
}

/**
 * @brief Encode a openhd_wifbroadcast_gnd_operating_mode struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_wifbroadcast_gnd_operating_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_wifbroadcast_gnd_operating_mode_t* openhd_wifbroadcast_gnd_operating_mode)
{
    return mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_pack(system_id, component_id, msg, openhd_wifbroadcast_gnd_operating_mode->operating_mode, openhd_wifbroadcast_gnd_operating_mode->tx_passive_mode_is_enabled, openhd_wifbroadcast_gnd_operating_mode->dummy0, openhd_wifbroadcast_gnd_operating_mode->dummy1, openhd_wifbroadcast_gnd_operating_mode->dummy2);
}

/**
 * @brief Encode a openhd_wifbroadcast_gnd_operating_mode struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_wifbroadcast_gnd_operating_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_wifbroadcast_gnd_operating_mode_t* openhd_wifbroadcast_gnd_operating_mode)
{
    return mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_pack_chan(system_id, component_id, chan, msg, openhd_wifbroadcast_gnd_operating_mode->operating_mode, openhd_wifbroadcast_gnd_operating_mode->tx_passive_mode_is_enabled, openhd_wifbroadcast_gnd_operating_mode->dummy0, openhd_wifbroadcast_gnd_operating_mode->dummy1, openhd_wifbroadcast_gnd_operating_mode->dummy2);
}

/**
 * @brief Send a openhd_wifbroadcast_gnd_operating_mode message
 * @param chan MAVLink channel to send the message
 *
 * @param operating_mode  0=normal,1=currently scanning, 2=currently analyzing
 * @param tx_passive_mode_is_enabled  Act as a passive listener (NO TX EVER), 0=disabled, 1=enabled.
 * @param dummy0  future use
 * @param dummy1  future use
 * @param dummy2  future use
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_send(mavlink_channel_t chan, uint8_t operating_mode, int8_t tx_passive_mode_is_enabled, uint16_t dummy0, int32_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_LEN];
    _mav_put_int32_t(buf, 0, dummy1);
    _mav_put_int32_t(buf, 4, dummy2);
    _mav_put_uint16_t(buf, 8, dummy0);
    _mav_put_uint8_t(buf, 10, operating_mode);
    _mav_put_int8_t(buf, 11, tx_passive_mode_is_enabled);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE, buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_CRC);
#else
    mavlink_openhd_wifbroadcast_gnd_operating_mode_t packet;
    packet.dummy1 = dummy1;
    packet.dummy2 = dummy2;
    packet.dummy0 = dummy0;
    packet.operating_mode = operating_mode;
    packet.tx_passive_mode_is_enabled = tx_passive_mode_is_enabled;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_CRC);
#endif
}

/**
 * @brief Send a openhd_wifbroadcast_gnd_operating_mode message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_send_struct(mavlink_channel_t chan, const mavlink_openhd_wifbroadcast_gnd_operating_mode_t* openhd_wifbroadcast_gnd_operating_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_send(chan, openhd_wifbroadcast_gnd_operating_mode->operating_mode, openhd_wifbroadcast_gnd_operating_mode->tx_passive_mode_is_enabled, openhd_wifbroadcast_gnd_operating_mode->dummy0, openhd_wifbroadcast_gnd_operating_mode->dummy1, openhd_wifbroadcast_gnd_operating_mode->dummy2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE, (const char *)openhd_wifbroadcast_gnd_operating_mode, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t operating_mode, int8_t tx_passive_mode_is_enabled, uint16_t dummy0, int32_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, dummy1);
    _mav_put_int32_t(buf, 4, dummy2);
    _mav_put_uint16_t(buf, 8, dummy0);
    _mav_put_uint8_t(buf, 10, operating_mode);
    _mav_put_int8_t(buf, 11, tx_passive_mode_is_enabled);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE, buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_CRC);
#else
    mavlink_openhd_wifbroadcast_gnd_operating_mode_t *packet = (mavlink_openhd_wifbroadcast_gnd_operating_mode_t *)msgbuf;
    packet->dummy1 = dummy1;
    packet->dummy2 = dummy2;
    packet->dummy0 = dummy0;
    packet->operating_mode = operating_mode;
    packet->tx_passive_mode_is_enabled = tx_passive_mode_is_enabled;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE, (const char *)packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_CRC);
#endif
}
#endif

#endif

// MESSAGE OPENHD_WIFBROADCAST_GND_OPERATING_MODE UNPACKING


/**
 * @brief Get field operating_mode from openhd_wifbroadcast_gnd_operating_mode message
 *
 * @return  0=normal,1=currently scanning, 2=currently analyzing
 */
static inline uint8_t mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_get_operating_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field tx_passive_mode_is_enabled from openhd_wifbroadcast_gnd_operating_mode message
 *
 * @return  Act as a passive listener (NO TX EVER), 0=disabled, 1=enabled.
 */
static inline int8_t mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_get_tx_passive_mode_is_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  11);
}

/**
 * @brief Get field dummy0 from openhd_wifbroadcast_gnd_operating_mode message
 *
 * @return  future use
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_get_dummy0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field dummy1 from openhd_wifbroadcast_gnd_operating_mode message
 *
 * @return  future use
 */
static inline int32_t mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_get_dummy1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field dummy2 from openhd_wifbroadcast_gnd_operating_mode message
 *
 * @return  future use
 */
static inline int32_t mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_get_dummy2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Decode a openhd_wifbroadcast_gnd_operating_mode message into a struct
 *
 * @param msg The message to decode
 * @param openhd_wifbroadcast_gnd_operating_mode C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_decode(const mavlink_message_t* msg, mavlink_openhd_wifbroadcast_gnd_operating_mode_t* openhd_wifbroadcast_gnd_operating_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    openhd_wifbroadcast_gnd_operating_mode->dummy1 = mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_get_dummy1(msg);
    openhd_wifbroadcast_gnd_operating_mode->dummy2 = mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_get_dummy2(msg);
    openhd_wifbroadcast_gnd_operating_mode->dummy0 = mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_get_dummy0(msg);
    openhd_wifbroadcast_gnd_operating_mode->operating_mode = mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_get_operating_mode(msg);
    openhd_wifbroadcast_gnd_operating_mode->tx_passive_mode_is_enabled = mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_get_tx_passive_mode_is_enabled(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_LEN;
        memset(openhd_wifbroadcast_gnd_operating_mode, 0, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_LEN);
    memcpy(openhd_wifbroadcast_gnd_operating_mode, _MAV_PAYLOAD(msg), len);
#endif
}
