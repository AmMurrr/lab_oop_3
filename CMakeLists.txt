cmake_minimum_required(VERSION 3.20)
project(lab_OOP_3)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(googletest)

add_executable(main main.cpp Trapezoid.cpp Rombus.cpp Pentagon.cpp)
#add_executable(test test.cpp Five.cpp)

#target_link_libraries(test PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(test)