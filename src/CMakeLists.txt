add_library(libodd)

set(INCLUDE_ROOT ${PROJECT_SOURCE_DIR}/include)

target_include_directories(libodd PUBLIC ${INCLUDE_ROOT})
target_sources(libodd
               PUBLIC
                ${INCLUDE_ROOT}/is_odd.hpp
               PRIVATE
                is_odd.cpp)
