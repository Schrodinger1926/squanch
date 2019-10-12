cmake_minimum_required(VERSION 2.8)
project(app)

set (CMAKE_CXX_STANDARD 11)
set (CMAKE_VERBOSE_MAKEFILE OFF)
#set (EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR})
set (LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_subdirectory(${CMAKE_SOURCE_DIR}/squanch)
add_subdirectory(${CMAKE_SOURCE_DIR}/sandbox)

enable_testing()
add_subdirectory(${CMAKE_SOURCE_DIR}/tests)
