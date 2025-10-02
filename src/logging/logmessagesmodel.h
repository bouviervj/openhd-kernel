#ifndef LOGMESSAGESMODEL_H
#define LOGMESSAGESMODEL_H

#include "../util/color.h"
#include <vector>

/**
 * Note: This is for the "Log" list UI element, NOT for the HUD
 * Here we can display much more log messages / do not need to worry about spamming the user.
 * @brief All OpenHD and QOpenHD Log messages are accumulated and processed here.
 * There is only one static instance of this class in the whole application, and this
 * model instance is registered in main() to be accessible by qml for display.
 * Note: This is for showing log messages in the config menu, NOT for the log messages that
 * show up in the HUD (HUD messages have their own model)
 */
class LogMessagesModel {
public:
    static LogMessagesModel& instanceGround();
    static LogMessagesModel& instanceOHDAir();
    // We have a seperate model for the FC log messages
    static LogMessagesModel& instanceFC();

    struct LogMessageData{
        std::string tag;
        std::string message;
        uint64_t timestamp=0;
        Color severity_color{0,255,0,255};
    };
    // See https://mavlink.io/en/messages/common.html#MAV_SEVERITY
    // We use error, warning, info and debug
    static constexpr auto X_MAV_SEVERITY_ERROR=3;
    static constexpr auto X_MAV_SEVERITY_WARNING=4;
    static constexpr auto X_MAV_SEVERITY_INFO=6;
    static constexpr auto X_MAV_SEVERITY_DEBUG=7;
public:
    void add_message_debug(std::string tag,std::string message);
    void add_message_warn(std::string tag,std::string message);
    enum Roles {
        TagRole = 0x100,
        MessageRole,
        TimestampRole,
        SeverityColorRole
    };
    explicit LogMessagesModel();
    //int rowCount(const QModelIndex& parent= QModelIndex()) const override;
    //QVariant data( const QModelIndex& index, int role = Qt::DisplayRole ) const override;
    //QHash<int, QByteArray> roleNames() const override;
    static Color log_severity_to_color(uint8_t severity);
    void addLogMessage(const std::string tag,std::string message,uint8_t severity=X_MAV_SEVERITY_DEBUG);
    // now this is really stupid, but aparently one cannot change the model from a non qt ui thread.
    // Therefore, every time "addLogMessage" is called we emit a signal (signalAddLogMessage) that is connected to
    // do_not_call_me_addLogMessage. This way, addData is called from the UI thread (or at least I think thats whats happening,
    // all I know is that without this workaround this fuck doesn't work (the UI doesn't change).
    void do_not_call_me_addLogMessage(std::string tag,std::string message,uint8_t severity){
        addData({tag,message,0,log_severity_to_color(severity)});
    }
public: /* slots:*/
    void removeData(int row);
    void addData(LogMessagesModel::LogMessageData logMessageData);
private:
    std::vector< LogMessageData > m_data;
    // We delete log messages older than that
    static constexpr int MAX_N_STORED_LOG_MESSAGES=30;
public:
//signals:
    void signalAddLogMessage(std::string tag,std::string message,uint8_t severity){
        
    }
};

#endif // LOGMESSAGESMODEL_H
