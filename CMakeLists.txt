cmake_minimum_required(VERSION 2.8)
project(app)

set (CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_VERBOSE_MAKEFILE OFF)

add_subdirectory(${CMAKE_SOURCE_DIR}/nutsack)
add_subdirectory(${CMAKE_SOURCE_DIR}/sandbox)
