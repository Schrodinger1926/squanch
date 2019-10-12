cmake_minimum_required(VERSION 2.8)
project(squanch_tests)

file(GLOB SRC "${PROJECT_SOURCE_DIR}/src/*.cpp")
add_executable (squanch_tests ${SRC})
target_link_libraries (squanch_tests PRIVATE gtest_main)

add_test(NAME mytest_squanch COMMAND squanch_tests)
