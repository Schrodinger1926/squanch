cmake_minimum_required(VERSION 2.8)
project(tests)

add_subdirectory(${PROJECT_SOURCE_DIR}/dependencies/googletest)
add_subdirectory(${PROJECT_SOURCE_DIR}/squanch)
add_subdirectory(${PROJECT_SOURCE_DIR}/sandbox)
