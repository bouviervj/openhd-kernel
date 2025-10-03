project('openhd_kernel', 'cpp', version: '1.0.0', default_options: ['warning_level=0'])

sdl2_dep = dependency('SDL2', required: true)

subdir('src/settings')
subdir('src/videostreaming')
subdir('src/telemetry')
subdir('src/util')
subdir('src/logging')
subdir('lib/h264')
subdir('lib/geodesic')


incdir = include_directories('./src', './lib/h264')

executable('test_rtp', './main.cpp', link_with: [settings_lib, openhd_kernel_video_lib, openhd_kernel_telemetry_lib, openhd_kernel_util_lib, logging_lib, h264_lib, geodesic_lib], include_directories: incdir, dependencies: sdl2_dep)
