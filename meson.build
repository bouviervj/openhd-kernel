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

link_args_system = []
if host_machine.system() == 'windows'
    # This will link with winsock
    link_args_system = ['-lws2_32']
endif

executable('test_rtp', './main.cpp', link_args: link_args_system, link_with: [settings_lib, openhd_kernel_video_lib, openhd_kernel_telemetry_lib, openhd_kernel_util_lib, logging_lib, h264_lib, geodesic_lib], include_directories: incdir, dependencies: sdl2_dep)
