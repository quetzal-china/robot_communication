# 球场状态消息 - 裁判发布，机器人们订阅
float32 ball_x           # 球的x坐标
float32 ball_y           # 球的y坐标
int32_t game_state         # 比赛状态 (0:ready, 1:playing, 2:paused, 3:ended)
float32 time_remaining   # 剩余时间 (秒)