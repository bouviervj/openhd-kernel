#ifndef LOGHELPER_H
#define LOGHELPER_H

#include "../util/color.h"

namespace loghelper{

// See https://mavlink.io/en/messages/common.html#MAV_SEVERITY
// We use error, warning, info and debug
static constexpr auto X_MAV_SEVERITY_ERROR=3;
static constexpr auto X_MAV_SEVERITY_WARNING=4;
static constexpr auto X_MAV_SEVERITY_INFO=6;
static constexpr auto X_MAV_SEVERITY_DEBUG=7;


static Color log_level_to_color(int level){
    switch (level) {
        case 0: return Color("#fa0000"); // error
        case 1: return Color("#fa0000"); // error
        case 2: return Color("#fa0000"); // error
        case 3: return Color("#fa0000"); // error
        case 4: return Color("#fffa00"); // warning
        case 5: return Color("#ffffff"); // notice
        case 6: return Color("#00ea00"); // info
        case 7: return Color("#0000ea"); // debug
        default: return Color("#00ea00");
    }
}

static std::string log_level_to_icon(int level){
    switch (level) {
        case 0: return "\uf057"; // red error
        case 1: return "\uf057"; // red error
        case 2: return "\uf057"; // red error
        case 3: return "\uf057"; // red error
        case 4: return "\uf071"; // yellow warning
        case 5: return "\uf05a"; // white info
        case 6: return "\uf05a"; // blue info
        case 7: return "\uf188"; // green debug
        default: return "\uf05a";
    }
}

}
#endif // LOGHELPER_H
