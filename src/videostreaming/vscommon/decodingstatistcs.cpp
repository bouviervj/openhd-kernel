#include "decodingstatistcs.h"
#include <sstream>

DecodingStatistcs::DecodingStatistcs()
{

}

DecodingStatistcs& DecodingStatistcs::instance()
{
    static DecodingStatistcs stats{};
    return stats;
}

void DecodingStatistcs::set_parse_and_enqueue_time(const std::string& str){
    parse_and_enqueue_time = str;
}

void DecodingStatistcs::set_decode_time(const std::string& str){
    decode_time = str;
}

void DecodingStatistcs::set_decode_and_render_time(const std::string& str){
    decode_and_render_time = str;
}

void DecodingStatistcs::set_n_renderer_dropped_frames(const int value){
    n_renderer_dropped_frames = value;
}

void DecodingStatistcs::set_n_rendered_frames(const int value){
    n_rendered_frames = value;
}

void DecodingStatistcs::set_udp_rx_bitrate(const int value){
    udp_rx_bitrate = value;
}

void DecodingStatistcs::set_doing_wait_for_frame_decode(const std::string& str){
    doing_wait_for_frame_decode = str;
}

void DecodingStatistcs::set_primary_stream_frame_format(const std::string& str){
    primary_stream_frame_format = str;
}

void DecodingStatistcs::set_decoding_type(const std::string& str){
    decoding_type = str;
}

void DecodingStatistcs::set_n_missing_rtp_video_packets(const int value){
    n_missing_rtp_video_packets = value;
}

void DecodingStatistcs::set_rtp_measured_bitrate(const std::string& str){
    rtp_measured_bitrate = str;
}

void DecodingStatistcs::set_estimate_rtp_fps(const std::string& str){
    estimate_rtp_fps = str;
}

void DecodingStatistcs::set_estimate_keyframe_interval(const std::string& str){
    estimate_keyframe_interval = str;
}

void DecodingStatistcs::set_n_decoder_dropped_frames(const int value){
    n_decoder_dropped_frames = value;
}



void DecodingStatistcs::reset_all_to_default()
{
    set_parse_and_enqueue_time("?");
    set_decode_and_render_time("?");
    set_n_renderer_dropped_frames(-1);
    set_udp_rx_bitrate(-1);
    set_doing_wait_for_frame_decode("?");
    set_primary_stream_frame_format("?");
    set_decoding_type("?");
    set_n_missing_rtp_video_packets(-1);
    set_rtp_measured_bitrate("-1");
    set_estimate_rtp_fps("-1");
    set_estimate_keyframe_interval("N/A");
    set_n_decoder_dropped_frames(-1);
}

void DecodingStatistcs::util_set_primary_stream_frame_format(std::string format, int width_px, int height_px)
{
    std::stringstream ss;
    ss<<format<<" "<<width_px<<"x"<<height_px;
    set_primary_stream_frame_format(ss.str().c_str());
}

void DecodingStatistcs::util_set_estimate_keyframe_interval_int(int value)
{
    std::stringstream ss;
    ss<<value;
    set_estimate_keyframe_interval(ss.str().c_str());
}

