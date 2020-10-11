cmake_minimum_required(VERSION 3.10)
# 设置项目名称
project(main VERSION 1.0)

# 指定c++版本
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 设置调试模式，可以进行gdb调试
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -g)

# 将当前目录下所有源文件赋值给DIR_SRC
aux_source_directory(. DIR_SRC)
set(LIB stock student person astar)

# 增加子目录路径,不能叠加写？
add_subdirectory(src/stock)
add_subdirectory(src/student)
add_subdirectory(src/person)
add_subdirectory(src/astar)


# 增加头文件包含目录
set(SUB_DIR src/stock src/student src/person src/astar)
include_directories(${SUB_DIR})

# 设置二进制文件名称依赖
add_executable(main main.cpp)

# 增加链接库
target_link_libraries(main ${LIB})






