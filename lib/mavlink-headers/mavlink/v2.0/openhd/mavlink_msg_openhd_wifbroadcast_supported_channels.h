#pragma once
// MESSAGE OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS PACKING

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS 1222


typedef struct __mavlink_openhd_wifbroadcast_supported_channels_t {
 uint16_t channels[60]; /*<  List of supported channels, 0 to indicate an empty field.Always in 20Mhz increments*/
 uint8_t card_index; /*<  index of the wifibroadcast card (RX might have multiple)*/
 uint8_t bandwidths[60]; /*<  TODO*/
} mavlink_openhd_wifbroadcast_supported_channels_t;

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_LEN 181
#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_MIN_LEN 181
#define MAVLINK_MSG_ID_1222_LEN 181
#define MAVLINK_MSG_ID_1222_MIN_LEN 181

#define MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_CRC 150
#define MAVLINK_MSG_ID_1222_CRC 150

#define MAVLINK_MSG_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_FIELD_CHANNELS_LEN 60
#define MAVLINK_MSG_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_FIELD_BANDWIDTHS_LEN 60

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS { \
    1222, \
    "OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS", \
    3, \
    {  { "card_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 120, offsetof(mavlink_openhd_wifbroadcast_supported_channels_t, card_index) }, \
         { "channels", NULL, MAVLINK_TYPE_UINT16_T, 60, 0, offsetof(mavlink_openhd_wifbroadcast_supported_channels_t, channels) }, \
         { "bandwidths", NULL, MAVLINK_TYPE_UINT8_T, 60, 121, offsetof(mavlink_openhd_wifbroadcast_supported_channels_t, bandwidths) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS { \
    "OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS", \
    3, \
    {  { "card_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 120, offsetof(mavlink_openhd_wifbroadcast_supported_channels_t, card_index) }, \
         { "channels", NULL, MAVLINK_TYPE_UINT16_T, 60, 0, offsetof(mavlink_openhd_wifbroadcast_supported_channels_t, channels) }, \
         { "bandwidths", NULL, MAVLINK_TYPE_UINT8_T, 60, 121, offsetof(mavlink_openhd_wifbroadcast_supported_channels_t, bandwidths) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_wifbroadcast_supported_channels message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param card_index  index of the wifibroadcast card (RX might have multiple)
 * @param channels  List of supported channels, 0 to indicate an empty field.Always in 20Mhz increments
 * @param bandwidths  TODO
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_supported_channels_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t card_index, const uint16_t *channels, const uint8_t *bandwidths)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_LEN];
    _mav_put_uint8_t(buf, 120, card_index);
    _mav_put_uint16_t_array(buf, 0, channels, 60);
    _mav_put_uint8_t_array(buf, 121, bandwidths, 60);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_LEN);
#else
    mavlink_openhd_wifbroadcast_supported_channels_t packet;
    packet.card_index = card_index;
    mav_array_memcpy(packet.channels, channels, sizeof(uint16_t)*60);
    mav_array_memcpy(packet.bandwidths, bandwidths, sizeof(uint8_t)*60);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_CRC);
}

/**
 * @brief Pack a openhd_wifbroadcast_supported_channels message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param card_index  index of the wifibroadcast card (RX might have multiple)
 * @param channels  List of supported channels, 0 to indicate an empty field.Always in 20Mhz increments
 * @param bandwidths  TODO
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_supported_channels_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t card_index,const uint16_t *channels,const uint8_t *bandwidths)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_LEN];
    _mav_put_uint8_t(buf, 120, card_index);
    _mav_put_uint16_t_array(buf, 0, channels, 60);
    _mav_put_uint8_t_array(buf, 121, bandwidths, 60);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_LEN);
#else
    mavlink_openhd_wifbroadcast_supported_channels_t packet;
    packet.card_index = card_index;
    mav_array_memcpy(packet.channels, channels, sizeof(uint16_t)*60);
    mav_array_memcpy(packet.bandwidths, bandwidths, sizeof(uint8_t)*60);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_CRC);
}

/**
 * @brief Encode a openhd_wifbroadcast_supported_channels struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_wifbroadcast_supported_channels C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_supported_channels_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_wifbroadcast_supported_channels_t* openhd_wifbroadcast_supported_channels)
{
    return mavlink_msg_openhd_wifbroadcast_supported_channels_pack(system_id, component_id, msg, openhd_wifbroadcast_supported_channels->card_index, openhd_wifbroadcast_supported_channels->channels, openhd_wifbroadcast_supported_channels->bandwidths);
}

/**
 * @brief Encode a openhd_wifbroadcast_supported_channels struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_wifbroadcast_supported_channels C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_supported_channels_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_wifbroadcast_supported_channels_t* openhd_wifbroadcast_supported_channels)
{
    return mavlink_msg_openhd_wifbroadcast_supported_channels_pack_chan(system_id, component_id, chan, msg, openhd_wifbroadcast_supported_channels->card_index, openhd_wifbroadcast_supported_channels->channels, openhd_wifbroadcast_supported_channels->bandwidths);
}

/**
 * @brief Send a openhd_wifbroadcast_supported_channels message
 * @param chan MAVLink channel to send the message
 *
 * @param card_index  index of the wifibroadcast card (RX might have multiple)
 * @param channels  List of supported channels, 0 to indicate an empty field.Always in 20Mhz increments
 * @param bandwidths  TODO
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_wifbroadcast_supported_channels_send(mavlink_channel_t chan, uint8_t card_index, const uint16_t *channels, const uint8_t *bandwidths)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_LEN];
    _mav_put_uint8_t(buf, 120, card_index);
    _mav_put_uint16_t_array(buf, 0, channels, 60);
    _mav_put_uint8_t_array(buf, 121, bandwidths, 60);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS, buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_CRC);
#else
    mavlink_openhd_wifbroadcast_supported_channels_t packet;
    packet.card_index = card_index;
    mav_array_memcpy(packet.channels, channels, sizeof(uint16_t)*60);
    mav_array_memcpy(packet.bandwidths, bandwidths, sizeof(uint8_t)*60);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_CRC);
#endif
}

/**
 * @brief Send a openhd_wifbroadcast_supported_channels message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_wifbroadcast_supported_channels_send_struct(mavlink_channel_t chan, const mavlink_openhd_wifbroadcast_supported_channels_t* openhd_wifbroadcast_supported_channels)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_wifbroadcast_supported_channels_send(chan, openhd_wifbroadcast_supported_channels->card_index, openhd_wifbroadcast_supported_channels->channels, openhd_wifbroadcast_supported_channels->bandwidths);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS, (const char *)openhd_wifbroadcast_supported_channels, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_wifbroadcast_supported_channels_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t card_index, const uint16_t *channels, const uint8_t *bandwidths)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 120, card_index);
    _mav_put_uint16_t_array(buf, 0, channels, 60);
    _mav_put_uint8_t_array(buf, 121, bandwidths, 60);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS, buf, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_CRC);
#else
    mavlink_openhd_wifbroadcast_supported_channels_t *packet = (mavlink_openhd_wifbroadcast_supported_channels_t *)msgbuf;
    packet->card_index = card_index;
    mav_array_memcpy(packet->channels, channels, sizeof(uint16_t)*60);
    mav_array_memcpy(packet->bandwidths, bandwidths, sizeof(uint8_t)*60);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS, (const char *)packet, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_MIN_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_LEN, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_CRC);
#endif
}
#endif

#endif

// MESSAGE OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS UNPACKING


/**
 * @brief Get field card_index from openhd_wifbroadcast_supported_channels message
 *
 * @return  index of the wifibroadcast card (RX might have multiple)
 */
static inline uint8_t mavlink_msg_openhd_wifbroadcast_supported_channels_get_card_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  120);
}

/**
 * @brief Get field channels from openhd_wifbroadcast_supported_channels message
 *
 * @return  List of supported channels, 0 to indicate an empty field.Always in 20Mhz increments
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_supported_channels_get_channels(const mavlink_message_t* msg, uint16_t *channels)
{
    return _MAV_RETURN_uint16_t_array(msg, channels, 60,  0);
}

/**
 * @brief Get field bandwidths from openhd_wifbroadcast_supported_channels message
 *
 * @return  TODO
 */
static inline uint16_t mavlink_msg_openhd_wifbroadcast_supported_channels_get_bandwidths(const mavlink_message_t* msg, uint8_t *bandwidths)
{
    return _MAV_RETURN_uint8_t_array(msg, bandwidths, 60,  121);
}

/**
 * @brief Decode a openhd_wifbroadcast_supported_channels message into a struct
 *
 * @param msg The message to decode
 * @param openhd_wifbroadcast_supported_channels C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_wifbroadcast_supported_channels_decode(const mavlink_message_t* msg, mavlink_openhd_wifbroadcast_supported_channels_t* openhd_wifbroadcast_supported_channels)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_wifbroadcast_supported_channels_get_channels(msg, openhd_wifbroadcast_supported_channels->channels);
    openhd_wifbroadcast_supported_channels->card_index = mavlink_msg_openhd_wifbroadcast_supported_channels_get_card_index(msg);
    mavlink_msg_openhd_wifbroadcast_supported_channels_get_bandwidths(msg, openhd_wifbroadcast_supported_channels->bandwidths);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_LEN;
        memset(openhd_wifbroadcast_supported_channels, 0, MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_LEN);
    memcpy(openhd_wifbroadcast_supported_channels, _MAV_PAYLOAD(msg), len);
#endif
}
