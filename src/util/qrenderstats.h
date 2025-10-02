#ifndef QRENDERSTATS_H
#define QRENDERSTATS_H

#include "../common/TimeHelper.hpp"

// Stats about the QT (QOpenHD) OpenGL rendering.
// E.g frame time of the QT OpenGL rendering thread.
class QRenderStats 
{
public:
    std::string main_render_stats = "NA";
    void set_main_render_stats(std::string value) { main_render_stats = value; }
    // It can be quite nice for debugging to see what resolution QOpenHD's main window is rendered at
    // Resolution of the screen / display itself
    std::string display_width_height_str = "NA";
    void set_display_width_height_str(std::string value) { display_width_height_str = value; }
    std::string screen_width_height_str = "NA";
    void set_screen_width_height_str(std::string value) { screen_width_height_str = value; }
    // Resolution qopenhd is rendering at
    int window_width = -1;
    void set_window_width(int value) { window_width = value; }
    int window_height = -1;
    void set_window_height(int value) { window_height = value; }
    // Time QT spent "rendering", probably aka creating the GPU command buffer
    std::string qt_rendering_time = "NA";
    void set_qt_rendering_time(std::string value) { qt_rendering_time = value; }
    // Time QT spent "recording the render pass"
    std::string qt_renderpass_time = "NA";
    void set_qt_renderpass_time(std::string value) { qt_renderpass_time = value; }
private:
    explicit QRenderStats();
public:
    // Singleton for the main QML window
    static QRenderStats& instance();
    // Util to register to the root QML window
    void register_to_root_window(QQmlApplicationEngine& engine);
    // Manually regster the QML window
    void registerOnWindow(void* window);
    void set_screen_width_height(int width,int height);
    void set_display_width_height(int width,int height);
public:
    void m_QQuickWindow_beforeRendering();
    void m_QQuickWindow_afterRendering();
    void m_QQuickWindow_beforeRenderPassRecording();
    void m_QQuickWindow_afterRenderPassRecording();
private:
    // for the main render thread (render pass recording)
    std::chrono::steady_clock::time_point last_frame=std::chrono::steady_clock::now();
    AvgCalculator avgMainRenderFrameDelta{};
    // NOTE: For some reason there seems to be no difference between frame time and before / after rendering -
    // looks like there is a glFLush() or somethin in QT.
    //Chronometer m_avg_rendering_time{};
    Chronometer m_avg_renderpass_time{};

};

#endif // QRENDERSTATS_H
