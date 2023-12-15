cmake_minimum_required(VERSION 3.2)

project(lab3)
find_package(GTest REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall")
enable_testing()

set(SOURCE_OUT ./src/Factory.cpp ./src/Observer.cpp ./src/Visitor.cpp ./src/Scene.cpp ./src/NPC.cpp ./src/main.cpp)
add_executable(${PROJECT_NAME} ${SOURCE_OUT})


set(TEST_NAME tests)
add_executable(${TEST_NAME} ./src/Factory.cpp ./src/Observer.cpp ./src/Visitor.cpp ./src/Scene.cpp ./src/NPC.cpp ./src/tests/tests.cpp)
target_link_libraries(${TEST_NAME} ${GTEST_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})

add_test(NAME BASIC COMMAND tests)