cmake_minimum_required(VERSION 3.20)
project(c-learn-code)

set(CMAKE_CXX_STANDARD 23)
set(LIBUV_DIR deps/libuv@1.42.0)

include_directories(${LIBUV_DIR}/include)
link_directories(${LIBUV_DIR})
add_subdirectory(${LIBUV_DIR})

add_executable(ch01-1 src/ch01_1.cpp)
add_executable(ch02-1 src/ch02_1.cpp)

target_link_libraries(ch02-1 uv)
