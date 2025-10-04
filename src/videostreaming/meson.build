
incdir = include_directories('..', '../../lib/h264')

avcodec_dep = dependency('libavcodec', version : '>=58.134.10')
avformat_dep = dependency('libavformat', version : '>=58.76.100')
avutil_dep = dependency('libavutil', version : '>=56.70.100')

all_dependencies = []
if host_machine.system() == 'windows'
  angleproject_dep = dependency('angleproject', required: true)
  all_dependencies = [avcodec_dep, avformat_dep, avutil_dep, angleproject_dep]
else 
  egl_dep = dependency('egl', required: true)
  opengl_dep = dependency('opengl', required: true)
  all_dependencies = [avcodec_dep, avformat_dep, avutil_dep, egl_dep, opengl_dep]
endif

openhd_kernel_video_lib = static_library(
  'openhd_kernel_video_lib',
  'avcodec/avcodec_decoder.cpp',
  'avcodec/texturerenderer.cpp',
  'avcodec/gl/gl_videorenderer.cpp',
  'avcodec/gl/gl_shaders.cpp',
  'vscommon/udp/UDPReceiver.cpp',
  'vscommon/rtp/rtpreceiver.cpp',
  'vscommon/rtp/ParseRTP.cpp',
  'vscommon/decodingstatistcs.cpp',
  include_directories: incdir,
  dependencies: all_dependencies
)