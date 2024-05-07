cmake_minimum_required(VERSION 3.2)

project(Example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
# set(SOURCE_EXE main.cpp)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)
enable_testing()

add_executable(test_foo tests/test_foo.cpp example.cpp)
target_link_libraries(test_foo GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(test_foo)



add_executable(Example main.cpp example.cpp)