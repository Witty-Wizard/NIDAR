cmake_minimum_required(VERSION 3.10)

project(NIDAR CXX)

# Set compilers
set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

# Compiler flags
set(CMAKE_C_FLAGS "-Wall -Wextra -Werror -O2")
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -O2")

# Output build directory
set(BUILD_DIR ${CMAKE_BINARY_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${BUILD_DIR})

# Locate Python 3
find_package(Python3 3.10 REQUIRED COMPONENTS Interpreter Development)

# Add source files
file(GLOB SRCS "src/*.cpp")
add_executable(NIDAR ${SRCS})

# Include dirs (for your code + Python headers)
target_include_directories(NIDAR 
    PRIVATE 
        src 
        ${Python3_INCLUDE_DIRS}
)

# Link Python libs
target_link_libraries(NIDAR 
    PRIVATE 
        ${Python3_LIBRARIES}
)

# Optional project settings
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT NIDAR)
