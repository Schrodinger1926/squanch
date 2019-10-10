cmake_minimum_required(VERSION 2.8)
project(app)

file(GLOB SRC "${PROJECT_SOURCE_DIR}/src/*.cpp")

#add_executable(app ${PROJECT_SOURCE_DIR}/src/main.cpp)
add_executable(app ${SRC})
target_include_directories(app
		PRIVATE
			${PROJECT_SOURCE_DIR}/src
			)

target_link_libraries(app squanch)
