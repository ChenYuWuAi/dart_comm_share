/**
 * @file dart_launcher_default_value.hpp
 * @brief 飞镖架参数默认值
 */

#define defaultDartParams(x)                \
    x.primary_yaw = 40000;                  \
    x.primary_force = 6000000;              \
    x.primary_force_offset = 0;             \
    x.auxiliary_yaw_offsets[0] = 0;         \
    x.auxiliary_yaw_offsets[1] = 0;         \
    x.auxiliary_yaw_offsets[2] = 0;         \
    x.auxiliary_yaw_offsets[3] = 0;         \
    x.auxiliary_force_offsets[0] = 0;       \
    x.auxiliary_force_offsets[1] = 0;       \
    x.auxiliary_force_offsets[2] = 0;       \
    x.auxiliary_force_offsets[3] = 0;       \
    x.dart_launch_process_offset_begin = 0; \
    x.dart_launch_process_offset_end = 3;   \
    x.auto_aim_enabled = false;             \
    x.target_auto_aim_x_axis = 640;         \
    x.last_param_update_time = 0;

#define defaultDartProtocols(x)             \
    x.primary_yaw = 40000;                  \
    x.primary_force = 6000000;              \
    x.primary_force_offset = 0;             \
    x.auxiliary_yaw_offsets[0] = 0;         \
    x.auxiliary_yaw_offsets[1] = 0;         \
    x.auxiliary_yaw_offsets[2] = 0;         \
    x.auxiliary_yaw_offsets[3] = 0;         \
    x.auxiliary_force_offsets[0] = 0;       \
    x.auxiliary_force_offsets[1] = 0;       \
    x.auxiliary_force_offsets[2] = 0;       \
    x.auxiliary_force_offsets[3] = 0;       \
    x.dart_launch_process_offset_begin = 0; \
    x.dart_launch_process_offset_end = 3;   \
    x.auto_aim_enabled = false;             \
    x.target_auto_aim_x_axis = 640;         \
    x.last_param_update_time = 0;

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
        .primary_yaw_offset = 0,                \
        .params = {0},                         \
        .protocols = {0}}
        