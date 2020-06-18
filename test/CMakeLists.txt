cmake_minimum_required(VERSION 3.17)

set(CMAKE_CXX_STANDARD 11)

add_executable(test  test_math.cpp)

include_directories(../mathlib)

target_link_libraries(test simpleMath)
