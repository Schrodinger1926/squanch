cmake_minimum_required(VERSION 2.8)
project(nutsack)
add_library(nutsack SHARED ${PROJECT_SOURCE_DIR}/src/lib.cpp)

message("NUTSACK: ${PROJECT_SOURCE_DIR}/src")	

target_include_directories(nutsack
    PRIVATE
			${PROJECT_SOURCE_DIR}/include/nutsack/nutsack
		INTERFACE 
			${PROJECT_SOURCE_DIR}/include/nutsack
		)

