#ifndef TIME_H
#define TIME_H

#include <string>
#include <chrono>

std::string millisToFormattedString(long long milliseconds);


class Time {
public:

    Time():m_h(0),m_m(0),m_s(0),m_ms(0){
    }

    Time(uint8_t h,uint8_t m,uint8_t s,uint32_t ms){
        m_h=h;
        m_m=m;
        m_s=s;
        m_ms=ms;
    }

    static long long currentTime() {
        return std::chrono::duration_cast<std::chrono::milliseconds>(
                   std::chrono::system_clock::now().time_since_epoch()
               ).count();
    }

    uint8_t hour() const { return m_h; }
    uint8_t minute() const { return m_m; }
    uint8_t second() const { return m_s; }
    uint32_t msec() const { return m_ms; }

    Time& addSecs(int seconds) {
        int total_seconds = m_h * 3600 + m_m * 60 + m_s + seconds;
        if (total_seconds < 0) total_seconds = 0; // Prevent negative time
        m_h = (total_seconds / 3600) % 24;
        m_m = (total_seconds / 60) % 60;
        m_s = total_seconds % 60;
        return *this;
    }

    Time& addMSecs(int milliseconds) {
        int total_milliseconds = m_h * 3600000 + m_m * 60000 + m_s * 1000 + m_ms + milliseconds;
        if (total_milliseconds < 0) total_milliseconds = 0; // Prevent negative time
        m_h = (total_milliseconds / 3600000) % 24;
        m_m = (total_milliseconds / 60000) % 60;
        m_s = (total_milliseconds / 1000) % 60;
        m_ms = total_milliseconds % 1000;
        return *this;
    }

    void start(){
        m_start_time_ms=currentTime();
        m_h=0;
        m_m=0;
        m_s=0;
        m_ms=0;
    }

    uint64_t elapsed(){
        const auto now=currentTime();
        const auto delta=now-m_start_time_ms;
        m_start_time_ms=now;
        addMSecs(static_cast<int>(delta));
        return delta;
    }

    std::string toString(const std::string& format) const {
        std::string result = format;
        // Replace "hh" with hours
        size_t pos = result.find("hh");
        if (pos != std::string::npos) {
            result.replace(pos, 2, (m_h < 10 ? "0" : "") + std::to_string(m_h));
        }
        // Replace "mm" with minutes
        pos = result.find("mm");
        if (pos != std::string::npos) {
            result.replace(pos, 2, (m_m < 10 ? "0" : "") + std::to_string(m_m));
        }
        // Replace "ss" with seconds
        pos = result.find("ss");
        if (pos != std::string::npos) {
            result.replace(pos, 2, (m_s < 10 ? "0" : "") + std::to_string(m_s));
        }
        // Replace "zzz" with milliseconds
        pos = result.find("zzz");
        if (pos != std::string::npos) {
            result.replace(pos, 3, (m_ms < 100 ? (m_ms < 10 ? "00" : "0") : "") + std::to_string(m_ms));
        }
        return result;
    }

private:
    uint8_t m_h;
    uint8_t m_m;
    uint8_t m_s;
    uint32_t m_ms;

    uint64_t m_start_time_ms=0;
};

#endif // TIME_H