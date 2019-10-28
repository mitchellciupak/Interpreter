cmake_minimum_required(VERSION 3.14)
project(ECE30862_InterpreterProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(codes)
include_directories(datastructs)

add_executable(ECE30862_InterpreterProject
        datastructs/Stack.cpp
        datastructs/Stack.h
        ByteCode.cpp
        ByteCode.h
        Halt.cpp
        Halt.h
        main.cpp
        main.h
        MemoryObject.cpp
        MemoryObject.h
        Value.cpp
        Value.h)
