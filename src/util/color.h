#ifndef COLOR_H
#define COLOR_H

#include <cstdint>
#include <string>

struct Color {
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;

    Color() : r(0), g(0), b(0), a(255) {}
    Color(const std::string& hex){
        if(hex.size() == 7 && hex[0] == '#') {
            r = static_cast<uint8_t>(std::stoi(hex.substr(1, 2), nullptr, 16));
            g = static_cast<uint8_t>(std::stoi(hex.substr(3, 2), nullptr, 16));
            b = static_cast<uint8_t>(std::stoi(hex.substr(5, 2), nullptr, 16));
            a = 255;
        } else {
            r = g = b = 0;
            a = 255;
        }
    }
    Color(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha = 255)
        : r(red), g(green), b(blue), a(alpha) {}
};

#endif // COLOR_H