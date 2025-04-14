# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name
project(NIDAR C)

# Set C compiler and flags
set(CMAKE_C_COMPILER clang)
set(CMAKE_C_FLAGS "-Wall -Wextra -O2")

# Set the build directory and output executable
set(BUILD_DIR ${CMAKE_BINARY_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${BUILD_DIR})

# Add the source files
file(GLOB SRCS "src/*.c")

# Create the executable from source files
add_executable(NIDAR ${SRCS})

# Specify the include directories (where header files are)
target_include_directories(NIDAR PRIVATE src)

# Specify options for cleaning
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT NIDAR)

# Optional: Enable testing or add other CMake features if needed
# enable_testing()
