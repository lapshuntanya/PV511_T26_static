cmake_minimum_required(VERSION 4.0)
project(PV511_T26_static)

set(CMAKE_CXX_STANDARD 20)

add_executable(PV511_T26_static main.cpp
        CarNumber.cpp
        CarNumber.h)
