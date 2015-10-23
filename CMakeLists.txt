cmake_minimum_required(VERSION 3.2)
#set(CMAKE_TOOLCHAIN_FILE /Users/sdiemert/workspace/arduino-cmake/cmake/ArduinoToolchain.cmake)
project(embedded)

include_directories(
    /Applications/Arduino.app/Contents/Java/hardware/arduino/avr/cores/arduino
)
#include(CMAKE_TOOLCHAIN_FILE)
#include(/Users/sdiemert/workspace/arduino-cmake/cmake/ArduinoToolchain.cmake)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    client_interface.cpp
    client_interface.h
    const.h
    embedded.ino
    README.md
    Time.cpp
    Time.h
    types.h)

add_executable(embedded ${SOURCE_FILES})