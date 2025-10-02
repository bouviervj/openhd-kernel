#pragma once
// MESSAGE OPENHD_SYS_STATUS1 PACKING

#define MAVLINK_MSG_ID_OPENHD_SYS_STATUS1 1226


typedef struct __mavlink_openhd_sys_status1_t {
 int32_t dummy1; /*<  future use*/
 int32_t dummy2; /*<  future use*/
 uint16_t wifi_hotspot_frequency; /*<  Frequency of the wifi hotspot.*/
 uint8_t platform_type; /*<  platform type, as defined in openhd core*/
 uint8_t external_devices_count; /*<  N of connected external devices*/
 uint8_t wifi_hotspot_state; /*<  0 - not available, 1 - off, 2 - on*/
 uint8_t ethernet_hotspot_state; /*<   0 - not managed by openhd, 1 - dhcpcd client, 2 dhcpcd server*/
 uint8_t dummy0; /*<  future use*/
} mavlink_openhd_sys_status1_t;

#define MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_LEN 15
#define MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_MIN_LEN 15
#define MAVLINK_MSG_ID_1226_LEN 15
#define MAVLINK_MSG_ID_1226_MIN_LEN 15

#define MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_CRC 87
#define MAVLINK_MSG_ID_1226_CRC 87



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_SYS_STATUS1 { \
    1226, \
    "OPENHD_SYS_STATUS1", \
    8, \
    {  { "platform_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_openhd_sys_status1_t, platform_type) }, \
         { "external_devices_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_openhd_sys_status1_t, external_devices_count) }, \
         { "wifi_hotspot_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_openhd_sys_status1_t, wifi_hotspot_state) }, \
         { "wifi_hotspot_frequency", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_openhd_sys_status1_t, wifi_hotspot_frequency) }, \
         { "ethernet_hotspot_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_openhd_sys_status1_t, ethernet_hotspot_state) }, \
         { "dummy0", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_openhd_sys_status1_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_openhd_sys_status1_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_openhd_sys_status1_t, dummy2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_SYS_STATUS1 { \
    "OPENHD_SYS_STATUS1", \
    8, \
    {  { "platform_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_openhd_sys_status1_t, platform_type) }, \
         { "external_devices_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_openhd_sys_status1_t, external_devices_count) }, \
         { "wifi_hotspot_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_openhd_sys_status1_t, wifi_hotspot_state) }, \
         { "wifi_hotspot_frequency", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_openhd_sys_status1_t, wifi_hotspot_frequency) }, \
         { "ethernet_hotspot_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_openhd_sys_status1_t, ethernet_hotspot_state) }, \
         { "dummy0", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_openhd_sys_status1_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_openhd_sys_status1_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_openhd_sys_status1_t, dummy2) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_sys_status1 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param platform_type  platform type, as defined in openhd core
 * @param external_devices_count  N of connected external devices
 * @param wifi_hotspot_state  0 - not available, 1 - off, 2 - on
 * @param wifi_hotspot_frequency  Frequency of the wifi hotspot.
 * @param ethernet_hotspot_state   0 - not managed by openhd, 1 - dhcpcd client, 2 dhcpcd server
 * @param dummy0  future use
 * @param dummy1  future use
 * @param dummy2  future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_sys_status1_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t platform_type, uint8_t external_devices_count, uint8_t wifi_hotspot_state, uint16_t wifi_hotspot_frequency, uint8_t ethernet_hotspot_state, uint8_t dummy0, int32_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_LEN];
    _mav_put_int32_t(buf, 0, dummy1);
    _mav_put_int32_t(buf, 4, dummy2);
    _mav_put_uint16_t(buf, 8, wifi_hotspot_frequency);
    _mav_put_uint8_t(buf, 10, platform_type);
    _mav_put_uint8_t(buf, 11, external_devices_count);
    _mav_put_uint8_t(buf, 12, wifi_hotspot_state);
    _mav_put_uint8_t(buf, 13, ethernet_hotspot_state);
    _mav_put_uint8_t(buf, 14, dummy0);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_LEN);
#else
    mavlink_openhd_sys_status1_t packet;
    packet.dummy1 = dummy1;
    packet.dummy2 = dummy2;
    packet.wifi_hotspot_frequency = wifi_hotspot_frequency;
    packet.platform_type = platform_type;
    packet.external_devices_count = external_devices_count;
    packet.wifi_hotspot_state = wifi_hotspot_state;
    packet.ethernet_hotspot_state = ethernet_hotspot_state;
    packet.dummy0 = dummy0;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_SYS_STATUS1;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_MIN_LEN, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_LEN, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_CRC);
}

/**
 * @brief Pack a openhd_sys_status1 message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param platform_type  platform type, as defined in openhd core
 * @param external_devices_count  N of connected external devices
 * @param wifi_hotspot_state  0 - not available, 1 - off, 2 - on
 * @param wifi_hotspot_frequency  Frequency of the wifi hotspot.
 * @param ethernet_hotspot_state   0 - not managed by openhd, 1 - dhcpcd client, 2 dhcpcd server
 * @param dummy0  future use
 * @param dummy1  future use
 * @param dummy2  future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_sys_status1_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t platform_type,uint8_t external_devices_count,uint8_t wifi_hotspot_state,uint16_t wifi_hotspot_frequency,uint8_t ethernet_hotspot_state,uint8_t dummy0,int32_t dummy1,int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_LEN];
    _mav_put_int32_t(buf, 0, dummy1);
    _mav_put_int32_t(buf, 4, dummy2);
    _mav_put_uint16_t(buf, 8, wifi_hotspot_frequency);
    _mav_put_uint8_t(buf, 10, platform_type);
    _mav_put_uint8_t(buf, 11, external_devices_count);
    _mav_put_uint8_t(buf, 12, wifi_hotspot_state);
    _mav_put_uint8_t(buf, 13, ethernet_hotspot_state);
    _mav_put_uint8_t(buf, 14, dummy0);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_LEN);
#else
    mavlink_openhd_sys_status1_t packet;
    packet.dummy1 = dummy1;
    packet.dummy2 = dummy2;
    packet.wifi_hotspot_frequency = wifi_hotspot_frequency;
    packet.platform_type = platform_type;
    packet.external_devices_count = external_devices_count;
    packet.wifi_hotspot_state = wifi_hotspot_state;
    packet.ethernet_hotspot_state = ethernet_hotspot_state;
    packet.dummy0 = dummy0;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_SYS_STATUS1;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_MIN_LEN, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_LEN, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_CRC);
}

/**
 * @brief Encode a openhd_sys_status1 struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_sys_status1 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_sys_status1_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_sys_status1_t* openhd_sys_status1)
{
    return mavlink_msg_openhd_sys_status1_pack(system_id, component_id, msg, openhd_sys_status1->platform_type, openhd_sys_status1->external_devices_count, openhd_sys_status1->wifi_hotspot_state, openhd_sys_status1->wifi_hotspot_frequency, openhd_sys_status1->ethernet_hotspot_state, openhd_sys_status1->dummy0, openhd_sys_status1->dummy1, openhd_sys_status1->dummy2);
}

/**
 * @brief Encode a openhd_sys_status1 struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_sys_status1 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_sys_status1_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_sys_status1_t* openhd_sys_status1)
{
    return mavlink_msg_openhd_sys_status1_pack_chan(system_id, component_id, chan, msg, openhd_sys_status1->platform_type, openhd_sys_status1->external_devices_count, openhd_sys_status1->wifi_hotspot_state, openhd_sys_status1->wifi_hotspot_frequency, openhd_sys_status1->ethernet_hotspot_state, openhd_sys_status1->dummy0, openhd_sys_status1->dummy1, openhd_sys_status1->dummy2);
}

/**
 * @brief Send a openhd_sys_status1 message
 * @param chan MAVLink channel to send the message
 *
 * @param platform_type  platform type, as defined in openhd core
 * @param external_devices_count  N of connected external devices
 * @param wifi_hotspot_state  0 - not available, 1 - off, 2 - on
 * @param wifi_hotspot_frequency  Frequency of the wifi hotspot.
 * @param ethernet_hotspot_state   0 - not managed by openhd, 1 - dhcpcd client, 2 dhcpcd server
 * @param dummy0  future use
 * @param dummy1  future use
 * @param dummy2  future use
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_sys_status1_send(mavlink_channel_t chan, uint8_t platform_type, uint8_t external_devices_count, uint8_t wifi_hotspot_state, uint16_t wifi_hotspot_frequency, uint8_t ethernet_hotspot_state, uint8_t dummy0, int32_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_LEN];
    _mav_put_int32_t(buf, 0, dummy1);
    _mav_put_int32_t(buf, 4, dummy2);
    _mav_put_uint16_t(buf, 8, wifi_hotspot_frequency);
    _mav_put_uint8_t(buf, 10, platform_type);
    _mav_put_uint8_t(buf, 11, external_devices_count);
    _mav_put_uint8_t(buf, 12, wifi_hotspot_state);
    _mav_put_uint8_t(buf, 13, ethernet_hotspot_state);
    _mav_put_uint8_t(buf, 14, dummy0);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1, buf, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_MIN_LEN, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_LEN, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_CRC);
#else
    mavlink_openhd_sys_status1_t packet;
    packet.dummy1 = dummy1;
    packet.dummy2 = dummy2;
    packet.wifi_hotspot_frequency = wifi_hotspot_frequency;
    packet.platform_type = platform_type;
    packet.external_devices_count = external_devices_count;
    packet.wifi_hotspot_state = wifi_hotspot_state;
    packet.ethernet_hotspot_state = ethernet_hotspot_state;
    packet.dummy0 = dummy0;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_MIN_LEN, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_LEN, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_CRC);
#endif
}

/**
 * @brief Send a openhd_sys_status1 message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_sys_status1_send_struct(mavlink_channel_t chan, const mavlink_openhd_sys_status1_t* openhd_sys_status1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_sys_status1_send(chan, openhd_sys_status1->platform_type, openhd_sys_status1->external_devices_count, openhd_sys_status1->wifi_hotspot_state, openhd_sys_status1->wifi_hotspot_frequency, openhd_sys_status1->ethernet_hotspot_state, openhd_sys_status1->dummy0, openhd_sys_status1->dummy1, openhd_sys_status1->dummy2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1, (const char *)openhd_sys_status1, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_MIN_LEN, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_LEN, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_sys_status1_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t platform_type, uint8_t external_devices_count, uint8_t wifi_hotspot_state, uint16_t wifi_hotspot_frequency, uint8_t ethernet_hotspot_state, uint8_t dummy0, int32_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, dummy1);
    _mav_put_int32_t(buf, 4, dummy2);
    _mav_put_uint16_t(buf, 8, wifi_hotspot_frequency);
    _mav_put_uint8_t(buf, 10, platform_type);
    _mav_put_uint8_t(buf, 11, external_devices_count);
    _mav_put_uint8_t(buf, 12, wifi_hotspot_state);
    _mav_put_uint8_t(buf, 13, ethernet_hotspot_state);
    _mav_put_uint8_t(buf, 14, dummy0);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1, buf, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_MIN_LEN, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_LEN, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_CRC);
#else
    mavlink_openhd_sys_status1_t *packet = (mavlink_openhd_sys_status1_t *)msgbuf;
    packet->dummy1 = dummy1;
    packet->dummy2 = dummy2;
    packet->wifi_hotspot_frequency = wifi_hotspot_frequency;
    packet->platform_type = platform_type;
    packet->external_devices_count = external_devices_count;
    packet->wifi_hotspot_state = wifi_hotspot_state;
    packet->ethernet_hotspot_state = ethernet_hotspot_state;
    packet->dummy0 = dummy0;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1, (const char *)packet, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_MIN_LEN, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_LEN, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_CRC);
#endif
}
#endif

#endif

// MESSAGE OPENHD_SYS_STATUS1 UNPACKING


/**
 * @brief Get field platform_type from openhd_sys_status1 message
 *
 * @return  platform type, as defined in openhd core
 */
static inline uint8_t mavlink_msg_openhd_sys_status1_get_platform_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field external_devices_count from openhd_sys_status1 message
 *
 * @return  N of connected external devices
 */
static inline uint8_t mavlink_msg_openhd_sys_status1_get_external_devices_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field wifi_hotspot_state from openhd_sys_status1 message
 *
 * @return  0 - not available, 1 - off, 2 - on
 */
static inline uint8_t mavlink_msg_openhd_sys_status1_get_wifi_hotspot_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field wifi_hotspot_frequency from openhd_sys_status1 message
 *
 * @return  Frequency of the wifi hotspot.
 */
static inline uint16_t mavlink_msg_openhd_sys_status1_get_wifi_hotspot_frequency(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field ethernet_hotspot_state from openhd_sys_status1 message
 *
 * @return   0 - not managed by openhd, 1 - dhcpcd client, 2 dhcpcd server
 */
static inline uint8_t mavlink_msg_openhd_sys_status1_get_ethernet_hotspot_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field dummy0 from openhd_sys_status1 message
 *
 * @return  future use
 */
static inline uint8_t mavlink_msg_openhd_sys_status1_get_dummy0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field dummy1 from openhd_sys_status1 message
 *
 * @return  future use
 */
static inline int32_t mavlink_msg_openhd_sys_status1_get_dummy1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field dummy2 from openhd_sys_status1 message
 *
 * @return  future use
 */
static inline int32_t mavlink_msg_openhd_sys_status1_get_dummy2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Decode a openhd_sys_status1 message into a struct
 *
 * @param msg The message to decode
 * @param openhd_sys_status1 C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_sys_status1_decode(const mavlink_message_t* msg, mavlink_openhd_sys_status1_t* openhd_sys_status1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    openhd_sys_status1->dummy1 = mavlink_msg_openhd_sys_status1_get_dummy1(msg);
    openhd_sys_status1->dummy2 = mavlink_msg_openhd_sys_status1_get_dummy2(msg);
    openhd_sys_status1->wifi_hotspot_frequency = mavlink_msg_openhd_sys_status1_get_wifi_hotspot_frequency(msg);
    openhd_sys_status1->platform_type = mavlink_msg_openhd_sys_status1_get_platform_type(msg);
    openhd_sys_status1->external_devices_count = mavlink_msg_openhd_sys_status1_get_external_devices_count(msg);
    openhd_sys_status1->wifi_hotspot_state = mavlink_msg_openhd_sys_status1_get_wifi_hotspot_state(msg);
    openhd_sys_status1->ethernet_hotspot_state = mavlink_msg_openhd_sys_status1_get_ethernet_hotspot_state(msg);
    openhd_sys_status1->dummy0 = mavlink_msg_openhd_sys_status1_get_dummy0(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_LEN;
        memset(openhd_sys_status1, 0, MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_LEN);
    memcpy(openhd_sys_status1, _MAV_PAYLOAD(msg), len);
#endif
}
