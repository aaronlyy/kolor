cmake_minimum_required(VERSION 3.26)
project(kolor)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(kolor
        src/kolor.cpp
        src/kolor.h
        examples/main.cpp
)
