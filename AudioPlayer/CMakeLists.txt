# CMakeList.txt: AudioPlayer 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

# 添加头文件搜索目录
include_directories(../)

# 将源代码添加到此项目的可执行文件。
add_executable (AudioPlayer "AudioPlayer.cpp" "AudioPlayer.h")

target_link_libraries(AudioPlayer Thread)

# TODO: 如有需要，请添加测试并安装目标。
