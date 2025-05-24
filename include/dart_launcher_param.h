//
// Created by cheny on 25-4-19.
//

// json <-> dart_msgs::msg::DartLauncherParams 序列化、反序列化定义

#ifndef DART_ROS2_WORKSPACE_DART_LAUNCHER_PARAM_H
#define DART_ROS2_WORKSPACE_DART_LAUNCHER_PARAM_H

#include "stdint.h"
#include "nlohmann/json.hpp"
#include "dart_msgs/msg/dart_launcher_params.hpp"
#include "dart_msgs/msg/dart_launcher_status.hpp"

namespace dart_msgs
{
    namespace msg
    {
        using json = nlohmann::json;

        // DartLauncherParams <-> json 序列化、反序列化
        void to_json(json &j, const dart_msgs::msg::DartLauncherParams &param);
        void from_json(const json &j, dart_msgs::msg::DartLauncherParams &param);

        // DartLauncherStatus <-> json 序列化、反序列化
        void to_json(json &j, const dart_msgs::msg::DartLauncherStatus &status);
        void from_json(const json &j, dart_msgs::msg::DartLauncherStatus &status);
    }
} // namespace dart_launcher_param

#endif
