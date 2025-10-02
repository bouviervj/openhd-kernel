#include "time_utils.h"

#include <iostream>
#include <chrono>
#include <iomanip> // Required for std::put_time
#include <ctime>   // Required for std::localtime

std::string millisToFormattedString(long long milliseconds) {
    // Create a duration from the milliseconds
    std::chrono::milliseconds duration(milliseconds);

    // Convert to a time_point representing time since epoch
    std::chrono::system_clock::time_point timePoint = 
        std::chrono::system_clock::time_point(duration);

    // Convert to time_t for use with std::localtime
    std::time_t rawTime = std::chrono::system_clock::to_time_t(timePoint);

    // Get local time structure
    std::tm* localTime = std::localtime(&rawTime);

    // Extract the milliseconds component
    long long millisComponent = milliseconds % 1000;

    // Format the string
    std::stringstream ss;
    ss << std::put_time(localTime, "%Y-%m-%d %H:%M:%S");
    ss << "." << std::setfill('0') << std::setw(3) << millisComponent;

    return ss.str();
}