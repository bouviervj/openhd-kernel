#pragma once
// MESSAGE OPENHD_CAMERA_STATUS_AIR PACKING

#define MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR 1219


typedef struct __mavlink_openhd_camera_status_air_t {
 int32_t dummy2; /*<  for future use*/
 uint16_t encoding_bitrate_kbits; /*<  encoding_bitrate_kbits*/
 uint16_t stream_w; /*<  streamed video width*/
 uint16_t stream_h; /*<  streamed video height*/
 uint16_t stream_fps; /*<  streamed video fps*/
 int16_t dummy1; /*<  for future use*/
 uint8_t cam_type; /*<  0==Unknown, follows the definitions in openhd*/
 uint8_t cam_status; /*<  0==Unknown, 1==camera is currently streaming, 2==camera is currently restarting*/
 uint8_t supports_variable_bitrate; /*<  Set to 1 if camera supports variable bitrate (changing the bitrate)*/
 uint8_t air_recording_active; /*<  air_recording_active*/
 uint8_t encoding_format; /*<  0 for h264, 1 for h265, 2 for mjpeg*/
 uint8_t encoding_keyframe_interval; /*<  encoding_keyframe_interval*/
 int8_t dummy0; /*<  for future use*/
} mavlink_openhd_camera_status_air_t;

#define MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_LEN 21
#define MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_MIN_LEN 21
#define MAVLINK_MSG_ID_1219_LEN 21
#define MAVLINK_MSG_ID_1219_MIN_LEN 21

#define MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_CRC 71
#define MAVLINK_MSG_ID_1219_CRC 71



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPENHD_CAMERA_STATUS_AIR { \
    1219, \
    "OPENHD_CAMERA_STATUS_AIR", \
    13, \
    {  { "cam_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_openhd_camera_status_air_t, cam_type) }, \
         { "cam_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_openhd_camera_status_air_t, cam_status) }, \
         { "supports_variable_bitrate", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_openhd_camera_status_air_t, supports_variable_bitrate) }, \
         { "air_recording_active", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_openhd_camera_status_air_t, air_recording_active) }, \
         { "encoding_format", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_openhd_camera_status_air_t, encoding_format) }, \
         { "encoding_bitrate_kbits", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_openhd_camera_status_air_t, encoding_bitrate_kbits) }, \
         { "encoding_keyframe_interval", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_openhd_camera_status_air_t, encoding_keyframe_interval) }, \
         { "stream_w", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_openhd_camera_status_air_t, stream_w) }, \
         { "stream_h", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_openhd_camera_status_air_t, stream_h) }, \
         { "stream_fps", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_openhd_camera_status_air_t, stream_fps) }, \
         { "dummy0", NULL, MAVLINK_TYPE_INT8_T, 0, 20, offsetof(mavlink_openhd_camera_status_air_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_openhd_camera_status_air_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_openhd_camera_status_air_t, dummy2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPENHD_CAMERA_STATUS_AIR { \
    "OPENHD_CAMERA_STATUS_AIR", \
    13, \
    {  { "cam_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_openhd_camera_status_air_t, cam_type) }, \
         { "cam_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_openhd_camera_status_air_t, cam_status) }, \
         { "supports_variable_bitrate", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_openhd_camera_status_air_t, supports_variable_bitrate) }, \
         { "air_recording_active", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_openhd_camera_status_air_t, air_recording_active) }, \
         { "encoding_format", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_openhd_camera_status_air_t, encoding_format) }, \
         { "encoding_bitrate_kbits", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_openhd_camera_status_air_t, encoding_bitrate_kbits) }, \
         { "encoding_keyframe_interval", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_openhd_camera_status_air_t, encoding_keyframe_interval) }, \
         { "stream_w", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_openhd_camera_status_air_t, stream_w) }, \
         { "stream_h", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_openhd_camera_status_air_t, stream_h) }, \
         { "stream_fps", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_openhd_camera_status_air_t, stream_fps) }, \
         { "dummy0", NULL, MAVLINK_TYPE_INT8_T, 0, 20, offsetof(mavlink_openhd_camera_status_air_t, dummy0) }, \
         { "dummy1", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_openhd_camera_status_air_t, dummy1) }, \
         { "dummy2", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_openhd_camera_status_air_t, dummy2) }, \
         } \
}
#endif

/**
 * @brief Pack a openhd_camera_status_air message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param cam_type  0==Unknown, follows the definitions in openhd
 * @param cam_status  0==Unknown, 1==camera is currently streaming, 2==camera is currently restarting
 * @param supports_variable_bitrate  Set to 1 if camera supports variable bitrate (changing the bitrate)
 * @param air_recording_active  air_recording_active
 * @param encoding_format  0 for h264, 1 for h265, 2 for mjpeg
 * @param encoding_bitrate_kbits  encoding_bitrate_kbits
 * @param encoding_keyframe_interval  encoding_keyframe_interval
 * @param stream_w  streamed video width
 * @param stream_h  streamed video height
 * @param stream_fps  streamed video fps
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_camera_status_air_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t cam_type, uint8_t cam_status, uint8_t supports_variable_bitrate, uint8_t air_recording_active, uint8_t encoding_format, uint16_t encoding_bitrate_kbits, uint8_t encoding_keyframe_interval, uint16_t stream_w, uint16_t stream_h, uint16_t stream_fps, int8_t dummy0, int16_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_LEN];
    _mav_put_int32_t(buf, 0, dummy2);
    _mav_put_uint16_t(buf, 4, encoding_bitrate_kbits);
    _mav_put_uint16_t(buf, 6, stream_w);
    _mav_put_uint16_t(buf, 8, stream_h);
    _mav_put_uint16_t(buf, 10, stream_fps);
    _mav_put_int16_t(buf, 12, dummy1);
    _mav_put_uint8_t(buf, 14, cam_type);
    _mav_put_uint8_t(buf, 15, cam_status);
    _mav_put_uint8_t(buf, 16, supports_variable_bitrate);
    _mav_put_uint8_t(buf, 17, air_recording_active);
    _mav_put_uint8_t(buf, 18, encoding_format);
    _mav_put_uint8_t(buf, 19, encoding_keyframe_interval);
    _mav_put_int8_t(buf, 20, dummy0);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_LEN);
#else
    mavlink_openhd_camera_status_air_t packet;
    packet.dummy2 = dummy2;
    packet.encoding_bitrate_kbits = encoding_bitrate_kbits;
    packet.stream_w = stream_w;
    packet.stream_h = stream_h;
    packet.stream_fps = stream_fps;
    packet.dummy1 = dummy1;
    packet.cam_type = cam_type;
    packet.cam_status = cam_status;
    packet.supports_variable_bitrate = supports_variable_bitrate;
    packet.air_recording_active = air_recording_active;
    packet.encoding_format = encoding_format;
    packet.encoding_keyframe_interval = encoding_keyframe_interval;
    packet.dummy0 = dummy0;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_CRC);
}

/**
 * @brief Pack a openhd_camera_status_air message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cam_type  0==Unknown, follows the definitions in openhd
 * @param cam_status  0==Unknown, 1==camera is currently streaming, 2==camera is currently restarting
 * @param supports_variable_bitrate  Set to 1 if camera supports variable bitrate (changing the bitrate)
 * @param air_recording_active  air_recording_active
 * @param encoding_format  0 for h264, 1 for h265, 2 for mjpeg
 * @param encoding_bitrate_kbits  encoding_bitrate_kbits
 * @param encoding_keyframe_interval  encoding_keyframe_interval
 * @param stream_w  streamed video width
 * @param stream_h  streamed video height
 * @param stream_fps  streamed video fps
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_openhd_camera_status_air_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t cam_type,uint8_t cam_status,uint8_t supports_variable_bitrate,uint8_t air_recording_active,uint8_t encoding_format,uint16_t encoding_bitrate_kbits,uint8_t encoding_keyframe_interval,uint16_t stream_w,uint16_t stream_h,uint16_t stream_fps,int8_t dummy0,int16_t dummy1,int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_LEN];
    _mav_put_int32_t(buf, 0, dummy2);
    _mav_put_uint16_t(buf, 4, encoding_bitrate_kbits);
    _mav_put_uint16_t(buf, 6, stream_w);
    _mav_put_uint16_t(buf, 8, stream_h);
    _mav_put_uint16_t(buf, 10, stream_fps);
    _mav_put_int16_t(buf, 12, dummy1);
    _mav_put_uint8_t(buf, 14, cam_type);
    _mav_put_uint8_t(buf, 15, cam_status);
    _mav_put_uint8_t(buf, 16, supports_variable_bitrate);
    _mav_put_uint8_t(buf, 17, air_recording_active);
    _mav_put_uint8_t(buf, 18, encoding_format);
    _mav_put_uint8_t(buf, 19, encoding_keyframe_interval);
    _mav_put_int8_t(buf, 20, dummy0);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_LEN);
#else
    mavlink_openhd_camera_status_air_t packet;
    packet.dummy2 = dummy2;
    packet.encoding_bitrate_kbits = encoding_bitrate_kbits;
    packet.stream_w = stream_w;
    packet.stream_h = stream_h;
    packet.stream_fps = stream_fps;
    packet.dummy1 = dummy1;
    packet.cam_type = cam_type;
    packet.cam_status = cam_status;
    packet.supports_variable_bitrate = supports_variable_bitrate;
    packet.air_recording_active = air_recording_active;
    packet.encoding_format = encoding_format;
    packet.encoding_keyframe_interval = encoding_keyframe_interval;
    packet.dummy0 = dummy0;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_CRC);
}

/**
 * @brief Encode a openhd_camera_status_air struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param openhd_camera_status_air C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_camera_status_air_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_openhd_camera_status_air_t* openhd_camera_status_air)
{
    return mavlink_msg_openhd_camera_status_air_pack(system_id, component_id, msg, openhd_camera_status_air->cam_type, openhd_camera_status_air->cam_status, openhd_camera_status_air->supports_variable_bitrate, openhd_camera_status_air->air_recording_active, openhd_camera_status_air->encoding_format, openhd_camera_status_air->encoding_bitrate_kbits, openhd_camera_status_air->encoding_keyframe_interval, openhd_camera_status_air->stream_w, openhd_camera_status_air->stream_h, openhd_camera_status_air->stream_fps, openhd_camera_status_air->dummy0, openhd_camera_status_air->dummy1, openhd_camera_status_air->dummy2);
}

/**
 * @brief Encode a openhd_camera_status_air struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param openhd_camera_status_air C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_openhd_camera_status_air_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_openhd_camera_status_air_t* openhd_camera_status_air)
{
    return mavlink_msg_openhd_camera_status_air_pack_chan(system_id, component_id, chan, msg, openhd_camera_status_air->cam_type, openhd_camera_status_air->cam_status, openhd_camera_status_air->supports_variable_bitrate, openhd_camera_status_air->air_recording_active, openhd_camera_status_air->encoding_format, openhd_camera_status_air->encoding_bitrate_kbits, openhd_camera_status_air->encoding_keyframe_interval, openhd_camera_status_air->stream_w, openhd_camera_status_air->stream_h, openhd_camera_status_air->stream_fps, openhd_camera_status_air->dummy0, openhd_camera_status_air->dummy1, openhd_camera_status_air->dummy2);
}

/**
 * @brief Send a openhd_camera_status_air message
 * @param chan MAVLink channel to send the message
 *
 * @param cam_type  0==Unknown, follows the definitions in openhd
 * @param cam_status  0==Unknown, 1==camera is currently streaming, 2==camera is currently restarting
 * @param supports_variable_bitrate  Set to 1 if camera supports variable bitrate (changing the bitrate)
 * @param air_recording_active  air_recording_active
 * @param encoding_format  0 for h264, 1 for h265, 2 for mjpeg
 * @param encoding_bitrate_kbits  encoding_bitrate_kbits
 * @param encoding_keyframe_interval  encoding_keyframe_interval
 * @param stream_w  streamed video width
 * @param stream_h  streamed video height
 * @param stream_fps  streamed video fps
 * @param dummy0  for future use
 * @param dummy1  for future use
 * @param dummy2  for future use
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_openhd_camera_status_air_send(mavlink_channel_t chan, uint8_t cam_type, uint8_t cam_status, uint8_t supports_variable_bitrate, uint8_t air_recording_active, uint8_t encoding_format, uint16_t encoding_bitrate_kbits, uint8_t encoding_keyframe_interval, uint16_t stream_w, uint16_t stream_h, uint16_t stream_fps, int8_t dummy0, int16_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_LEN];
    _mav_put_int32_t(buf, 0, dummy2);
    _mav_put_uint16_t(buf, 4, encoding_bitrate_kbits);
    _mav_put_uint16_t(buf, 6, stream_w);
    _mav_put_uint16_t(buf, 8, stream_h);
    _mav_put_uint16_t(buf, 10, stream_fps);
    _mav_put_int16_t(buf, 12, dummy1);
    _mav_put_uint8_t(buf, 14, cam_type);
    _mav_put_uint8_t(buf, 15, cam_status);
    _mav_put_uint8_t(buf, 16, supports_variable_bitrate);
    _mav_put_uint8_t(buf, 17, air_recording_active);
    _mav_put_uint8_t(buf, 18, encoding_format);
    _mav_put_uint8_t(buf, 19, encoding_keyframe_interval);
    _mav_put_int8_t(buf, 20, dummy0);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR, buf, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_CRC);
#else
    mavlink_openhd_camera_status_air_t packet;
    packet.dummy2 = dummy2;
    packet.encoding_bitrate_kbits = encoding_bitrate_kbits;
    packet.stream_w = stream_w;
    packet.stream_h = stream_h;
    packet.stream_fps = stream_fps;
    packet.dummy1 = dummy1;
    packet.cam_type = cam_type;
    packet.cam_status = cam_status;
    packet.supports_variable_bitrate = supports_variable_bitrate;
    packet.air_recording_active = air_recording_active;
    packet.encoding_format = encoding_format;
    packet.encoding_keyframe_interval = encoding_keyframe_interval;
    packet.dummy0 = dummy0;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR, (const char *)&packet, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_CRC);
#endif
}

/**
 * @brief Send a openhd_camera_status_air message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_openhd_camera_status_air_send_struct(mavlink_channel_t chan, const mavlink_openhd_camera_status_air_t* openhd_camera_status_air)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_openhd_camera_status_air_send(chan, openhd_camera_status_air->cam_type, openhd_camera_status_air->cam_status, openhd_camera_status_air->supports_variable_bitrate, openhd_camera_status_air->air_recording_active, openhd_camera_status_air->encoding_format, openhd_camera_status_air->encoding_bitrate_kbits, openhd_camera_status_air->encoding_keyframe_interval, openhd_camera_status_air->stream_w, openhd_camera_status_air->stream_h, openhd_camera_status_air->stream_fps, openhd_camera_status_air->dummy0, openhd_camera_status_air->dummy1, openhd_camera_status_air->dummy2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR, (const char *)openhd_camera_status_air, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_openhd_camera_status_air_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t cam_type, uint8_t cam_status, uint8_t supports_variable_bitrate, uint8_t air_recording_active, uint8_t encoding_format, uint16_t encoding_bitrate_kbits, uint8_t encoding_keyframe_interval, uint16_t stream_w, uint16_t stream_h, uint16_t stream_fps, int8_t dummy0, int16_t dummy1, int32_t dummy2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, dummy2);
    _mav_put_uint16_t(buf, 4, encoding_bitrate_kbits);
    _mav_put_uint16_t(buf, 6, stream_w);
    _mav_put_uint16_t(buf, 8, stream_h);
    _mav_put_uint16_t(buf, 10, stream_fps);
    _mav_put_int16_t(buf, 12, dummy1);
    _mav_put_uint8_t(buf, 14, cam_type);
    _mav_put_uint8_t(buf, 15, cam_status);
    _mav_put_uint8_t(buf, 16, supports_variable_bitrate);
    _mav_put_uint8_t(buf, 17, air_recording_active);
    _mav_put_uint8_t(buf, 18, encoding_format);
    _mav_put_uint8_t(buf, 19, encoding_keyframe_interval);
    _mav_put_int8_t(buf, 20, dummy0);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR, buf, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_CRC);
#else
    mavlink_openhd_camera_status_air_t *packet = (mavlink_openhd_camera_status_air_t *)msgbuf;
    packet->dummy2 = dummy2;
    packet->encoding_bitrate_kbits = encoding_bitrate_kbits;
    packet->stream_w = stream_w;
    packet->stream_h = stream_h;
    packet->stream_fps = stream_fps;
    packet->dummy1 = dummy1;
    packet->cam_type = cam_type;
    packet->cam_status = cam_status;
    packet->supports_variable_bitrate = supports_variable_bitrate;
    packet->air_recording_active = air_recording_active;
    packet->encoding_format = encoding_format;
    packet->encoding_keyframe_interval = encoding_keyframe_interval;
    packet->dummy0 = dummy0;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR, (const char *)packet, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_MIN_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_LEN, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_CRC);
#endif
}
#endif

#endif

// MESSAGE OPENHD_CAMERA_STATUS_AIR UNPACKING


/**
 * @brief Get field cam_type from openhd_camera_status_air message
 *
 * @return  0==Unknown, follows the definitions in openhd
 */
static inline uint8_t mavlink_msg_openhd_camera_status_air_get_cam_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field cam_status from openhd_camera_status_air message
 *
 * @return  0==Unknown, 1==camera is currently streaming, 2==camera is currently restarting
 */
static inline uint8_t mavlink_msg_openhd_camera_status_air_get_cam_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Get field supports_variable_bitrate from openhd_camera_status_air message
 *
 * @return  Set to 1 if camera supports variable bitrate (changing the bitrate)
 */
static inline uint8_t mavlink_msg_openhd_camera_status_air_get_supports_variable_bitrate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field air_recording_active from openhd_camera_status_air message
 *
 * @return  air_recording_active
 */
static inline uint8_t mavlink_msg_openhd_camera_status_air_get_air_recording_active(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field encoding_format from openhd_camera_status_air message
 *
 * @return  0 for h264, 1 for h265, 2 for mjpeg
 */
static inline uint8_t mavlink_msg_openhd_camera_status_air_get_encoding_format(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field encoding_bitrate_kbits from openhd_camera_status_air message
 *
 * @return  encoding_bitrate_kbits
 */
static inline uint16_t mavlink_msg_openhd_camera_status_air_get_encoding_bitrate_kbits(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field encoding_keyframe_interval from openhd_camera_status_air message
 *
 * @return  encoding_keyframe_interval
 */
static inline uint8_t mavlink_msg_openhd_camera_status_air_get_encoding_keyframe_interval(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  19);
}

/**
 * @brief Get field stream_w from openhd_camera_status_air message
 *
 * @return  streamed video width
 */
static inline uint16_t mavlink_msg_openhd_camera_status_air_get_stream_w(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field stream_h from openhd_camera_status_air message
 *
 * @return  streamed video height
 */
static inline uint16_t mavlink_msg_openhd_camera_status_air_get_stream_h(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field stream_fps from openhd_camera_status_air message
 *
 * @return  streamed video fps
 */
static inline uint16_t mavlink_msg_openhd_camera_status_air_get_stream_fps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field dummy0 from openhd_camera_status_air message
 *
 * @return  for future use
 */
static inline int8_t mavlink_msg_openhd_camera_status_air_get_dummy0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  20);
}

/**
 * @brief Get field dummy1 from openhd_camera_status_air message
 *
 * @return  for future use
 */
static inline int16_t mavlink_msg_openhd_camera_status_air_get_dummy1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field dummy2 from openhd_camera_status_air message
 *
 * @return  for future use
 */
static inline int32_t mavlink_msg_openhd_camera_status_air_get_dummy2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Decode a openhd_camera_status_air message into a struct
 *
 * @param msg The message to decode
 * @param openhd_camera_status_air C-struct to decode the message contents into
 */
static inline void mavlink_msg_openhd_camera_status_air_decode(const mavlink_message_t* msg, mavlink_openhd_camera_status_air_t* openhd_camera_status_air)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    openhd_camera_status_air->dummy2 = mavlink_msg_openhd_camera_status_air_get_dummy2(msg);
    openhd_camera_status_air->encoding_bitrate_kbits = mavlink_msg_openhd_camera_status_air_get_encoding_bitrate_kbits(msg);
    openhd_camera_status_air->stream_w = mavlink_msg_openhd_camera_status_air_get_stream_w(msg);
    openhd_camera_status_air->stream_h = mavlink_msg_openhd_camera_status_air_get_stream_h(msg);
    openhd_camera_status_air->stream_fps = mavlink_msg_openhd_camera_status_air_get_stream_fps(msg);
    openhd_camera_status_air->dummy1 = mavlink_msg_openhd_camera_status_air_get_dummy1(msg);
    openhd_camera_status_air->cam_type = mavlink_msg_openhd_camera_status_air_get_cam_type(msg);
    openhd_camera_status_air->cam_status = mavlink_msg_openhd_camera_status_air_get_cam_status(msg);
    openhd_camera_status_air->supports_variable_bitrate = mavlink_msg_openhd_camera_status_air_get_supports_variable_bitrate(msg);
    openhd_camera_status_air->air_recording_active = mavlink_msg_openhd_camera_status_air_get_air_recording_active(msg);
    openhd_camera_status_air->encoding_format = mavlink_msg_openhd_camera_status_air_get_encoding_format(msg);
    openhd_camera_status_air->encoding_keyframe_interval = mavlink_msg_openhd_camera_status_air_get_encoding_keyframe_interval(msg);
    openhd_camera_status_air->dummy0 = mavlink_msg_openhd_camera_status_air_get_dummy0(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_LEN? msg->len : MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_LEN;
        memset(openhd_camera_status_air, 0, MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_LEN);
    memcpy(openhd_camera_status_air, _MAV_PAYLOAD(msg), len);
#endif
}
