cmake_minimum_required(VERSION 3.13)
project(CI_example)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(INCLUDE_ROOT ${PROJECT_SOURCE_DIR}/include/)
set(TARGET_NAME odd_checker)

option(TESTS "build tests" OFF)


add_subdirectory(src)

add_executable(${TARGET_NAME} src/main.cpp)
target_include_directories(${TARGET_NAME} PUBLIC ${INCLUDE_ROOT})
target_link_libraries(${TARGET_NAME} PUBLIC libodd)

if(TESTS)
    add_subdirectory(tests)
endif()

