cmake_minimum_required(VERSION 3.30.4)

project(Advent_of_Code_2020)

set(SOURCE_FILES
    src/day01.cpp
    src/text_file.h
    src/text_file.cpp
)

file(COPY puzzle_input DESTINATION ${CMAKE_BINARY_DIR})

add_executable(${PROJECT_NAME} ${SOURCE_FILES})