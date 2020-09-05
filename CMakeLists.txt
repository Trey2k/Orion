cmake_minimum_required(VERSION 3.1)

project(Orion)

# Set the name of the ouput binary
set(
	BIN_NAME
	"Orion"
)

# Add all files from a src folder
set(SOURCE_FILES 
		src/main.cpp)

# Add GLFW
find_package(glfw3 3.2 REQUIRED)

# Flags for debug build
set(
	CMAKE_CXX_FLAGS_DEBUG 
	"${CMAKE_CXX_FLAGS_DEBUG} -d -Wall"
)
# Flags for Release build
set(
	CMAKE_CXX_FLAGS_RELEASE 
	"${CMAKE_CXX_FLAGS_RELEASE} -Wall"
)

# Set C++11
set (CMAKE_CXX_STANDARD 11)

# Setup binary output
add_executable(${BIN_NAME} ${SOURCE_FILES})

# Link dependencies
target_link_libraries(${BIN_NAME} glfw)
target_link_libraries(${BIN_NAME} vulkan)