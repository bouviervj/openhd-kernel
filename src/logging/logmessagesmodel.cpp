#include "logmessagesmodel.h"
#include <cstdlib>

#include "hudlogmessagesmodel.h"
#include "../util/color.h"


LogMessagesModel &LogMessagesModel::instanceGround()
{
    static LogMessagesModel instance;
    return instance;
}

LogMessagesModel &LogMessagesModel::instanceOHDAir()
{
    static LogMessagesModel instance;
    return instance;
}

LogMessagesModel &LogMessagesModel::instanceFC()
{
    static LogMessagesModel instance;
    return instance;
}

LogMessagesModel::LogMessagesModel()
{
    /*addData(LogMessageData{"tag1", "blablabla"});
    addData(LogMessageData{"tag2", "xxxxxxx"});
    addData(LogMessageData{"tag3", "yyyyyyy"});
    addData(LogMessageData{"tag4", "yyyyyyy"});
    addData(LogMessageData{"tag5", "yyyyyyy"});
    addData(LogMessageData{"tag6", "yyyyyyy"});*/
   // connect(this, &LogMessagesModel::signalAddLogMessage, this, &LogMessagesModel::do_not_call_me_addLogMessage);
}

void LogMessagesModel::addLogMessage(const std::string tag, std::string message,uint8_t severity){
    //qDebug()<<"Add log message:"<<tag<<message;
    // See .h documentation, here we have to emit a signal instead of modifying the model directly.
    /*emit*/ signalAddLogMessage(tag,message,severity);
}

void LogMessagesModel::add_message_debug(std::string tag, std::string message)
{
    addLogMessage(tag,message,X_MAV_SEVERITY_DEBUG);
}

void LogMessagesModel::add_message_warn(std::string tag, std::string message)
{
    addLogMessage(tag,message,X_MAV_SEVERITY_WARNING);
}

/*
int LogMessagesModel::rowCount( const QModelIndex& parent) const
{
    if (parent.isValid())
        return 0;

    return m_data.count();
}

QVariant LogMessagesModel::data(const QModelIndex &index, int role) const
{
    if ( !index.isValid() )
        return QVariant();

    const LogMessageData &data = m_data.at(index.row());
    if ( role == TagRole ){
        return data.tag;
    }
    else if ( role == MessageRole )
        return data.message;
    else if ( role == TimestampRole )
        return data.timestamp;
    else if ( role == SeverityColorRole)
        return data.severity_color;
    else
        return QVariant();
}

QHash<int, QByteArray> LogMessagesModel::roleNames() const
{
    static QHash<int, QByteArray> mapping {
        {TagRole, "tag"},
        {MessageRole, "message"},
        {TimestampRole, "timestamp"},
        {SeverityColorRole,"severity_color"}
    };
    return mapping;
}
*/

Color LogMessagesModel::log_severity_to_color(uint8_t severity){
    if(severity<=X_MAV_SEVERITY_ERROR){
        return Color{255,0,0,255};//red
    }
    if(severity<=X_MAV_SEVERITY_WARNING){
        return Color{255, 165, 0,255};//orange
    }
    return Color{0,255,0,255};//green
}


void LogMessagesModel::removeData(int row)
{
    if (row < 0 || row >= m_data.size())
        return;

    //beginRemoveRows(QModelIndex(), row, row);
    m_data.erase(m_data.begin()+row);
    //endRemoveRows();
}

void LogMessagesModel::addData(LogMessageData logMessageData)
{
    /*
    // A few important log(s) we show in the HUD // weak implementation
    if(logMessageData.message.contains("TX (likely) not supported by card(s)")){
        //HUDLogMessagesModel::instance().add_message_warning(logMessageData.message);
    }else if(logMessageData.message.contains("Bind phrase mismatch")){
        HUDLogMessagesModel::instance().add_message_warning(logMessageData.message);
    }else if(logMessageData.message.contains("error - unsupported resolution ?")){
        HUDLogMessagesModel::instance().add_message_warning(logMessageData.message);
    }
    */
    //qDebug()<<"LogMessagesModel::addData"<<logMessageData.message;
    // We limit logging to X log messages here
    if(m_data.size()>=MAX_N_STORED_LOG_MESSAGES){
        // remove oldest one
        removeData(0);
    }
    //beginInsertRows(QModelIndex(), rowCount(), rowCount());
    m_data.push_back(logMessageData);
    //endInsertRows();
}

