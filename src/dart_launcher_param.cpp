//
// 序列化和反序列化飞镖架参数
// Created by cheny on 25-4-25.
//
#include "dart_comm_share/include/dart_launcher_param.h"

using json = nlohmann::json;

namespace dart_msgs
{
    namespace msg
    {
        void to_json(json &j, const dart_msgs::msg::DartLauncherParams &param)
        {
            j["primary_yaw"] = param.primary_yaw;
            j["primary_force"] = param.primary_force;
            j["primary_force_offset"] = param.primary_force_offset;
            j["auxiliary_yaw_offsets"] = param.auxiliary_yaw_offsets;
            j["auxiliary_force_offsets"] = param.auxiliary_force_offsets;
            j["dart_launch_process_offset_begin"] = param.dart_launch_process_offset_begin;
            j["dart_launch_process_offset_end"] = param.dart_launch_process_offset_end;
            j["auto_aim_enabled"] = param.auto_aim_enabled;
            j["target_auto_aim_x_axis"] = param.target_auto_aim_x_axis;
            j["last_param_update_time"] = param.last_param_update_time;
        }

        void from_json(const json &j, dart_msgs::msg::DartLauncherParams &param)
        {
            j.at("primary_yaw").get_to(param.primary_yaw);
            j.at("primary_force").get_to(param.primary_force);
            j.at("primary_force_offset").get_to(param.primary_force_offset);
            j.at("auxiliary_yaw_offsets").get_to(param.auxiliary_yaw_offsets);
            j.at("auxiliary_force_offsets").get_to(param.auxiliary_force_offsets);
            j.at("dart_launch_process_offset_begin").get_to(param.dart_launch_process_offset_begin);
            j.at("dart_launch_process_offset_end").get_to(param.dart_launch_process_offset_end);
            j.at("auto_aim_enabled").get_to(param.auto_aim_enabled);
            j.at("target_auto_aim_x_axis").get_to(param.target_auto_aim_x_axis);
            j.at("last_param_update_time").get_to(param.last_param_update_time);
        }
    };
}; // namespace dart_msgs
