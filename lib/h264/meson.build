incdir = include_directories('..', '../../lib/h264')

absl_base_dep = dependency('absl_base', required: true)

h264_lib = static_library(
  'h264_lib',
  'bit_buffer.cc',
  'checks.cc',
  'h264_bitstream_parser.cc',
  'h264_common.cc',
  'pps_parser.cc',
  'sps_parser.cc',
  'zero_memory.cc'
)