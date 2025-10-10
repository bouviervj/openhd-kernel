add_library(settings_lib STATIC
    Settings.cpp
)
target_include_directories(settings_lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")