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
            if (j.contains("primary_yaw"))
                j.at("primary_yaw").get_to(param.primary_yaw);
            if (j.contains("primary_force"))
                j.at("primary_force").get_to(param.primary_force);
            if (j.contains("primary_force_offset"))
                j.at("primary_force_offset").get_to(param.primary_force_offset);
            if (j.contains("auxiliary_yaw_offsets"))
                j.at("auxiliary_yaw_offsets").get_to(param.auxiliary_yaw_offsets);
            if (j.contains("auxiliary_force_offsets"))
                j.at("auxiliary_force_offsets").get_to(param.auxiliary_force_offsets);
            if (j.contains("dart_launch_process_offset_begin"))
                j.at("dart_launch_process_offset_begin").get_to(param.dart_launch_process_offset_begin);
            if (j.contains("dart_launch_process_offset_end"))
                j.at("dart_launch_process_offset_end").get_to(param.dart_launch_process_offset_end);
            if (j.contains("auto_aim_enabled"))
                j.at("auto_aim_enabled").get_to(param.auto_aim_enabled);
            if (j.contains("target_auto_aim_x_axis"))
                j.at("target_auto_aim_x_axis").get_to(param.target_auto_aim_x_axis);
            if (j.contains("last_param_update_time"))
                j.at("last_param_update_time").get_to(param.last_param_update_time);
        }

        void to_json(json &j, const dart_msgs::msg::DartLauncherStatus &status)
        {
            j["header"]["frame_id"] = status.header.frame_id;
            j["header"]["stamp"] = status.header.stamp.nanosec + status.header.stamp.sec * 1000000000; // Unit: ns
            j["motor_yaw_online"] = status.motor_yaw_online;
            j["motor_loader_online"] = status.motor_loader_online;
            j["motor_trigger_online"] = status.motor_trigger_online;
            j["judge_online"] = status.judge_online;
            j["rc_online"] = status.rc_online;
            j["dart_state"] = status.dart_state;
            j["dart_launch_process"] = status.dart_launch_process;
            j["motor_yaw_angle"] = status.motor_yaw_angle;
            j["motor_trigger_angle"] = status.motor_trigger_angle;
            j["motor_loader_current"] = status.motor_loader_current;
            j["motor_loader_angle"] = status.motor_loader_angle;
            j["last_launch_speed"] = status.last_launch_speed;
            j["last_launch_time"] = status.last_launch_time;
            j["dart_launch_opening_status"] = status.dart_launch_opening_status;
            j["game_progress"] = status.game_progress;
            j["dart_remaining_time"] = status.dart_remaining_time;
            j["latest_launch_cmd_time"] = status.latest_launch_cmd_time;
            j["stage_remain_time"] = status.stage_remain_time;
            j["primary_yaw_offset"] = status.primary_yaw_offset;
            j["params"] = status.params;
            j["protocols"] = status.protocols;
        }

        void from_json(const json &j, dart_msgs::msg::DartLauncherStatus &status)
        {
            if (j.contains("header"))
            {
                auto header = j.at("header");
                status.header.frame_id = header.value("frame_id", "");
                uint64_t stamp_ns = header.value("stamp", 0);
                status.header.stamp.sec = static_cast<int32_t>(stamp_ns / 1000000000);
                status.header.stamp.nanosec = static_cast<uint32_t>(stamp_ns % 1000000000);
            }
            if (j.contains("motor_yaw_online"))
                j.at("motor_yaw_online").get_to(status.motor_yaw_online);
            if (j.contains("motor_loader_online"))
                j.at("motor_loader_online").get_to(status.motor_loader_online);
            if (j.contains("motor_trigger_online"))
                j.at("motor_trigger_online").get_to(status.motor_trigger_online);
            if (j.contains("judge_online"))
                j.at("judge_online").get_to(status.judge_online);
            if (j.contains("rc_online"))
                j.at("rc_online").get_to(status.rc_online);
            if (j.contains("dart_state"))
                j.at("dart_state").get_to(status.dart_state);
            if (j.contains("dart_launch_process"))
                j.at("dart_launch_process").get_to(status.dart_launch_process);
            if (j.contains("motor_yaw_angle"))
                j.at("motor_yaw_angle").get_to(status.motor_yaw_angle);
            if (j.contains("motor_trigger_angle"))
                j.at("motor_trigger_angle").get_to(status.motor_trigger_angle);
            if (j.contains("motor_loader_current"))
                j.at("motor_loader_current").get_to(status.motor_loader_current);
            if (j.contains("motor_loader_angle"))
                j.at("motor_loader_angle").get_to(status.motor_loader_angle);
            if (j.contains("last_launch_speed"))
                j.at("last_launch_speed").get_to(status.last_launch_speed);
            if (j.contains("last_launch_time"))
                j.at("last_launch_time").get_to(status.last_launch_time);
            if (j.contains("dart_launch_opening_status"))
                j.at("dart_launch_opening_status").get_to(status.dart_launch_opening_status);
            if (j.contains("game_progress"))
                j.at("game_progress").get_to(status.game_progress);
            if (j.contains("dart_remaining_time"))
                j.at("dart_remaining_time").get_to(status.dart_remaining_time);
            if (j.contains("latest_launch_cmd_time"))
                j.at("latest_launch_cmd_time").get_to(status.latest_launch_cmd_time);
            if (j.contains("stage_remain_time"))
                j.at("stage_remain_time").get_to(status.stage_remain_time);
            if (j.contains("primary_yaw_offset"))
                j.at("primary_yaw_offset").get_to(status.primary_yaw_offset);
            if (j.contains("params"))
                j.at("params").get_to(status.params);
            if (j.contains("protocols"))
                j.at("protocols").get_to(status.protocols);
        };
    }; // namespace dart_msgs
