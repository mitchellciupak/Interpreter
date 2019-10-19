# cmake_minimum_required(VERSION <specify CMake version here>)
project(proj1)

set(CMAKE_CXX_STANDARD 14)

include_directories(..)

add_executable(proj1
        main.cpp
        )
