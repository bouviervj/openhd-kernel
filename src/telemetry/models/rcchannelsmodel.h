#ifndef RCCHANNELSMODEL_H
#define RCCHANNELSMODEL_H

#include <array>
#include <memory>
#include <mutex>
#include "../../timer/Timer.h"

// Don't get confused - we have 2 instances of this model:
// instanceGround()-> The OpenHD ground instance for now broadcasts the rc channel value(s) to QOpenHD for display / debugging.
// Aka these are the same channels that are sent to the FC as MAVLINK_MSG_ID_RC_CHANNELS_OVERRIDE
// instanceFC() -> Some FCs (for example ARDUPILOT) broadcast the current rc channel values. Aka this could be what's set via MAVLINK_MSG_ID_RC_CHANNELS_OVERRIDE  but
// otherwise is most likely what the FC gets from an RC receiver connected via serial for example.
// Both are valuable information for debugging
class RCChannelsModel 
{
 public :
    explicit RCChannelsModel();
    static RCChannelsModel& instanceGround();
    static RCChannelsModel& instanceFC();
    // Considered alive if we got an update in the last X seconds
    bool is_alive = false;
    void set_is_alive(bool value) { is_alive = value; }
    // This is extra for the "controls" widget
    // Assumes AETR
    double control_yaw = -1;
    void set_control_yaw(double value) { control_yaw = value; }
    double control_roll = -1;
    void set_control_roll(double value) { control_roll = value; }
    double control_pitch = -1;
    void set_control_pitch(double value) { control_pitch = value; }
    double control_throttle = -1;
    void set_control_throttle(double value) { control_throttle = value; }
public:
    enum Roles {
        // The current value for this channel
        CurrValueRole = 0x0100,
    };
    /*
    int rowCount(const QModelIndex& parent= QModelIndex()) const override;
    QVariant data( const QModelIndex& index, int role = Qt::DisplayRole ) const override;
    QHash<int, QByteArray> roleNames() const override;
    */
    using RC_CHANNELS=std::array<int,18>;
    void update_all_channels(const RC_CHANNELS& channels);
    // Sets the first channel to 1000 and adds 20 to all the remaining channels (ascending)
    void set_channels_debug();
public:/* slots:*/
    void updateData(int index,int value);
 private:
   std::vector<int> m_data{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
private:
   // We need thread saftey on the alive
   std::atomic<int64_t> m_last_update_ms = -1;
   std::unique_ptr<Timer> m_alive_timer;
   void update_alive();
};

#endif // RCCHANNELSMODEL_H
