cmake_minimum_required(VERSION 2.8)
project(squanch)
file(GLOB SRC "${PROJECT_SOURCE_DIR}/src/*.cpp")
add_library(squanch SHARED ${SRC})

target_include_directories(squanch
        PUBLIC
			${PROJECT_SOURCE_DIR}/include/squanch/
		)


add_subdirectory(${PROJECT_SOURCE_DIR}/dependencies/spdlog)
add_subdirectory(${PROJECT_SOURCE_DIR}/dependencies/glfw)
target_link_libraries(squanch PUBLIC spdlog
                              PUBLIC glfw)
