cmake_minimum_required(VERSION 3.0.0)
add_definitions("-Wall -std=c++11")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_executable(hellotest hellotest.cpp support.cpp)
