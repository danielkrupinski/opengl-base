cmake_minimum_required(VERSION 3.10.2)
project(OpenGL-Base)

set(CMAKE_BUILD_TYPE Release)

include_directories(include)

file(GLOB SOURCES "src/*.c")
set(CMAKE_C_FLAGS_RELEASE "-std=c18 -m64 -Ofast -flto -march=native -funroll-loops -fno-builtin -s")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
add_executable(OpenGL-Base ${SOURCES})
target_link_libraries(OpenGL-Base glfw GL)
