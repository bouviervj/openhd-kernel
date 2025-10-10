

add_library(h264_lib STATIC
  bit_buffer.cc
  checks.cc
  h264_bitstream_parser.cc
  h264_common.cc
  pps_parser.cc
  sps_parser.cc
  zero_memory.cc
)
target_include_directories(h264_lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")