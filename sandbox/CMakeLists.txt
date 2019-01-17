cmake_minimum_required(VERSION 2.8)
project(app)
add_executable(app ${PROJECT_SOURCE_DIR}/src/main.cpp)
message("app: ${PROJECT_SOURCE_DIR} ")	
target_include_directories(app 
		PRIVATE
			${PROJECT_SOURCE_DIR}/src
			)

target_link_libraries(app nutsack)
