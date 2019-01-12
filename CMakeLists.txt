cmake_minimum_required(VERSION 2.8)
project(app)

set (CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_COMPILER "/usr/bin/g++-6")
set(CMAKE_VERBOSE_MAKEFILE ON)

include_directories(${CMAKE_SOURCE_DIR})

add_library(engine STATIC lib.cpp)

add_executable(app main.cpp)
target_link_libraries(app engine)
