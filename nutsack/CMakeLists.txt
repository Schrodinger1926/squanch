cmake_minimum_required(VERSION 2.8)
project(nutsack)
file(GLOB SRC "${PROJECT_SOURCE_DIR}/src/*.cpp")
add_library(nutsack SHARED ${SRC})

target_include_directories(nutsack
        PUBLIC
			${PROJECT_SOURCE_DIR}/include/nutsack/
		)


add_subdirectory(${PROJECT_SOURCE_DIR}/dependencies/spdlog)
add_subdirectory(${PROJECT_SOURCE_DIR}/dependencies/glfw)
target_link_libraries(nutsack PUBLIC spdlog
                              PUBLIC glfw)
