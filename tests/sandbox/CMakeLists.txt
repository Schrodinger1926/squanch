cmake_minimum_required(VERSION 2.8)
project(sandbox_tests)

file(GLOB SRC "${PROJECT_SOURCE_DIR}/src/*.cpp")
add_executable(sandbox_tests ${SRC})
target_link_libraries (sandbox_tests PRIVATE gtest_main)

add_test(NAME mytest_sandbox COMMAND sandbox_tests)
