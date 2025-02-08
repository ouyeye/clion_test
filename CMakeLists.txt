cmake_minimum_required(VERSION 3.28)
project(clion_test)

# C++ 17
set(CMAKE_CXX_STANDARD 17)
# 添加头文件所在文件夹
include_directories(include)
# 添加源文件所在文件夹，并将 src 文件夹中的所有源代码文件添加到 DIR_SRCS 变量中
aux_source_directory(./src DIR_SRCS)
# 指定所有需要编译的可执行文件
add_executable(clion_test ${DIR_SRCS}
        include/User.h
        src/User.cpp)
