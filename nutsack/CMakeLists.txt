cmake_minimum_required(VERSION 2.8)
project(nutsack)
add_library(nutsack STATIC lib.cpp)

message("NUTSACK: ${PROJECT_SOURCE_DIR} ")	
target_include_directories(nutsack
		PRIVATE 
			${PROJECT_SOURCE_DIR}/src
		INTERFACE 
			${PROJECT_SOURCE_DIR}/include
		)

