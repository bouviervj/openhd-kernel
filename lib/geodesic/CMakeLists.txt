

add_library(geodesic_lib STATIC
  geodesic.cpp
)
target_include_directories(geodesic_lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")