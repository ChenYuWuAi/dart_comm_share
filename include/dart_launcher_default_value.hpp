/**
 * @file dart_launcher_default_value.hpp
 * @brief 飞镖架参数默认值
 */

#define defaultDartParams                        \
    {                                            \
        .primary_yaw = 40000,                    \
        .primary_yaw_offset = 0,                 \
        .primary_force = 6000000,                \
        .primary_force_offset = 0,               \
        .auxiliary_yaw_offsets = {0, 0, 0, 0},   \
        .auxiliary_force_offsets = {0, 0, 0, 0}, \
        .dart_launch_process_offset_begin = 0,   \
        .dart_launch_process_offset_end = 3,     \
        .auto_aim_enabled = false,               \
        .target_auto_aim_x_axis = 640,           \
        .last_param_update_time = 0}

#define defaultDartProtocols                     \
    {                                            \
        .primary_yaw = 40000,                    \
        .primary_yaw_offset = 0,                 \
        .primary_force = 6000000,                \
        .primary_force_offset = 0,               \
        .auxiliary_yaw_offsets = {0, 0, 0, 0},   \
        .auxiliary_force_offsets = {0, 0, 0, 0}, \
        .dart_launch_process_offset_begin = 0,   \
        .dart_launch_process_offset_end = 3,     \
        .auto_aim_enabled = false,               \
        .target_auto_aim_x_axis = 640,           \
        .last_param_update_time = 0}

#define defaultDartStatus                      \
    {                                          \
        .motor_yaw_online = false,             \
        .motor_loader_online = {false, false}, \
        .motor_trigger_online = false,         \
        .judge_online = false,                 \
        .rc_online = false,                    \
        .dart_state = 0,                       \
        .dart_launch_process = 0,              \
        .motor_yaw_angle = 0,                  \
        .motor_trigger_angle = 0,              \
        .motor_loader_current = {0, 0},        \
        .motor_loader_angle = {0, 0},          \
        .last_launch_speed = 0.0f,             \
        .last_launch_time = 0,                 \
        .dart_launch_opening_status = 0,       \
        .game_progress = 0,                    \
        .dart_remaining_time = 0,              \
        .latest_launch_cmd_time = 0,           \
        .stage_remain_time = 0,                \
        .params = defaultDartParams,           \
        .protocols = defaultDartProtocols}