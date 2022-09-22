cmake_minimum_required(VERSION 3.0)

project(Template)

set(CMAKE_BUILD_TYPE Debug)

include_directories(include)

add_executable(main main.cpp src/source.cpp)
