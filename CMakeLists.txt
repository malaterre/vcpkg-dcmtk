# packagePresets requires version 6 in CMakePreset.json
cmake_minimum_required(VERSION 3.25)
project(vcpkg-dcmtk LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)

# pretend to release 3.6.8:
configure_file(
  ${CMAKE_CURRENT_SOURCE_DIR}/patch/dcmtkPrepare.cmake
  ${CMAKE_CURRENT_SOURCE_DIR}/dependencies/dcmtk/CMake/dcmtkPrepare.cmake @ONLY)
add_subdirectory(dependencies)
set(DCMTK_TARGETS_IMPORTED ON)
find_package(DCMTK 3.6.8 CONFIG REQUIRED HINTS ${CMAKE_BINARY_DIR})

add_library(foo SHARED foo.cxx)
message(STATUS ${DCMTK_INCLUDE_DIRS})
target_include_directories(foo PRIVATE ${DCMTK_INCLUDE_DIRS})
target_link_libraries(foo PRIVATE ${DCMTK_LIBRARIES})

set(CPACK_PACKAGE_NAME "dcmtk")
set(CPACK_PACKAGE_VERSION_MAJOR 3)
set(CPACK_PACKAGE_VERSION_MINOR 6)
set(CPACK_PACKAGE_VERSION_PATCH 8)
include(CPack)
