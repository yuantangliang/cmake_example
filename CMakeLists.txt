cmake_minimum_required(VERSION 3.17)
project(cmake_multi__target)

set(CMAKE_CXX_STANDARD 11)


add_subdirectory(mathlib)
add_subdirectory(test)

add_executable(cmake_multi_target main.cpp )
target_link_libraries(cmake_multi_target simpleMath)