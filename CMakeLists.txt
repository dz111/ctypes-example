cmake_minimum_required(VERSION 2.8.9)
project(student)

if(UNIX OR APPLE)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif(UNIX OR APPLE)

include_directories("src")

file(GLOB SOURCES "src/*.cpp")

add_library(student SHARED ${SOURCES})
