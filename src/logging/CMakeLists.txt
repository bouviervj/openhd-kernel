add_library(logging_lib STATIC
  hudlogmessagesmodel.cpp
  logmessagesmodel.cpp
)
target_include_directories(logging_lib INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/../")