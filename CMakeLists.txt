cmake_minimum_required(VERSION 3.28.1 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(GOOGLETEST_VERSION 1.15.2)

project(DSA)

enable_testing()

add_subdirectory(googletest)

include_directories(include)

add_executable(DSA
    src/main.cpp
    src/algorithms/Search.cpp
) 

add_executable(tests
    tests/tests.cpp
    src/algorithms/Search.cpp 
)

target_link_libraries(tests PRIVATE gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)
