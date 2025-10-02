#ifndef MavlinkSettingsModel_H
#define MavlinkSettingsModel_H

#include <map>
#include <optional>
#include <thread>
#include <mutex>
#include <variant>
#include <vector>
#include <atomic>

#include "../tutil/mavlink_include.h"
#include "../action/impl/xparam.h"

// A QT wrapper around the mavlink extended / non-extended parameters protocoll on the client
// (the side that changes parameter(s) provided by a specific system & component).
// For each of these components, you can use an instance of this class - see the singletons below for
// current OpenHD mavlink settings components.
// NOTE: R.n the enum / parameter validation needs to be duplicated in both OpenHD and QOpenHD.
// Eventually we'l migrate to the proper way, which is fetching something like this:
// https://github.com/mavlink/mavlink/blob/master/component_metadata/parameter.schema.json
// https://mavlink.io/en/services/parameter.html
class MavlinkSettingsModel
{
public:
    // R.N we have one or two instances for the camera(s) (system air only and comp_id==camera0)
    // and one instance each for air and ground that does the rest (mostly interface)
    static MavlinkSettingsModel& instanceAirCamera();
    static MavlinkSettingsModel& instanceAirCamera2();
    // general, air (mostly link)
    static MavlinkSettingsModel& instanceAir();
    // general, ground (mostly link)
    static MavlinkSettingsModel& instanceGround();
    // TODO theoretically, we could allow the user to change parameters on the FC itself
    // (aka what for example mission planner would show)
    //static MavlinkSettingsModel& instanceFC();
    explicit MavlinkSettingsModel(uint8_t sys_id,uint8_t comp_id);
    //
    static bool is_air_or_cam_param_busy();
public:
    int curr_get_all_progress_perc = -1;
    void set_curr_get_all_progress_perc(int value) { curr_get_all_progress_perc = value; }
    // NOTE: This is only for the UI, not for c++ usage (non-atomic)
    bool ui_is_busy = false;
    void set_ui_is_busy(bool value) { ui_is_busy = value; }
    bool has_params_fetched = false;
    void set_has_params_fetched(bool value) { has_params_fetched = value; }
    int update_count = 0;
    void set_update_count(int value) { update_count = value; }
    std::string last_updated_param_id = "";
    void set_last_updated_param_id(std::string value) { last_updated_param_id = value; }
    bool last_updated_param_success = false;
    void set_last_updated_param_success(bool value) { last_updated_param_success = value; }
public:
    void set_ready();
    bool is_x_busy();
public:
    // callable from QT.
    // async with progress bar and result being prompted to the user
    // re-fetches the complete param set - any changed values, types, ... are catched from it
     void try_refetch_all_parameters_async(bool log_result=true);

    // first updates the parameter on the server via XParam (unless server rejects / rare timeout)
    // then updates the internal cached parameter
    // return is kinda dirty, but since we use it from QML - returns an empty string "" on success, an error code otherwise
     std::string try_update_parameter_int(const std::string param_id,int value);
     std::string try_update_parameter_string(const std::string param_id,std::string value);

    enum Roles {
        // The unique string id of this param
        UniqueIdRole = 0,
        // The value of this param, can be int or std::string (returns qint or std::string)
        ValueRole,
        // if possible, convert the internal value (e.g. a integer that responds to an enum) to a more readable
        // value, e.g. the string for this enum.
        // In case the param is an int and we don't have enum mapping -> return the int as an string
        // In case the param is an int and we do have enum mapping -> convert the int to the enum string, then return
        // In case the param is an string, just return the string
        ExtraValueRole,
        // The internally stored type. 0==int, 1==std::string
        ValueTypeRole,
        // A description for this parameter. Not all parameters are documented yet, in this case this will return "TODO"
        ShortDescriptionRole,
        // Weather this parameter is read-only (we repurpose the malink parameter protocoll in this regard here)
        // Default false, only if a parameter is in the read-only whitelist it is marked as read-only
        ReadOnlyRole,
        // Weather this parameter is whitelisted
        WhitelistedRole
    };
    //int rowCount(const QModelIndex& parent= QModelIndex()) const override;
    //QVariant data( const QModelIndex& index, int role = Qt::DisplayRole ) const override;
    //QHash<int, QByteArray> roleNames() const override;
    struct SettingData{
        // The unique parameter identifier
        std::string unique_id;
        // We support int and string values - NOTHING ELSE ! Please keep it this way, there are reasons for it.
        // On a side node, PX4 / ardupilot do it the same !
        std::variant<int32_t,std::string> value;
    };
public:
    void removeData(int row);
    void updateData(std::optional<int> row,MavlinkSettingsModel::SettingData new_data);
    void addData(MavlinkSettingsModel::SettingData data);
private:
    std::vector<MavlinkSettingsModel::SettingData> m_data;
    const uint8_t m_sys_id;
    const uint8_t m_comp_id;
    bool is_param_whitelisted(const std::string param_id)const;
    enum class SetParamResult{
        BUSY, // Too many params queued up
        NO_CONNECTION, // Most likely all retransmitts failed, cannot be completely avoided
        VALUE_UNSUPPORTED, // (openhd) rejected the param value, it is not valid / not supported by the HW
        SUCCESS, //Param was successfully updated
    };
    static std::string set_param_result_as_string(const SetParamResult& res);
    SetParamResult try_set_param_int_impl(const std::string param_id,int value);
    SetParamResult try_set_param_string_impl(const std::string param_id,std::string value);
public:
     void try_set_param_int_async(const std::string param_id,int value,bool log_result=false);
     void try_set_param_string_async(const std::string param_id,std::string value,bool log_result=false);
     bool system_is_alive();
public:
    struct ParamIntEnum{
        bool valid;
        std::vector<std::string> keys;
        std::vector<int>  values;
    };
    struct ParamStringEnum{
        bool valid;
        std::vector<std::string> keys;
        std::vector<std::string> values;
    };
public:
    // These are for the UI to query more data about a specific params
     std::string int_enum_get_readable(std::string param_id,int value)const;
     std::string string_enum_get_readable(std::string param_id,std::string value)const;
    // if possible, the UI should populate for a full enum key-value int parameter if possible,
    // and only fall back to the min max checking if such a mapping is not available.
     bool int_param_has_min_max(std::string param_id)const;
     int int_param_get_min_value(std::string param_id)const;
     int int_param_get_max_value(std::string param_id)const;
    // enum key - value mapping
     bool int_param_has_enum_keys_values(std::string param_id)const;
    // TODO find a better solution
    // R.n we return 2 lists of the same size (strings for the keys, ints for the values that correspond to the keys)
    //aka both lists always have the same size
    // Should only be called when we actually have an enum mapping for this param
     std::vector<std::string> int_param_get_enum_keys(std::string param_id)const;
     std::vector<int> int_param_get_enum_values(std::string param_id)const;
     ParamIntEnum int_param_get_enum(std::string param_id)const;

    // similar to above, find a better solution
     bool string_param_has_enum(std::string param_id)const;
     std::vector<std::string> string_param_get_enum_keys(std::string param_id)const;
     std::vector<std::string> string_param_get_enum_values(std::string param_id)const;
     ParamStringEnum string_param_get_enum(std::string param_id)const;

    // For some parameters, we have a string that is displayed to the user when he wants to edit this param
    // just too be sure he understands the risks
    // When there is no need for a warning, this method just returns an empty string
     std::string get_warning_before_safe(std::string param_id);

     bool get_param_requires_manual_reboot(std::string param_id);
public:
    // Returns true if the given (int,string) param exists
     bool param_int_exists(std::string param_id);
     bool param_string_exists(std::string param_id);
     int get_cached_int(std::string param_id);
     std::string get_cached_string(std::string param_id);
private:;
    void remove_and_replace_param_set(const std::vector<mavlink_param_ext_value_t>& param_set);
public:
    struct QtParamValue{
        std::string param_id;
        std::variant<int, float, std::string, bool>  param_value;
        int type;
    };
    struct QtParamSet{
        std::vector<QtParamValue> param_set;
    };
    //void ui_thread_replace_param_set(QVector<QtParamValue> param_set);
    void ui_thread_replace_param_set(QtParamSet param_set);
//signals:
    void signal_ui_thread_replace_param_set(QtParamSet param_set){
        ui_thread_replace_param_set(param_set);
    }
private:
    std::atomic<bool> m_is_ready=false;
    std::atomic_bool m_is_currently_busy=false;
private:
    void finalize_update_param(std::string param_id,std::variant<int32_t,std::string> value, bool success,bool log_result);
    void perform_dirty_actions(const MavlinkSettingsModel::SettingData& data);
private:
    int m_update_count = 0;
};

//Q_DECLARE_METATYPE(MavlinkSettingsModel::ParamIntEnum);
//Q_DECLARE_METATYPE(MavlinkSettingsModel::ParamStringEnum);
//Q_DECLARE_METATYPE(MavlinkSettingsModel::QtParamValue);
//Q_DECLARE_METATYPE(MavlinkSettingsModel::QtParamSet);

#endif // MavlinkSettingsModel_H
