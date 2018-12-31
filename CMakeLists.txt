cmake_minimum_required(VERSION 3.13)
project(ball_drop)

set(CMAKE_CXX_STANDARD 14)

add_executable(ball_drop main.cpp constants.h ballphysics.cpp ballphysics.h)