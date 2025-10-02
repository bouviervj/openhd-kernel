/** @file
 *    @brief MAVLink comm protocol testsuite generated from openhd.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef OPENHD_TESTSUITE_H
#define OPENHD_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_ardupilotmega(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_openhd(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_ardupilotmega(system_id, component_id, last_msg);
    mavlink_test_openhd(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"
#include "../ardupilotmega/testsuite.h"


static void mavlink_test_openhd_stats_monitor_mode_wifi_link(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_openhd_stats_monitor_mode_wifi_link_t packet_in = {
        963497464,963497672,963497880,963498088,963498296,18275,18379,18483,18587,18691,18795,101,168,235,46,113,180,247
    };
    mavlink_openhd_stats_monitor_mode_wifi_link_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.curr_tx_bps = packet_in.curr_tx_bps;
        packet1.curr_rx_bps = packet_in.curr_rx_bps;
        packet1.count_tx_inj_error_hint = packet_in.count_tx_inj_error_hint;
        packet1.count_tx_dropped_packets = packet_in.count_tx_dropped_packets;
        packet1.dummy2 = packet_in.dummy2;
        packet1.curr_tx_pps = packet_in.curr_tx_pps;
        packet1.curr_rx_pps = packet_in.curr_rx_pps;
        packet1.curr_rx_big_gaps_counter = packet_in.curr_rx_big_gaps_counter;
        packet1.curr_tx_channel_mhz = packet_in.curr_tx_channel_mhz;
        packet1.curr_rate_kbits = packet_in.curr_rate_kbits;
        packet1.dummy1 = packet_in.dummy1;
        packet1.curr_rx_packet_loss_perc = packet_in.curr_rx_packet_loss_perc;
        packet1.curr_tx_channel_w_mhz = packet_in.curr_tx_channel_w_mhz;
        packet1.curr_tx_mcs_index = packet_in.curr_tx_mcs_index;
        packet1.curr_n_rate_adjustments = packet_in.curr_n_rate_adjustments;
        packet1.bitfield = packet_in.bitfield;
        packet1.pollution_perc = packet_in.pollution_perc;
        packet1.dummy0 = packet_in.dummy0;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_monitor_mode_wifi_link_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_openhd_stats_monitor_mode_wifi_link_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_monitor_mode_wifi_link_pack(system_id, component_id, &msg , packet1.curr_tx_pps , packet1.curr_rx_pps , packet1.curr_tx_bps , packet1.curr_rx_bps , packet1.curr_rx_packet_loss_perc , packet1.curr_rx_big_gaps_counter , packet1.count_tx_inj_error_hint , packet1.count_tx_dropped_packets , packet1.curr_tx_channel_mhz , packet1.curr_tx_channel_w_mhz , packet1.curr_tx_mcs_index , packet1.curr_rate_kbits , packet1.curr_n_rate_adjustments , packet1.bitfield , packet1.pollution_perc , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_monitor_mode_wifi_link_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_monitor_mode_wifi_link_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.curr_tx_pps , packet1.curr_rx_pps , packet1.curr_tx_bps , packet1.curr_rx_bps , packet1.curr_rx_packet_loss_perc , packet1.curr_rx_big_gaps_counter , packet1.count_tx_inj_error_hint , packet1.count_tx_dropped_packets , packet1.curr_tx_channel_mhz , packet1.curr_tx_channel_w_mhz , packet1.curr_tx_mcs_index , packet1.curr_rate_kbits , packet1.curr_n_rate_adjustments , packet1.bitfield , packet1.pollution_perc , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_monitor_mode_wifi_link_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_openhd_stats_monitor_mode_wifi_link_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_monitor_mode_wifi_link_send(MAVLINK_COMM_1 , packet1.curr_tx_pps , packet1.curr_rx_pps , packet1.curr_tx_bps , packet1.curr_rx_bps , packet1.curr_rx_packet_loss_perc , packet1.curr_rx_big_gaps_counter , packet1.count_tx_inj_error_hint , packet1.count_tx_dropped_packets , packet1.curr_tx_channel_mhz , packet1.curr_tx_channel_w_mhz , packet1.curr_tx_mcs_index , packet1.curr_rate_kbits , packet1.curr_n_rate_adjustments , packet1.bitfield , packet1.pollution_perc , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_monitor_mode_wifi_link_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("OPENHD_STATS_MONITOR_MODE_WIFI_LINK") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_LINK) != NULL);
#endif
}

static void mavlink_test_openhd_stats_monitor_mode_wifi_card(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_openhd_stats_monitor_mode_wifi_card_t packet_in = {
        963497464,963497672,963497880,17859,17963,18067,18171,65,132,199,10,77,144,211,22,89,156,223,34,101,168,235
    };
    mavlink_openhd_stats_monitor_mode_wifi_card_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.count_p_received = packet_in.count_p_received;
        packet1.count_p_injected = packet_in.count_p_injected;
        packet1.dummy2 = packet_in.dummy2;
        packet1.tx_power_current = packet_in.tx_power_current;
        packet1.tx_power_armed = packet_in.tx_power_armed;
        packet1.tx_power_disarmed = packet_in.tx_power_disarmed;
        packet1.dummy1 = packet_in.dummy1;
        packet1.card_index = packet_in.card_index;
        packet1.card_type = packet_in.card_type;
        packet1.tx_active = packet_in.tx_active;
        packet1.rx_rssi = packet_in.rx_rssi;
        packet1.rx_rssi_1 = packet_in.rx_rssi_1;
        packet1.rx_rssi_2 = packet_in.rx_rssi_2;
        packet1.rx_noise_adapter = packet_in.rx_noise_adapter;
        packet1.rx_noise_antenna1 = packet_in.rx_noise_antenna1;
        packet1.rx_noise_antenna2 = packet_in.rx_noise_antenna2;
        packet1.rx_signal_quality_adapter = packet_in.rx_signal_quality_adapter;
        packet1.rx_signal_quality_antenna1 = packet_in.rx_signal_quality_antenna1;
        packet1.rx_signal_quality_antenna2 = packet_in.rx_signal_quality_antenna2;
        packet1.curr_rx_packet_loss_perc = packet_in.curr_rx_packet_loss_perc;
        packet1.curr_status = packet_in.curr_status;
        packet1.dummy0 = packet_in.dummy0;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_monitor_mode_wifi_card_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_openhd_stats_monitor_mode_wifi_card_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_monitor_mode_wifi_card_pack(system_id, component_id, &msg , packet1.card_index , packet1.card_type , packet1.tx_active , packet1.rx_rssi , packet1.rx_rssi_1 , packet1.rx_rssi_2 , packet1.rx_noise_adapter , packet1.rx_noise_antenna1 , packet1.rx_noise_antenna2 , packet1.rx_signal_quality_adapter , packet1.rx_signal_quality_antenna1 , packet1.rx_signal_quality_antenna2 , packet1.tx_power_current , packet1.tx_power_armed , packet1.tx_power_disarmed , packet1.count_p_received , packet1.count_p_injected , packet1.curr_rx_packet_loss_perc , packet1.curr_status , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_monitor_mode_wifi_card_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_monitor_mode_wifi_card_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.card_index , packet1.card_type , packet1.tx_active , packet1.rx_rssi , packet1.rx_rssi_1 , packet1.rx_rssi_2 , packet1.rx_noise_adapter , packet1.rx_noise_antenna1 , packet1.rx_noise_antenna2 , packet1.rx_signal_quality_adapter , packet1.rx_signal_quality_antenna1 , packet1.rx_signal_quality_antenna2 , packet1.tx_power_current , packet1.tx_power_armed , packet1.tx_power_disarmed , packet1.count_p_received , packet1.count_p_injected , packet1.curr_rx_packet_loss_perc , packet1.curr_status , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_monitor_mode_wifi_card_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_openhd_stats_monitor_mode_wifi_card_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_monitor_mode_wifi_card_send(MAVLINK_COMM_1 , packet1.card_index , packet1.card_type , packet1.tx_active , packet1.rx_rssi , packet1.rx_rssi_1 , packet1.rx_rssi_2 , packet1.rx_noise_adapter , packet1.rx_noise_antenna1 , packet1.rx_noise_antenna2 , packet1.rx_signal_quality_adapter , packet1.rx_signal_quality_antenna1 , packet1.rx_signal_quality_antenna2 , packet1.tx_power_current , packet1.tx_power_armed , packet1.tx_power_disarmed , packet1.count_p_received , packet1.count_p_injected , packet1.curr_rx_packet_loss_perc , packet1.curr_status , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_monitor_mode_wifi_card_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("OPENHD_STATS_MONITOR_MODE_WIFI_CARD") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_OPENHD_STATS_MONITOR_MODE_WIFI_CARD) != NULL);
#endif
}

static void mavlink_test_openhd_stats_telemetry(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_OPENHD_STATS_TELEMETRY >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_openhd_stats_telemetry_t packet_in = {
        963497464,963497672,963497880,17859,17963,18067,18171,65
    };
    mavlink_openhd_stats_telemetry_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.curr_tx_bps = packet_in.curr_tx_bps;
        packet1.curr_rx_bps = packet_in.curr_rx_bps;
        packet1.dummy2 = packet_in.dummy2;
        packet1.curr_tx_pps = packet_in.curr_tx_pps;
        packet1.curr_rx_pps = packet_in.curr_rx_pps;
        packet1.curr_rx_packet_loss_perc = packet_in.curr_rx_packet_loss_perc;
        packet1.dummy1 = packet_in.dummy1;
        packet1.dummy0 = packet_in.dummy0;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_OPENHD_STATS_TELEMETRY_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_OPENHD_STATS_TELEMETRY_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_telemetry_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_openhd_stats_telemetry_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_telemetry_pack(system_id, component_id, &msg , packet1.curr_tx_pps , packet1.curr_rx_pps , packet1.curr_tx_bps , packet1.curr_rx_bps , packet1.curr_rx_packet_loss_perc , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_telemetry_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_telemetry_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.curr_tx_pps , packet1.curr_rx_pps , packet1.curr_tx_bps , packet1.curr_rx_bps , packet1.curr_rx_packet_loss_perc , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_telemetry_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_openhd_stats_telemetry_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_telemetry_send(MAVLINK_COMM_1 , packet1.curr_tx_pps , packet1.curr_rx_pps , packet1.curr_tx_bps , packet1.curr_rx_bps , packet1.curr_rx_packet_loss_perc , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_telemetry_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("OPENHD_STATS_TELEMETRY") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_OPENHD_STATS_TELEMETRY) != NULL);
#endif
}

static void mavlink_test_openhd_stats_wb_video_air(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_openhd_stats_wb_video_air_t packet_in = {
        963497464,963497672,963497880,963498088,963498296,18275,18379,18483,211,22
    };
    mavlink_openhd_stats_wb_video_air_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.curr_measured_encoder_bitrate = packet_in.curr_measured_encoder_bitrate;
        packet1.curr_injected_bitrate = packet_in.curr_injected_bitrate;
        packet1.curr_injected_pps = packet_in.curr_injected_pps;
        packet1.curr_dropped_frames = packet_in.curr_dropped_frames;
        packet1.dummy2 = packet_in.dummy2;
        packet1.curr_recommended_bitrate = packet_in.curr_recommended_bitrate;
        packet1.curr_fec_percentage = packet_in.curr_fec_percentage;
        packet1.dummy1 = packet_in.dummy1;
        packet1.link_index = packet_in.link_index;
        packet1.dummy0 = packet_in.dummy0;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_wb_video_air_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_openhd_stats_wb_video_air_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_wb_video_air_pack(system_id, component_id, &msg , packet1.link_index , packet1.curr_recommended_bitrate , packet1.curr_measured_encoder_bitrate , packet1.curr_injected_bitrate , packet1.curr_injected_pps , packet1.curr_dropped_frames , packet1.curr_fec_percentage , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_wb_video_air_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_wb_video_air_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.link_index , packet1.curr_recommended_bitrate , packet1.curr_measured_encoder_bitrate , packet1.curr_injected_bitrate , packet1.curr_injected_pps , packet1.curr_dropped_frames , packet1.curr_fec_percentage , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_wb_video_air_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_openhd_stats_wb_video_air_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_wb_video_air_send(MAVLINK_COMM_1 , packet1.link_index , packet1.curr_recommended_bitrate , packet1.curr_measured_encoder_bitrate , packet1.curr_injected_bitrate , packet1.curr_injected_pps , packet1.curr_dropped_frames , packet1.curr_fec_percentage , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_wb_video_air_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("OPENHD_STATS_WB_VIDEO_AIR") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR) != NULL);
#endif
}

static void mavlink_test_openhd_stats_wb_video_air_fec_performance(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_FEC_PERFORMANCE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_openhd_stats_wb_video_air_fec_performance_t packet_in = {
        963497464,963497672,963497880,963498088,18067,18171,18275,18379,18483,18587,18691,223,34
    };
    mavlink_openhd_stats_wb_video_air_fec_performance_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.curr_fec_encode_time_avg_us = packet_in.curr_fec_encode_time_avg_us;
        packet1.curr_fec_encode_time_min_us = packet_in.curr_fec_encode_time_min_us;
        packet1.curr_fec_encode_time_max_us = packet_in.curr_fec_encode_time_max_us;
        packet1.dummy2 = packet_in.dummy2;
        packet1.curr_fec_block_size_avg = packet_in.curr_fec_block_size_avg;
        packet1.curr_fec_block_size_min = packet_in.curr_fec_block_size_min;
        packet1.curr_fec_block_size_max = packet_in.curr_fec_block_size_max;
        packet1.curr_tx_delay_avg_us = packet_in.curr_tx_delay_avg_us;
        packet1.curr_tx_delay_min_us = packet_in.curr_tx_delay_min_us;
        packet1.curr_tx_delay_max_us = packet_in.curr_tx_delay_max_us;
        packet1.dummy1 = packet_in.dummy1;
        packet1.link_index = packet_in.link_index;
        packet1.dummy0 = packet_in.dummy0;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_FEC_PERFORMANCE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_FEC_PERFORMANCE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_wb_video_air_fec_performance_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_openhd_stats_wb_video_air_fec_performance_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_wb_video_air_fec_performance_pack(system_id, component_id, &msg , packet1.link_index , packet1.curr_fec_encode_time_avg_us , packet1.curr_fec_encode_time_min_us , packet1.curr_fec_encode_time_max_us , packet1.curr_fec_block_size_avg , packet1.curr_fec_block_size_min , packet1.curr_fec_block_size_max , packet1.curr_tx_delay_avg_us , packet1.curr_tx_delay_min_us , packet1.curr_tx_delay_max_us , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_wb_video_air_fec_performance_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_wb_video_air_fec_performance_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.link_index , packet1.curr_fec_encode_time_avg_us , packet1.curr_fec_encode_time_min_us , packet1.curr_fec_encode_time_max_us , packet1.curr_fec_block_size_avg , packet1.curr_fec_block_size_min , packet1.curr_fec_block_size_max , packet1.curr_tx_delay_avg_us , packet1.curr_tx_delay_min_us , packet1.curr_tx_delay_max_us , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_wb_video_air_fec_performance_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_openhd_stats_wb_video_air_fec_performance_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_wb_video_air_fec_performance_send(MAVLINK_COMM_1 , packet1.link_index , packet1.curr_fec_encode_time_avg_us , packet1.curr_fec_encode_time_min_us , packet1.curr_fec_encode_time_max_us , packet1.curr_fec_block_size_avg , packet1.curr_fec_block_size_min , packet1.curr_fec_block_size_max , packet1.curr_tx_delay_avg_us , packet1.curr_tx_delay_min_us , packet1.curr_tx_delay_max_us , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_wb_video_air_fec_performance_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("OPENHD_STATS_WB_VIDEO_AIR_FEC_PERFORMANCE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_AIR_FEC_PERFORMANCE) != NULL);
#endif
}

static void mavlink_test_openhd_stats_wb_video_ground(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_openhd_stats_wb_video_ground_t packet_in = {
        963497464,963497672,963497880,963498088,963498296,963498504,18483,211,22
    };
    mavlink_openhd_stats_wb_video_ground_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.curr_incoming_bitrate = packet_in.curr_incoming_bitrate;
        packet1.count_blocks_total = packet_in.count_blocks_total;
        packet1.count_blocks_lost = packet_in.count_blocks_lost;
        packet1.count_blocks_recovered = packet_in.count_blocks_recovered;
        packet1.count_fragments_recovered = packet_in.count_fragments_recovered;
        packet1.dummy2 = packet_in.dummy2;
        packet1.dummy1 = packet_in.dummy1;
        packet1.link_index = packet_in.link_index;
        packet1.dummy0 = packet_in.dummy0;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_wb_video_ground_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_openhd_stats_wb_video_ground_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_wb_video_ground_pack(system_id, component_id, &msg , packet1.link_index , packet1.curr_incoming_bitrate , packet1.count_blocks_total , packet1.count_blocks_lost , packet1.count_blocks_recovered , packet1.count_fragments_recovered , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_wb_video_ground_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_wb_video_ground_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.link_index , packet1.curr_incoming_bitrate , packet1.count_blocks_total , packet1.count_blocks_lost , packet1.count_blocks_recovered , packet1.count_fragments_recovered , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_wb_video_ground_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_openhd_stats_wb_video_ground_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_wb_video_ground_send(MAVLINK_COMM_1 , packet1.link_index , packet1.curr_incoming_bitrate , packet1.count_blocks_total , packet1.count_blocks_lost , packet1.count_blocks_recovered , packet1.count_fragments_recovered , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_wb_video_ground_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("OPENHD_STATS_WB_VIDEO_GROUND") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND) != NULL);
#endif
}

static void mavlink_test_openhd_stats_wb_video_ground_fec_performance(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_openhd_stats_wb_video_ground_fec_performance_t packet_in = {
        963497464,963497672,963497880,963498088,18067,187,254
    };
    mavlink_openhd_stats_wb_video_ground_fec_performance_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.curr_fec_decode_time_avg_us = packet_in.curr_fec_decode_time_avg_us;
        packet1.curr_fec_decode_time_min_us = packet_in.curr_fec_decode_time_min_us;
        packet1.curr_fec_decode_time_max_us = packet_in.curr_fec_decode_time_max_us;
        packet1.dummy2 = packet_in.dummy2;
        packet1.dummy1 = packet_in.dummy1;
        packet1.link_index = packet_in.link_index;
        packet1.dummy0 = packet_in.dummy0;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_wb_video_ground_fec_performance_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_openhd_stats_wb_video_ground_fec_performance_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_wb_video_ground_fec_performance_pack(system_id, component_id, &msg , packet1.link_index , packet1.curr_fec_decode_time_avg_us , packet1.curr_fec_decode_time_min_us , packet1.curr_fec_decode_time_max_us , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_wb_video_ground_fec_performance_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_wb_video_ground_fec_performance_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.link_index , packet1.curr_fec_decode_time_avg_us , packet1.curr_fec_decode_time_min_us , packet1.curr_fec_decode_time_max_us , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_wb_video_ground_fec_performance_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_openhd_stats_wb_video_ground_fec_performance_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_stats_wb_video_ground_fec_performance_send(MAVLINK_COMM_1 , packet1.link_index , packet1.curr_fec_decode_time_avg_us , packet1.curr_fec_decode_time_min_us , packet1.curr_fec_decode_time_max_us , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_stats_wb_video_ground_fec_performance_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_OPENHD_STATS_WB_VIDEO_GROUND_FEC_PERFORMANCE) != NULL);
#endif
}

static void mavlink_test_openhd_onboard_computer_status_extension(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_OPENHD_ONBOARD_COMPUTER_STATUS_EXTENSION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_openhd_onboard_computer_status_extension_t packet_in = {
        17235,17339,17443,17547,17651,163
    };
    mavlink_openhd_onboard_computer_status_extension_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.cpu_core_voltage_milliV = packet_in.cpu_core_voltage_milliV;
        packet1.reserved1 = packet_in.reserved1;
        packet1.reserved2 = packet_in.reserved2;
        packet1.reserved3 = packet_in.reserved3;
        packet1.reserved4 = packet_in.reserved4;
        packet1.over_current = packet_in.over_current;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_OPENHD_ONBOARD_COMPUTER_STATUS_EXTENSION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_OPENHD_ONBOARD_COMPUTER_STATUS_EXTENSION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_onboard_computer_status_extension_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_openhd_onboard_computer_status_extension_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_onboard_computer_status_extension_pack(system_id, component_id, &msg , packet1.cpu_core_voltage_milliV , packet1.over_current , packet1.reserved1 , packet1.reserved2 , packet1.reserved3 , packet1.reserved4 );
    mavlink_msg_openhd_onboard_computer_status_extension_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_onboard_computer_status_extension_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.cpu_core_voltage_milliV , packet1.over_current , packet1.reserved1 , packet1.reserved2 , packet1.reserved3 , packet1.reserved4 );
    mavlink_msg_openhd_onboard_computer_status_extension_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_openhd_onboard_computer_status_extension_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_onboard_computer_status_extension_send(MAVLINK_COMM_1 , packet1.cpu_core_voltage_milliV , packet1.over_current , packet1.reserved1 , packet1.reserved2 , packet1.reserved3 , packet1.reserved4 );
    mavlink_msg_openhd_onboard_computer_status_extension_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("OPENHD_ONBOARD_COMPUTER_STATUS_EXTENSION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_OPENHD_ONBOARD_COMPUTER_STATUS_EXTENSION) != NULL);
#endif
}

static void mavlink_test_openhd_camera_status_air(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_openhd_camera_status_air_t packet_in = {
        963497464,17443,17547,17651,17755,17859,175,242,53,120,187,254,65
    };
    mavlink_openhd_camera_status_air_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy2 = packet_in.dummy2;
        packet1.encoding_bitrate_kbits = packet_in.encoding_bitrate_kbits;
        packet1.stream_w = packet_in.stream_w;
        packet1.stream_h = packet_in.stream_h;
        packet1.stream_fps = packet_in.stream_fps;
        packet1.dummy1 = packet_in.dummy1;
        packet1.cam_type = packet_in.cam_type;
        packet1.cam_status = packet_in.cam_status;
        packet1.supports_variable_bitrate = packet_in.supports_variable_bitrate;
        packet1.air_recording_active = packet_in.air_recording_active;
        packet1.encoding_format = packet_in.encoding_format;
        packet1.encoding_keyframe_interval = packet_in.encoding_keyframe_interval;
        packet1.dummy0 = packet_in.dummy0;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_camera_status_air_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_openhd_camera_status_air_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_camera_status_air_pack(system_id, component_id, &msg , packet1.cam_type , packet1.cam_status , packet1.supports_variable_bitrate , packet1.air_recording_active , packet1.encoding_format , packet1.encoding_bitrate_kbits , packet1.encoding_keyframe_interval , packet1.stream_w , packet1.stream_h , packet1.stream_fps , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_camera_status_air_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_camera_status_air_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.cam_type , packet1.cam_status , packet1.supports_variable_bitrate , packet1.air_recording_active , packet1.encoding_format , packet1.encoding_bitrate_kbits , packet1.encoding_keyframe_interval , packet1.stream_w , packet1.stream_h , packet1.stream_fps , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_camera_status_air_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_openhd_camera_status_air_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_camera_status_air_send(MAVLINK_COMM_1 , packet1.cam_type , packet1.cam_status , packet1.supports_variable_bitrate , packet1.air_recording_active , packet1.encoding_format , packet1.encoding_bitrate_kbits , packet1.encoding_keyframe_interval , packet1.stream_w , packet1.stream_h , packet1.stream_fps , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_camera_status_air_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("OPENHD_CAMERA_STATUS_AIR") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_OPENHD_CAMERA_STATUS_AIR) != NULL);
#endif
}

static void mavlink_test_openhd_version_message(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_openhd_version_message_t packet_in = {
        5,72,139,206,17
    };
    mavlink_openhd_version_message_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.major = packet_in.major;
        packet1.minor = packet_in.minor;
        packet1.patch = packet_in.patch;
        packet1.release_type = packet_in.release_type;
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_version_message_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_openhd_version_message_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_version_message_pack(system_id, component_id, &msg , packet1.major , packet1.minor , packet1.patch , packet1.release_type , packet1.dummy );
    mavlink_msg_openhd_version_message_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_version_message_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.major , packet1.minor , packet1.patch , packet1.release_type , packet1.dummy );
    mavlink_msg_openhd_version_message_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_openhd_version_message_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_version_message_send(MAVLINK_COMM_1 , packet1.major , packet1.minor , packet1.patch , packet1.release_type , packet1.dummy );
    mavlink_msg_openhd_version_message_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("OPENHD_VERSION_MESSAGE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_OPENHD_VERSION_MESSAGE) != NULL);
#endif
}

static void mavlink_test_openhd_wifbroadcast_supported_channels(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_openhd_wifbroadcast_supported_channels_t packet_in = {
        { 17235, 17236, 17237, 17238, 17239, 17240, 17241, 17242, 17243, 17244, 17245, 17246, 17247, 17248, 17249, 17250, 17251, 17252, 17253, 17254, 17255, 17256, 17257, 17258, 17259, 17260, 17261, 17262, 17263, 17264, 17265, 17266, 17267, 17268, 17269, 17270, 17271, 17272, 17273, 17274, 17275, 17276, 17277, 17278, 17279, 17280, 17281, 17282, 17283, 17284, 17285, 17286, 17287, 17288, 17289, 17290, 17291, 17292, 17293, 17294 },109,{ 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235 }
    };
    mavlink_openhd_wifbroadcast_supported_channels_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.card_index = packet_in.card_index;
        
        mav_array_memcpy(packet1.channels, packet_in.channels, sizeof(uint16_t)*60);
        mav_array_memcpy(packet1.bandwidths, packet_in.bandwidths, sizeof(uint8_t)*60);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_wifbroadcast_supported_channels_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_openhd_wifbroadcast_supported_channels_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_wifbroadcast_supported_channels_pack(system_id, component_id, &msg , packet1.card_index , packet1.channels , packet1.bandwidths );
    mavlink_msg_openhd_wifbroadcast_supported_channels_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_wifbroadcast_supported_channels_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.card_index , packet1.channels , packet1.bandwidths );
    mavlink_msg_openhd_wifbroadcast_supported_channels_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_openhd_wifbroadcast_supported_channels_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_wifbroadcast_supported_channels_send(MAVLINK_COMM_1 , packet1.card_index , packet1.channels , packet1.bandwidths );
    mavlink_msg_openhd_wifbroadcast_supported_channels_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SUPPORTED_CHANNELS) != NULL);
#endif
}

static void mavlink_test_openhd_wifbroadcast_scan_channels_progress(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_openhd_wifbroadcast_scan_channels_progress_t packet_in = {
        17235,139,206,17
    };
    mavlink_openhd_wifbroadcast_scan_channels_progress_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.channel_mhz = packet_in.channel_mhz;
        packet1.progress = packet_in.progress;
        packet1.channel_width_mhz = packet_in.channel_width_mhz;
        packet1.success = packet_in.success;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_wifbroadcast_scan_channels_progress_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_openhd_wifbroadcast_scan_channels_progress_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_wifbroadcast_scan_channels_progress_pack(system_id, component_id, &msg , packet1.progress , packet1.channel_mhz , packet1.channel_width_mhz , packet1.success );
    mavlink_msg_openhd_wifbroadcast_scan_channels_progress_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_wifbroadcast_scan_channels_progress_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.progress , packet1.channel_mhz , packet1.channel_width_mhz , packet1.success );
    mavlink_msg_openhd_wifbroadcast_scan_channels_progress_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_openhd_wifbroadcast_scan_channels_progress_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_wifbroadcast_scan_channels_progress_send(MAVLINK_COMM_1 , packet1.progress , packet1.channel_mhz , packet1.channel_width_mhz , packet1.success );
    mavlink_msg_openhd_wifbroadcast_scan_channels_progress_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_SCAN_CHANNELS_PROGRESS) != NULL);
#endif
}

static void mavlink_test_openhd_wifbroadcast_analyze_channels_progress(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_openhd_wifbroadcast_analyze_channels_progress_t packet_in = {
        963497464,963497672,{ 17651, 17652, 17653, 17654, 17655, 17656, 17657, 17658, 17659, 17660, 17661, 17662, 17663, 17664, 17665, 17666, 17667, 17668, 17669, 17670, 17671, 17672, 17673, 17674, 17675, 17676, 17677, 17678, 17679, 17680 },{ 20771, 20772, 20773, 20774, 20775, 20776, 20777, 20778, 20779, 20780, 20781, 20782, 20783, 20784, 20785, 20786, 20787, 20788, 20789, 20790, 20791, 20792, 20793, 20794, 20795, 20796, 20797, 20798, 20799, 20800 },{ 23891, 23892, 23893, 23894, 23895, 23896, 23897, 23898, 23899, 23900, 23901, 23902, 23903, 23904, 23905, 23906, 23907, 23908, 23909, 23910, 23911, 23912, 23913, 23914, 23915, 23916, 23917, 23918, 23919, 23920 },27011,191
    };
    mavlink_openhd_wifbroadcast_analyze_channels_progress_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy1 = packet_in.dummy1;
        packet1.dummy2 = packet_in.dummy2;
        packet1.dummy0 = packet_in.dummy0;
        packet1.progress_perc = packet_in.progress_perc;
        
        mav_array_memcpy(packet1.channels_mhz, packet_in.channels_mhz, sizeof(uint16_t)*30);
        mav_array_memcpy(packet1.foreign_packets, packet_in.foreign_packets, sizeof(uint16_t)*30);
        mav_array_memcpy(packet1.dummy, packet_in.dummy, sizeof(uint16_t)*30);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_pack(system_id, component_id, &msg , packet1.channels_mhz , packet1.foreign_packets , packet1.dummy , packet1.progress_perc , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.channels_mhz , packet1.foreign_packets , packet1.dummy , packet1.progress_perc , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_send(MAVLINK_COMM_1 , packet1.channels_mhz , packet1.foreign_packets , packet1.dummy , packet1.progress_perc , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_wifbroadcast_analyze_channels_progress_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_ANALYZE_CHANNELS_PROGRESS) != NULL);
#endif
}

static void mavlink_test_openhd_wifbroadcast_gnd_operating_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_openhd_wifbroadcast_gnd_operating_mode_t packet_in = {
        963497464,963497672,17651,163,230
    };
    mavlink_openhd_wifbroadcast_gnd_operating_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy1 = packet_in.dummy1;
        packet1.dummy2 = packet_in.dummy2;
        packet1.dummy0 = packet_in.dummy0;
        packet1.operating_mode = packet_in.operating_mode;
        packet1.tx_passive_mode_is_enabled = packet_in.tx_passive_mode_is_enabled;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_pack(system_id, component_id, &msg , packet1.operating_mode , packet1.tx_passive_mode_is_enabled , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.operating_mode , packet1.tx_passive_mode_is_enabled , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_send(MAVLINK_COMM_1 , packet1.operating_mode , packet1.tx_passive_mode_is_enabled , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_wifbroadcast_gnd_operating_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("OPENHD_WIFBROADCAST_GND_OPERATING_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_OPENHD_WIFBROADCAST_GND_OPERATING_MODE) != NULL);
#endif
}

static void mavlink_test_openhd_sys_status1(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_OPENHD_SYS_STATUS1 >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_openhd_sys_status1_t packet_in = {
        963497464,963497672,17651,163,230,41,108,175
    };
    mavlink_openhd_sys_status1_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy1 = packet_in.dummy1;
        packet1.dummy2 = packet_in.dummy2;
        packet1.wifi_hotspot_frequency = packet_in.wifi_hotspot_frequency;
        packet1.platform_type = packet_in.platform_type;
        packet1.external_devices_count = packet_in.external_devices_count;
        packet1.wifi_hotspot_state = packet_in.wifi_hotspot_state;
        packet1.ethernet_hotspot_state = packet_in.ethernet_hotspot_state;
        packet1.dummy0 = packet_in.dummy0;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_OPENHD_SYS_STATUS1_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_sys_status1_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_openhd_sys_status1_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_sys_status1_pack(system_id, component_id, &msg , packet1.platform_type , packet1.external_devices_count , packet1.wifi_hotspot_state , packet1.wifi_hotspot_frequency , packet1.ethernet_hotspot_state , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_sys_status1_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_sys_status1_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.platform_type , packet1.external_devices_count , packet1.wifi_hotspot_state , packet1.wifi_hotspot_frequency , packet1.ethernet_hotspot_state , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_sys_status1_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_openhd_sys_status1_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_openhd_sys_status1_send(MAVLINK_COMM_1 , packet1.platform_type , packet1.external_devices_count , packet1.wifi_hotspot_state , packet1.wifi_hotspot_frequency , packet1.ethernet_hotspot_state , packet1.dummy0 , packet1.dummy1 , packet1.dummy2 );
    mavlink_msg_openhd_sys_status1_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("OPENHD_SYS_STATUS1") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_OPENHD_SYS_STATUS1) != NULL);
#endif
}

static void mavlink_test_openhd(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_openhd_stats_monitor_mode_wifi_link(system_id, component_id, last_msg);
    mavlink_test_openhd_stats_monitor_mode_wifi_card(system_id, component_id, last_msg);
    mavlink_test_openhd_stats_telemetry(system_id, component_id, last_msg);
    mavlink_test_openhd_stats_wb_video_air(system_id, component_id, last_msg);
    mavlink_test_openhd_stats_wb_video_air_fec_performance(system_id, component_id, last_msg);
    mavlink_test_openhd_stats_wb_video_ground(system_id, component_id, last_msg);
    mavlink_test_openhd_stats_wb_video_ground_fec_performance(system_id, component_id, last_msg);
    mavlink_test_openhd_onboard_computer_status_extension(system_id, component_id, last_msg);
    mavlink_test_openhd_camera_status_air(system_id, component_id, last_msg);
    mavlink_test_openhd_version_message(system_id, component_id, last_msg);
    mavlink_test_openhd_wifbroadcast_supported_channels(system_id, component_id, last_msg);
    mavlink_test_openhd_wifbroadcast_scan_channels_progress(system_id, component_id, last_msg);
    mavlink_test_openhd_wifbroadcast_analyze_channels_progress(system_id, component_id, last_msg);
    mavlink_test_openhd_wifbroadcast_gnd_operating_mode(system_id, component_id, last_msg);
    mavlink_test_openhd_sys_status1(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // OPENHD_TESTSUITE_H
