cmake_minimum_required(VERSION 3.22)

project(test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_EXPORT_COMPILE_COMMANDS true)

set(warnings "-Wall -Wextra -Weffc++")
set(sanitizers "-fsanitize=address -fsanitize=undefined")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${warnings} ${sanitizers}")

add_executable(${PROJECT_NAME} main.cpp)