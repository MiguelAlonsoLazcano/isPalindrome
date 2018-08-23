cmake_minimum_required(VERSION 3.12)
project(Palindrome)

set(CMAKE_CXX_STANDARD 14)

include_directories(inc)

add_executable(Palindrome src/main.cpp inc/Palindrome.h)