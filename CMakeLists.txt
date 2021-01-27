cmake_minimum_required(VERSION 2.8.9)

option(BUILD_DLL "Enable building dll" OFF)

if(BUILD_DLL)
    add_subdirectory(dll)
endif()

project (main)

# compile
add_executable(main main.cpp)