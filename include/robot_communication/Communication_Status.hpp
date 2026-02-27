#ifndef COMMUNICATION_STATUS_HPP
#define COMMUNICATION_STATUS_HPP

#include <cstdint>

namespace robot_communication
{

// 比赛状态枚举值 (用于 CourtStatus.msg 的 game_state)
enum class GameState : int32_t
{
    STATUS_READY = 0,    // 准备就绪
    STATUS_PLAYING = 1,  // 比赛中
    STATUS_PAUSED = 2,   // 暂停
    STATUS_ENDED = 3     // 比赛结束
};

// 服务响应消息代码 (用于 StartMatch.srv 的 message_code)
enum class MatchMessageCode : int32_t
{
    STATUS_SUCCESS = 0,             // 成功
    STATUS_ALREADY_PLAYING = 1,     // 比赛已在进行中
    STATUS_NOT_READY = 2,           // 未准备好
    STATUS_INVALID_REQUEST = 3      // 无效请求
};

}  // namespace robot_communication

#endif  // COMMUNICATION_STATUS_HPP
