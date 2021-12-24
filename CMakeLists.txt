cmake_minimum_required(VERSION 3.20)
project(c-learn-code)

set(CMAKE_CXX_STANDARD 23)
set(CONAN_DISABLE_CHECK_COMPILER disable)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()


add_executable(ch02-1 src/ch02_1.cpp)

target_link_libraries(ch02-1 ${CONAN_LIBS})
