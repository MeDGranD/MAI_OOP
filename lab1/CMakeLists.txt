cmake_minimum_required(VERSION 3.2)

project(lab1)

find_package(GTest REQUIRED)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall")

set(SOURCE_OUT ./src/main.cpp ./src/Solution.cpp ./src/tests.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_OUT})

target_link_libraries(${PROJECT_NAME} ${GTEST_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})

enable_testing()
add_test(${PROJECT_NAME} gtests)