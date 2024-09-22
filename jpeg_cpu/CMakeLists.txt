cmake_minimum_required(VERSION 3.10)
project(jpeg_cpu CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find libjpeg package
find_package(JPEG REQUIRED)

# Add executable
add_executable(jpeg_cpu
    src/main.cpp
    src/jpeg_cpu.cpp
)

# Include directories
target_include_directories(jpeg_cpu PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)

# Link libraries
target_link_libraries(jpeg_cpu PRIVATE ${JPEG_LIBRARIES})

# Include directories for libjpeg
target_include_directories(jpeg_cpu PRIVATE ${JPEG_INCLUDE_DIRS})