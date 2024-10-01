cmake_minimum_required(VERSION 3.29)
project(LAB1)

set(CMAKE_CXX_STANDARD 23)

add_executable(LAB1 LAB1/cpp_files/main.cpp
        LAB1/cpp_files/functions.cpp
        LAB1/header_files/functions.h
        LAB1/cpp_files/list_of_visitors_class.cpp
        LAB1/header_files/list_of_visitors_class.h
        LAB1/cpp_files/visitor_class.cpp
        LAB1/header_files/visitor_class.h
)
