cmake_minimum_required(VERSION 3.22)
project(vcpkg-dcmtk LANGUAGES CXX)

find_package(PNG REQUIRED)
if(PNG_FOUND)
  message(STATUS "PNG was found")
endif()

add_subdirectory(dependencies)
