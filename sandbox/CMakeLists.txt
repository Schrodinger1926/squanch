cmake_minimum_required(VERSION 2.8)
project(sandbox)
add_executable(sandbox main.cpp)
message("SANDBOX: ${PROJECT_SOURCE_DIR} ")	
target_include_directories(sandbox 
		PRIVATE
			${PROJECT_SOURCE_DIR}/src
			)

#target_link_libraries(sandbox nutsack)
