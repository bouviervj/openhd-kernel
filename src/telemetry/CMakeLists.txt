
add_library(telemetry_lib STATIC
  MavlinkTelemetry.cpp
  ./connection/udp_connection.cpp
  ./connection/tcp_connection.cpp
  ./action/impl/cmdsender.cpp
  ./action/impl/xparam.cpp
  ./action/fcaction.cpp
  ./action/fcmsgintervalhandler.cpp
  ./action/fcmissionhandler.cpp
  ./action/ohdaction.cpp
  ./settings/mavlinksettingsmodel.cpp
  ./settings/documentedparam.cpp
  ./settings/improvedstringsetting.cpp
  ./settings/improvedintsetting.cpp
  ./settings/wblinksettingshelper.cpp
  ./settings/pollutionhelper.cpp
  ./settings/frequencyhelper.cpp
  ./models/camerastreammodel.cpp
  ./models/fcmavlinksystem.cpp
  ./models/fcmavlinkmissionitemsmodel.cpp
  ./models/rcchannelsmodel.cpp
  ./models/aohdsystem.cpp
  ./models/wificard.cpp
  ./tutil/geodesi_helper.cpp
)
target_link_libraries(telemetry_lib PUBLIC util_lib geodesic_lib)
target_include_directories(telemetry_lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")