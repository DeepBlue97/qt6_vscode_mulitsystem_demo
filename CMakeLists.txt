cmake_minimum_required(VERSION 3.5) # CMake install : https://cmake.org/download/
project(test001 LANGUAGES CXX)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

IF(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
    set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build-windows)
ELSEIF(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
    set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build-linux)
ENDIF()

message(Qt_KIT_DIR: "$ENV{Qt_KIT_DIR}")
set(CMAKE_PREFIX_PATH "$ENV{Qt_KIT_DIR}")
message(CMAKE_PREFIX_PATH "$CMAKE_PREFIX_PATH")

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(Qt6 COMPONENTS Widgets REQUIRED) # Qt COMPONENTS
include_directories(src) # in case ui_mainwindow.h can not found labelgraphicsview.h
aux_source_directory(./src srcs)


# Specify MSVC UTF-8 encoding   
add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

# add_executable(${PROJECT_NAME}
#     WIN32 # If you need a terminal for debug, please comment this statement 
#     ${srcs} 
# ) 

qt_add_executable(${PROJECT_NAME}
    # WIN32 # If you need a terminal for debug, please comment this statement 
    MANUAL_FINALIZATION
    # ${PROJECT_SOURCES}
    ${srcs} 
    # qgraphicspointsitem.cpp
    # qgraphicspointsitem.h
    src/image.qrc
) 
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets) # Qt5 Shared Library
# target_include_directories(${PROJECT_NAME} PUBLIC src/include)