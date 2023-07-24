cmake_minimum_required(VERSION 3.22)

project(test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_EXPORT_COMPILE_COMMANDS true)

add_executable(${PROJECT_NAME} main.cpp)