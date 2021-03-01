cmake_minimum_required(VERSION 3.13)
project(CI_example)
set(CMAKE_CXX_STANDARD 20)

option(TESTS "build tests" OFF)

set(INCLUDE_ROOT ${PROJECT_SOURCE_DIR}/include/)

add_subdirectory(src)

add_executable(odd_checker src/main.cpp)
target_include_directories(odd_checker PUBLIC ${INCLUDE_ROOT})
target_link_libraries(odd_checker PUBLIC libodd)

