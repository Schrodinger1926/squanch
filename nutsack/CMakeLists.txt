cmake_minimum_required(VERSION 2.8)
project(nutsack)
add_library(nutsack SHARED ${PROJECT_SOURCE_DIR}/src/lib.cpp)

message("NUTSACK: ${PROJECT_SOURCE_DIR}/src")	

target_include_directories(nutsack
    PUBLIC
			${PROJECT_SOURCE_DIR}/src
		INTERFACE 
			${PROJECT_SOURCE_DIR}/include
		)

