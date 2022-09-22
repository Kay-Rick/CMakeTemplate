cmake_minimum_required(VERSION 3.0)

project(CMAKE_TEMPLATE)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

aux_source_directory(./src DIR_SRCS)

add_executable(main main.cpp ${DIR_SRCS})
