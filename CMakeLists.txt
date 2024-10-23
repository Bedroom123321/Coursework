cmake_minimum_required(VERSION 3.29)
project(LAB1)

set(CMAKE_CXX_STANDARD 23)
set(SQLITE3_DIR "${CMAKE_SOURCE_DIR}/LAB1/SQLITE")
set(SQLITE3_SOURCES ${SQLITE3_DIR}/sqlite3.c)
include_directories(${SQLITE3_DIR}/sqlite3.h)

#[[set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_PREFIX_PATH "D:\\Qt\\6.7.3\\mingw_64\\")]]

#[[find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)]]

add_executable(LAB1 LAB1/cpp_files/main.cpp ${SQLITE3_SOURCES}
        LAB1/cpp_files/functions.cpp
        LAB1/header_files/functions.h
        LAB1/cpp_files/visitor_class.cpp
        LAB1/header_files/visitor_class.h
        LAB1/cpp_files/order_class.cpp
        LAB1/header_files/order_class.h
        LAB1/cpp_files/dishes_class.cpp
        LAB1/header_files/dishes_class.h
        LAB1/cpp_files/dishes.cpp
        LAB1/header_files/dishes.h
)

#[[
target_link_libraries(LAB1
        Qt6::Core
        Qt6::Gui
        Qt6::Widgets)

if (WIN32 AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    set(DEBUG_SUFFIX)
    if (MSVC AND CMAKE_BUILD_TYPE MATCHES "Debug")
        set(DEBUG_SUFFIX "d")
    endif ()
    set(QT_INSTALL_PATH "${CMAKE_PREFIX_PATH}")
    if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
        set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
            set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        endif ()
    endif ()
    if (EXISTS "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E make_directory
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
    endif ()
    foreach (QT_LIB Core Gui Widgets)
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/bin/Qt6${QT_LIB}${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
    endforeach (QT_LIB)
endif ()]]
