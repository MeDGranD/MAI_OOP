cmake_minimum_required(VERSION 3.2)

project(lab1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall")

set(SOURCE_OUT ./src/main.cpp ./src/Solution.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_OUT})