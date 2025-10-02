#include "qopenhd.h"

#include<iostream>
#include <sys/stat.h>
#include<fstream>
#include<string>
#include <cassert>
#include "../settings/Settings.h"
#include "../timer/Timer.h"

#if defined(__linux__) || defined(__macos__)
#include "../common/openhd-util.hpp"
#endif

#if defined(ENABLE_SPEECH)
#endif

#if defined(__android__)
#endif

//#include "mousehelper.h"

QOpenHD &QOpenHD::instance()
{
    static QOpenHD instance=QOpenHD();
    return instance;
}

QOpenHD::QOpenHD()
{
    //connect(this, &QOpenHD::signal_toast_add, this, &QOpenHD::do_not_call_toast_add);

#if defined(ENABLE_SPEECH)
    m_speech = new QTextToSpeech(this);
    std::stringList engines = QTextToSpeech::availableEngines();
    std::cout << "Available SPEECH engines:" << std::endl;
    for (auto& engine : engines) {
    std::cout << "  " << engine << std::endl;
    }
    // List the available locales.
//    qDebug() << "Available locales:";
    for (auto& locale : m_speech->availableLocales()) {
//        qDebug() << "  " << locale;
    }
    // Set locale.
    m_speech->setLocale(QLocale(QLocale::English, QLocale::LatinScript, QLocale::UnitedStates));
    // List the available voices.
//    qDebug() << "Available voices:";
    for (auto& voice : m_speech->availableVoices()) {
//        qDebug() << "  " << voice.name();
    }
    // Display properties.
    std::cout << "Locale: " << m_speech->locale() << std::endl;
    std::cout << "Pitch: " << m_speech->pitch() << std::endl;
    std::cout << "Rate: " << m_speech->rate() << std::endl;
    std::cout << "Voice: " << m_speech->voice().name().toStdString() << std::endl;
    std::cout << "Volume: " << m_speech->volume() << std::endl;
    std::cout << "State: " << m_speech->state() << std::endl;
#endif
}


/*
void QOpenHD::setEngine(QQmlApplicationEngine *engine) {
    m_engine = engine;
}
*/

void QOpenHD::switchToLanguage(const std::string &language) {
    
    // UI related code - not needed in console app
    /*
    if(m_engine==nullptr){
        std::cout << "Error switch language- engine not set" << std::endl;
        return;
    }
    QLocale::setDefault(QLocale(language));

    if (!m_translator.isEmpty()) {
        QCoreApplication::removeTranslator(&m_translator);
    }

    bool success = m_translator.load(":/translations/QOpenHD.qm");
    if (!success) {
    std::cout << "Translation load failed" << std::endl;
        return;
    }
    QCoreApplication::installTranslator(&m_translator);
    m_engine->retranslate();
    */

}

void QOpenHD::setFontFamily(std::string fontFamily) {
    m_fontFamily = fontFamily;
    /*emit*/ fontFamilyChanged(m_fontFamily);
    //m_font = QFont(m_fontFamily, 11, QFont::Bold, false);

}

void QOpenHD::fontFamilyChanged(std::string fontFamily){
    // Ok super signal
}

void QOpenHD::textToSpeech_sayMessage(std::string message)
{
#if defined(ENABLE_SPEECH)  
    QSettings settings;
    if (settings.value("enable_speech", false).toBool() == true){
        //m_speech->setVolume(m_volume/100.0);
    std::cout << "QOpenHD::textToSpeech_sayMessage say: " << message << std::endl;
        m_speech->say(message);
    }else{
    std::cout << "TextToSpeech disabled, msg: " << message << std::endl;
    }
#else
    std::cout << "TextToSpeech not available, msg: " << message << std::endl;
#endif
}

void QOpenHD::quit_qopenhd()
{
    std::cout << "quit_qopenhd() begin" << std::endl;
    //QApplication::quit();
    std::cout << "quit_qopenhd() end" << std::endl;
}

void QOpenHD::disable_service_and_quit()
{
#ifdef __linux__
    OHDUtil::run_command("sudo systemctl stop qopenhd",{""},true);
#endif
    quit_qopenhd();
}

void QOpenHD::restart_local_oenhd_service()
{
#ifdef __linux__

    OHDUtil::run_command("sudo systemctl stop openhd",{""},true);
    OHDUtil::run_command("sudo systemctl start openhd",{""},true);
#endif
}

void QOpenHD::run_dhclient_eth0()
{
#ifdef __linux__
    OHDUtil::run_command("sudo dhclient eth0",{""},true);
#endif
}

bool QOpenHD::backup_settings_locally()
{
#ifdef __linux__
    Settings settings;
    return true;
#endif
    return false;
}

bool QOpenHD::overwrite_settings_from_backup_file()
{
#ifdef __linux__
    Settings settings;
    const std::string src_file_name="/boot/openhd/QOpenHD.conf";
    std::ifstream src(src_file_name, std::ios::binary);
    if (!src) {
    std::cout << "Error: Failed to open source file " << src_file_name << std::endl;
        return false;
    }
    if(src.peek() == std::ifstream::traits_type::eof()){
    std::cout << "Error: Source file is empty" << std::endl;
        src.close();
        return false;
    }
    const std::string dst_file_name = settings.fileName();
    std::ofstream dst(dst_file_name, std::ios::binary);
    if (!dst) {
    std::cout << "Error: Failed to open destination file " << dst_file_name << std::endl;
        src.close();
        return false;
    }
    dst << src.rdbuf();
    src.close();
    dst.close();
    return true;
#endif
    return false;
}

bool QOpenHD::reset_settings()
{
/*#ifdef __linux__
    QSettings settings;
    std::string file_name = settings.fileName().toStdString();
    int result = remove(file_name.c_str());
    if (result == 0) {
    std::cout << "File " << file_name << " deleted successfully" << std::endl;
        return true;
    }
    std::cout << "Error: Failed to delete file " << file_name << std::endl;
    return false;
#endif
    return false;*/
    Settings settings;
    settings.clear();
    return true;
}


std::string QOpenHD::show_local_ip()
{
#ifdef __linux__
    auto res=OHDUtil::run_command_out("hostname -I");
    return std::string(res->c_str());
#elif defined(__macos__)
    auto res=OHDUtil::run_command_out("ifconfig -l | xargs -n1 ipconfig getifaddr");
    return std::string(res->c_str());
#else
    return std::string("Only works on linux");
#endif
}

std::string QOpenHD::write_local_log()
{
#ifdef __linux__
    auto res=OHDUtil::run_command_out("journalctl > /boot/openhd/openhd.log");
    return std::string("Groundstation Log written !");
#else
    return std::string("Only works on linux");
#endif

}

bool QOpenHD::is_linux()
{
// weird - linux might be defined on android ?!
#if defined(__android__)
    //std::cout << "Is android" << std::endl;
    return false;
#elif defined(__linux__)
    //std::cout << "Is linux" << std::endl;
    return true;
#endif
    return false;
}

bool QOpenHD::is_mac()
{
#if defined(__macos__)
    return true;
#else
    return false;
#endif
}

bool QOpenHD::is_android()
{
#if defined(__android__)
    return true;
#else
    return false;
    //return true;
#endif
}

bool QOpenHD::is_windows()
{
#ifdef __windows__
    return true;
#else
    return false;
#endif
}

void QOpenHD::android_open_tethering_settings()
{
#ifdef __android__
    std::cout << "android_open_tethering_settings()" << std::endl;
    QAndroidJniObject::callStaticMethod<void>("org/openhd/IsConnected",
                                              "makeAlertDialogOpenTetherSettings2",
                                              "()V");
#endif
}

void QOpenHD::sysctl_openhd(int task)
{
#ifdef __linux__
    if(task==0){
       OHDUtil::run_command("systemctl start openhd",{""},true);
    }else if(task==1){
       OHDUtil::run_command("systemctl stop openhd",{""},true);
    }else if(task==2){
       OHDUtil::run_command("systemctl enable openhd",{""},true);
    }else if(task==3){
       OHDUtil::run_command("systemctl disable openhd",{""},true);
    }else{
    std::cout << "Unknown task" << std::endl;
    }
    return;
#endif
    // not supported
}

bool QOpenHD::is_valid_ip(std::string ip)
{
   unsigned char a,b,c,d;
   return sscanf(ip.c_str(),"%d.%d.%d.%d", &a, &b, &c, &d) == 4;
}

bool QOpenHD::is_platform_rpi()
{
#ifdef IS_PLATFORM_RPI
    return true;
#else
    return false;
#endif
}

bool QOpenHD::is_platform_rock()
{
#ifdef IS_PLATFORM_ROCK
    return true;
#else
    return false;
#endif
}

void QOpenHD::keep_screen_on(bool on)
{
#if defined(__android__)
    QtAndroid::runOnAndroidThread([on] {
        QAndroidJniObject activity = QtAndroid::androidActivity();
        if (activity.isValid()) {
            QAndroidJniObject window = activity.callObjectMethod("getWindow", "()Landroid/view/Window;");

            if (window.isValid()) {
                const int FLAG_KEEP_SCREEN_ON = 128;
                if (on) {
                    window.callMethod<void>("addFlags", "(I)V", FLAG_KEEP_SCREEN_ON);
                } else {
                    window.callMethod<void>("clearFlags", "(I)V", FLAG_KEEP_SCREEN_ON);
                }
            }
        }
        QAndroidJniEnvironment env;
        if (env->ExceptionCheck()) {
            env->ExceptionClear();
        }
    });
  // Not needed on any other platform so far
#endif //defined(__android__)
}

void QOpenHD::show_toast(std::string message,bool long_toast)
{
    /*emit*/ signal_toast_add(message,long_toast);
}

void QOpenHD::show_error_message(std::string message)
{

}

void QOpenHD::set_busy_for_milliseconds(int milliseconds,std::string reason)
{
    set_is_busy(true);
    set_busy_reason(reason);
    const int timeout_ms = milliseconds;
    assert(0);
    std::function<void()> handle_busy_callback  = std::bind(&QOpenHD::handle_busy_timeout, this);
    Timer::singleShot(timeout_ms, handle_busy_callback);
}


void QOpenHD::handle_toast_timeout()
{
    if(m_toast_message_queue.empty()){
       set_toast_text("I SHOULD NEVER APPEAR");
       set_toast_visible(false);
    }else{
       auto front=m_toast_message_queue.front();
       m_toast_message_queue.pop_front();
       show_toast_and_add_remove_timer(front.text,front.long_toast);
    }
}

void QOpenHD::handle_busy_timeout()
{
    set_is_busy(false);
    set_busy_reason("");
}

void QOpenHD::signal_toast_add(std::string text,bool long_toast){
    QOpenHD::instance().do_not_call_toast_add(text,long_toast);
}

void QOpenHD::do_not_call_toast_add(std::string text,bool long_toast)
{
    std::cout << "do_not_call_toast_add " << text << std::endl;
    if(m_toast_message_queue.empty() && !m_toast_visible){
       show_toast_and_add_remove_timer(text,long_toast);
    }else{
       m_toast_message_queue.push_back(ToastMessage{text,long_toast});
    }
}

void QOpenHD::show_toast_and_add_remove_timer(std::string text,bool long_toast)
{
    set_toast_text(text);
    set_toast_visible(true);
    // Android uses:
    // https://stackoverflow.com/questions/7965135/what-is-the-duration-of-a-toast-length-long-and-length-short
    // 2 / 3.5 seconds respective
    //const int timeout_ms = long_toast ? 8*1000 : 3*1000;
    const int timeout_ms = long_toast ? 3500 : 2000;
    std::function<void()> toast_timeout_callback = std::bind(&QOpenHD::handle_toast_timeout, this);
    // TODO check for context isolation/thread safety
    Timer::singleShot(timeout_ms, toast_timeout_callback);
}
