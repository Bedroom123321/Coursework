cmake_minimum_required(VERSION 3.29)
project(LAB1)

set(CMAKE_CXX_STANDARD 23)

set(SQLITE3_DIR "${CMAKE_SOURCE_DIR}/LAB1/SQLITE")

set(SQLITE3_SOURCES ${SQLITE3_DIR}/sqlite3.c
        LAB1/cpp_files/dishes.cpp
        LAB1/header_files/dishes.h)

include_directories(${SQLITE3_DIR}/sqlite3.h)

add_executable(LAB1 LAB1/cpp_files/main.cpp ${SQLITE3_SOURCES}
        LAB1/cpp_files/functions.cpp
        LAB1/header_files/functions.h
        LAB1/cpp_files/list_of_orders_class.cpp
        LAB1/header_files/list_of_orders_class.h
        LAB1/cpp_files/visitor_class.cpp
        LAB1/header_files/visitor_class.h
        LAB1/cpp_files/order_class.cpp
        LAB1/header_files/order_class.h
)
