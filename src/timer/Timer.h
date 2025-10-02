#ifndef TIMER_H
#define TIMER_H

#include <thread>
#include <chrono>
#include <functional>
#include <atomic>

// Not needed if you take couts out of Periodic class.
#include <iostream>

class Timer {
public:
    explicit Timer() : m_inFlight(true)
    {
        std::cout << "Constructing timer" << std::endl;
    }

    ~Timer() {
        std::cout << "Destructed timer" << std::endl;
        m_inFlight.store(false);
    }

    void setFunc(const std::function<void ()> &func){
        m_func = func;
    }

    void start(const size_t &interval){
        std::cout << "Starting timer threads" << std::endl;
        auto chronos_interval = std::chrono::milliseconds(interval);
        m_thread = std::thread([this, chronos_interval] {
            while (m_inFlight) {
                std::this_thread::sleep_for(chronos_interval);
                if (m_inFlight) {
                    m_func();
                }
            }
        });
    }

    void stop(){
        std::cout << "Timer stop called." << std::endl;
        m_inFlight.store(false);
        m_thread.join();
    }

    static void singleShot(size_t timeout_ms, const std::function<void ()> &func){
        std::thread([timeout_ms, func] {
            std::this_thread::sleep_for(std::chrono::milliseconds(timeout_ms));
            func();
        }).detach();
    }

private:
    std::function<void ()> m_func;
    std::atomic<bool> m_inFlight;
    std::thread m_thread;
};

#endif // TIMER_H