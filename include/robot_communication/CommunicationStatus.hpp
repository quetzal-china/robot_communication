#ifndef COMMUNICATION_STATUS_HPP
#define COMMUNICATION_STATUS_HPP

#include <cstdint>

namespace robot_communication
{

// 场地目标ID (用于坐标查询和任务列表)
enum class ObjectID : int32_t
{
    BALL_1 = 1,            // 篮球1
    BALL_2 = 2,            // 篮球2
    THREE_POINT_LINE = 3,  // 三分线
    FREE_THROW_LINE = 4,   // 罚球线
    HOOP_RED = 5,          // 红色球筐
    HOOP_BLUE = 6          // 蓝色球筐
};

// 动作类型 (用于任务列表)
enum class ActionType : int32_t
{
    PICK_UP = 1,   // 捡球
    DRIBBLE = 2,   // 运球
    SHOOT = 3      // 投篮
};

// 节点ID (用于启动确认)
enum class NodeID : int32_t
{
    NODE_VISION = 1,   // 视觉节点
    NODE_VOICE = 2,    // 语音节点
    NODE_MOTION = 3,   // 运动节点
    NODE_MASTER = 4    // 主控节点
};

// 移动状态 (用于MoveTo.action Feedback)
enum class MoveStatus : int32_t
{
    STATUS_MOVING = 0,   // 移动中
    STATUS_ARRIVED = 1,  // 已到达
    STATUS_FAILED = 2    // 移动失败
};

// 移动结果 (用于MoveTo.action Result)
enum class MoveResult : int32_t
{
    RESULT_SUCCESS = 0,    // 成功
    RESULT_FAILED = 1,     // 失败
    RESULT_CANCELLED = 2   // 已取消
};

// 启动状态 (用于StartupCheck.srv)
enum class StartupStatus : int32_t
{
    STATUS_READY = 0,         // 就绪
    STATUS_INITIALIZING = 1,  // 初始化中
    STATUS_FAILED = 2         // 启动失败
};

}  // namespace robot_communication

#endif  // COMMUNICATION_STATUS_HPP