#cmake版本
cmake_minimum_required(VERSION 4.5.0)
#c++编译器
set(CMAKE_CXX_STANDARD 20)
#项目名
project(TheCode)
#查找所有源文件
aux_source_directory(. DIR_CXX)
#添加库文件目录
include_directories(${PROJECT_SOURCE_DIR}/TheHead)
#指定库的位置
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/TheHead)
#生成可执行文件
add_executable(TheCodeGo ${DIR_CXX})
#链接动态库
target_link_libraries(TheCodeGo TheHead)
