#ifndef QOPENHD_H
#define QOPENHD_H

#ifdef ENABLE_SPEECH
#include <QTextToSpeech>
#endif

#include <vector>
#include <string>
#include <deque>

/**
 * Dirty, but for some reason stephen made translation(s) and a bit more work this way.
 * This singleton is for handling Appplication (QOpenHD, NOT OpenHD) - specific things that
 * need the QT Engine or some other quirks.
 */
class QOpenHD
{
public:
    explicit QOpenHD();
    static QOpenHD& instance();
     void switchToLanguage(const std::string &language);
    
    //void setEngine(QQmlApplicationEngine *engine);
    
    //Q_PROPERTY(std::string fontFamily MEMBER m_fontFamily WRITE setFontFamily NOTIFY fontFamilyChanged)
    void setFontFamily(std::string fontFamily);
    void textToSpeech_sayMessage(std::string message);

    // This only terminates the App, on most OpenHD images the system service will then restart
    // QOpenHD. Can be usefully for debugging, if something's wrong with the app and you need to restart it
     void quit_qopenhd();
    // This not only quits qopenhd, but also disables the autostart service
    // (until next reboot)
     void disable_service_and_quit();
    // Develoment only
     void restart_local_oenhd_service();
     void run_dhclient_eth0();
    // Save/Backup QOpenHD local settings to a file, such that they can be reused after a reflash
    // The backup file is stored in /boot/openhd/QOpenHD.conf
    // returns true on success, false otherwise
     bool backup_settings_locally();
    // Overwrite the local QOpenHD settings with a previous packed up settings file
    // returns true on success, false otherwise
    // To apply, QOpenHD needs to be restarted
     bool overwrite_settings_from_backup_file();
    // Deletes the local QOpenHD.conf file, such that QOpenHD re-creates all settings after a restart
     bool reset_settings();
    // only works on linux, dirty helper to get local IP address
     std::string show_local_ip();
     std::string write_local_log();
    // returns true if the platform qopenhd is running on is linux (embedded or x86)
    // some settings an stuff depend on that, called from .qml
    // NOTE: android is not linux in this definition !
     bool is_linux();
     bool is_mac();
     bool is_android();
     bool is_windows();
     void android_open_tethering_settings();
    // runs systemctl start/stop/enable/disable openhd
    // opens error message if the openhd service file does not exist (e.g. false on all non linux platforms)
     void sysctl_openhd(int task);

     bool is_valid_ip(std::string ip);
     bool is_platform_rpi();
     bool is_platform_rock();
    //
    // Tries to mimic android toast as much as possible
    //
    void show_toast(std::string message,bool long_toast=false);
    std::string m_version_string = "2.6.4-evo";
    void set_version_string(std::string value) { m_version_string = value; }
    //
    // Shows a message popup to the user that needs to be clicked away - use sparingly
    //
    void show_error_message(std::string message);
    std::string error_message_text = "";
    void set_error_message_text(std::string value) { error_message_text = value; }
    // Notify that something is going on for a specified amount of time
public:
     void set_busy_for_milliseconds(int milliseconds,std::string reason);
    bool m_is_busy = false;
    void set_is_busy(bool value) { m_is_busy = value; }
    std::string m_busy_reason = "";
    void set_busy_reason(const std::string& value) { m_busy_reason = value; }
public:
    std::string m_toast_text = "NONE";
    void set_toast_text(const std::string& value) { m_toast_text = value; }
    bool m_toast_visible = false;
    void set_toast_visible(bool value) { m_toast_visible = value; }
public:
//signals:
    void fontFamilyChanged(std::string fontFamily);
private:
  //   QQmlApplicationEngine *m_engine = nullptr;
  //   QTranslator m_translator;
    std::string m_fontFamily;
  //   QFont m_font;
#if defined(ENABLE_SPEECH)
    QTextToSpeech *m_speech;
#endif
public:
    // We always want the screen to be kept "On" while QOpenHD is running -
    // but how to do that depends highly on the platform
     void keep_screen_on(bool on);
private:
    struct ToastMessage{
        std::string text;
        bool long_toast;
    };
    std::deque<ToastMessage> m_toast_message_queue;
    void handle_toast_timeout();
    void handle_busy_timeout();
public:
//signals:
    void signal_toast_add(std::string text,bool long_toast);
private:
    void do_not_call_toast_add(std::string text,bool long_toast);
    void show_toast_and_add_remove_timer(std::string text,bool long_toast);
};

#endif // QOPENHD_H
