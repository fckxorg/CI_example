set(INCLUDE_ROOT ${PROJECT_SOURCE_DIR}/include)
set(TARGET_NAME is_odd_test_suite)

add_executable(${TARGET_NAME} is_odd_unittest.cpp)



target_include_directories(${TARGET_NAME} PUBLIC ${INCLUDE_ROOT} lib/googletest/googletest/include)
target_link_libraries(${TARGET_NAME} PUBLIC libodd gtest)

add_custom_command(TARGET ${TARGET_NAME} POST_BUILD COMMAND ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/is_odd_test_suite)

