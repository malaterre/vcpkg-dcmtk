cmake_minimum_required(VERSION 3.22)
project(vcpkg-dcmtk LANGUAGES CXX)

find_package(PNG QUIET)
if(PNG_FOUND)
  message(STATUS "MM: PNG was found")
else()
  message(STATUS "MM PNG was NOT found")
endif()

add_subdirectory(dependencies)
