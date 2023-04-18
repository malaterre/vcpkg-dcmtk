# packagePresets requires version 6 in CMakePreset.json
cmake_minimum_required(VERSION 3.25)
project(vcpkg-dcmtk LANGUAGES CXX)

# https://github.com/DCMTK/dcmtk/pull/78
configure_file(
  ${CMAKE_CURRENT_SOURCE_DIR}/patch/3rdparty.cmake
  ${CMAKE_CURRENT_SOURCE_DIR}/dependencies/dcmtk/CMake/3rdparty.cmake @ONLY)
# pretend to release 3.6.8:
configure_file(
  ${CMAKE_CURRENT_SOURCE_DIR}/patch/dcmtkPrepare.cmake
  ${CMAKE_CURRENT_SOURCE_DIR}/dependencies/dcmtk/CMake/dcmtkPrepare.cmake @ONLY)
add_subdirectory(dependencies)

set(CPACK_PACKAGE_NAME "dcmtk")
set(CPACK_PACKAGE_VERSION_MAJOR 3)
set(CPACK_PACKAGE_VERSION_MINOR 6)
set(CPACK_PACKAGE_VERSION_PATCH 8)
include(CPack)
