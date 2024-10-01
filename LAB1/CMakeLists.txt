cmake_minimum_required(VERSION 3.29)
project(LAB1)

set(CMAKE_CXX_STANDARD 23)

add_executable(LAB1 cpp_files/main.cpp
        cpp_files/functions.cpp
        header_files/functions.h
        cpp_files/list_of_visitors_class.cpp
        header_files/list_of_visitors_class.h
        cpp_files/visitor_class.cpp
        header_files/visitor_class.h
)
