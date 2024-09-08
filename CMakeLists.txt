cmake_minimum_required(VERSION 3.10)
project(RTLSDR_Detector)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_TOOLCHAIN_FILE "C:/vcpkg/scripts/buildsystems/vcpkg.cmake")

set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} "C:/vcpkg/installed/x64-windows")

find_package(rtlsdr CONFIG REQUIRED)

include_directories(${rtlsdr_INCLUDE_DIRS})
link_directories(${rtlsdr_LIBRARY_DIRS})

add_executable(detect_sdr src/main.cpp)

target_link_libraries(detect_sdr rtlsdr)

