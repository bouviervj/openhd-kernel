add_library(util_lib STATIC
  qopenhd.cpp
  time_utils.cpp
)
target_include_directories(util_lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")