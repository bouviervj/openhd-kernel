#include <iostream>
#include "fcmavlinkmissionitemsmodel.h"



FCMavlinkMissionItemsModel::FCMavlinkMissionItemsModel()
{
    //connect(this, &FCMavlinkMissionItemsModel::signal_qt_ui_update_element, this, &FCMavlinkMissionItemsModel::qt_ui_update_element);
    //connect(this, &FCMavlinkMissionItemsModel::signal_qt_ui_resize, this, &FCMavlinkMissionItemsModel::qt_ui_resize);
}

FCMavlinkMissionItemsModel& FCMavlinkMissionItemsModel::instance()
{
    static FCMavlinkMissionItemsModel instance;
    return instance;
}


void FCMavlinkMissionItemsModel::p_initialize(int total_mission_count)
{
    /*emit*/ signal_qt_ui_resize(total_mission_count);
}

void FCMavlinkMissionItemsModel::p_update(int mission_index, double lat, double lon, double alt_m)
{
    /*emit*/ signal_qt_ui_update_element(mission_index,lat,lon,alt_m,false);
}

void FCMavlinkMissionItemsModel::addData(FCMavlinkMissionItemsModel::Element data)
{
    m_data.push_back(data);
}

void FCMavlinkMissionItemsModel::updateData(int row,FCMavlinkMissionItemsModel::Element data)
{
    if (row < 0 || row >= m_data.size()){
        std::cout << "row out of bounds " << row << std::endl;
        return;
    }
    m_data[row]=data;
    /*emit*/ //dataChanged(topLeft, topLeft);
}

void FCMavlinkMissionItemsModel::qt_ui_update_element(int mission_index,double lat,double lon,double alt_m,bool currently_active)
{
    //qDebug()<<"FCMavlinkMissionItemsModel:::qt_ui_update_element:"<<mission_index;
    updateData(mission_index,FCMavlinkMissionItemsModel::Element{mission_index,lat,lon,alt_m,true,currently_active});
}

void FCMavlinkMissionItemsModel::qt_ui_resize(int total_mission_count)
{
    //qDebug()<<"FCMavlinkMissionItemsModel:::qt_ui_resize:"<<total_mission_count;
    //beginResetModel();
    m_data.resize(0);
    //endResetModel();
    for(int i=0;i<total_mission_count;i++){
        auto element=FCMavlinkMissionItemsModel::Element{i,0,0,0,false};
        addData(element);
    }
}

