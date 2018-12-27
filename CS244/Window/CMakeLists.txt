cmake_minimum_required(VERSION 3.10)
project(Window)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(Window
        Exception.h
        homework.txt
        main.cpp
        shop.txt
        stack.h
        windows.cc
        windows.h)
