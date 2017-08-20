cmake_minimum_required(VERSION 3.8)
project(Sunday_rost_Throw)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Person.cpp Person.h Noise.cpp Noise.h)
add_executable(Sunday_rost_Throw ${SOURCE_FILES})