cmake_minimum_required(VERSION 3.10.2)
project(TestedGraph)

set(CMAKE_CXX_STANDARD 17)

add_executable(TestedGraph main.cpp graph.cpp graph.h)

project(UnitTests)

set(CMAKE_CXX_STANDARD 17)

add_executable(UnitTests graph.cpp graph.h tests.cpp)