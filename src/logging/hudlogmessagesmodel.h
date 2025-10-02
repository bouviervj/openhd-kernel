#ifndef HUDLOGMESSAGESMODEL_H
#define HUDLOGMESSAGESMODEL_H

#include "../timer/Timer.h"

// We need to be carefully to not spam the HUD, since it is "always on", even during flight.
// Inspired by stephens javascript code, but I don't think doing a model in javascript is the way to
// go here ;)
// (Archived links)
// https://github.com/OpenHD/QOpenHD/blob/6cbb8c1791ac0cf2748f9bea72605f71071efd60/qml/ui/widgets/MessageHUD.qml
// https://github.com/OpenHD/QOpenHD/blob/6cbb8c1791ac0cf2748f9bea72605f71071efd60/qml/ui/widgets/MessageHUDRow.ui.qml
//
// TODO
class HUDLogMessagesModel
{
public:
    explicit HUDLogMessagesModel();
    static HUDLogMessagesModel& instance();

    // add new message to be shown on the HUD
    // the message will dissappear after a specific amount of time or when a new message
    // pushes it out (more than MAX_N_ELEMENTS messages)
    void add_message(int severity,const std::string& message);
    // These are just utility for common severity levels
    void add_message_info(const std::string& message);
    void add_message_warning(const std::string& message);
private:
    struct Element{
        std::string message;
        int severity;
        std::chrono::steady_clock::time_point added_time_point=std::chrono::steady_clock::now();
    };
    enum Roles {
        MessageRole = 0x100,
        LevelRole
    };
    //int rowCount(const QModelIndex& parent= QModelIndex()) const override;
    //QVariant data( const QModelIndex& index, int role = Qt::DisplayRole ) const override;
    //QHash<int, QByteArray> roleNames() const override;
    // see logmessagesmodel to why this workaround is needed
    void do_not_call_me_addLogMessage(int severity,const std::string& message);
public:/* slots:*/
    void removeData(int row);
    void addData(HUDLogMessagesModel::Element logMessageData);
private:
    std::vector<HUDLogMessagesModel::Element> m_data;
    Timer m_cleanup_timer;
    void handle_cleanup();
    static constexpr int MAX_N_ELEMENTS=6;
public:
//signals:
    void signalAddLogMessage(int severity, const std::string& message);
};

#endif // HUDLOGMESSAGESMODEL_H
