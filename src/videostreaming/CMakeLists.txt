


find_package(PkgConfig REQUIRED)

pkg_check_modules(AVUTIL REQUIRED libavutil)
pkg_check_modules(AVFORMAT REQUIRED libavformat)
pkg_check_modules(AVCODEC REQUIRED libavcodec)

# Use pkg-config to find ANGLE and check for required modules
if(WIN32)
  pkg_check_modules(ANGLE REQUIRED angleproject)
  set(SYSTEM_LIBRARY "${ANGLE_LIBRARIES};wsock32;ws2_32")
else()
  find_package(OpenGL REQUIRED COMPONENTS OpenGL EGL GLX)
  set(SYSTEM_LIBRARY "OpenGL::EGL;OpenGL::GLES3")
endif()

include_directories(${AVCODEC_INCLUDE_DIRS})
link_directories(${AVCODEC_LIBRARY_DIRS})

add_library(videostreaming_lib STATIC
  avcodec/avcodec_decoder.cpp
  avcodec/texturerenderer.cpp
  avcodec/gl/gl_videorenderer.cpp
  avcodec/gl/gl_shaders.cpp
  vscommon/udp/UDPReceiver.cpp
  vscommon/rtp/rtpreceiver.cpp
  vscommon/rtp/ParseRTP.cpp
  vscommon/decodingstatistcs.cpp
)
target_link_libraries(videostreaming_lib PUBLIC h264_lib common_lib ${AVUTIL_LIBRARIES}
    ${AVFORMAT_LIBRARIES}
    ${AVCODEC_LIBRARIES}
    ${SYSTEM_LIBRARY}
    )
target_include_directories(videostreaming_lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")