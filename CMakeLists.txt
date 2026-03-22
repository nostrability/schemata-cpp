cmake_minimum_required(VERSION 3.16)
project(schemata-cpp VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(schemata src/schemata.cpp)
target_include_directories(schemata PUBLIC include)

# Tests
enable_testing()
add_executable(test_registry tests/test_registry.cpp)
target_link_libraries(test_registry PRIVATE schemata)
add_test(NAME registry_tests COMMAND test_registry)
