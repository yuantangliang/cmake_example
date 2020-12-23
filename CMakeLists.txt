cmake_minimum_required(VERSION 3.19)
project(cmake_multi__target)

set(CMAKE_CXX_STANDARD 11)


add_subdirectory(mathlib)
add_subdirectory(test)

add_executable(add main.c)
target_link_libraries(add simpleMath)