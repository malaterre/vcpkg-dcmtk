cmake_minimum_required(VERSION 3.24.2)
project(vcpkg-dcmtk LANGUAGES CXX)

configure_file(
  ${CMAKE_CURRENT_SOURCE_DIR}/patch/3rdparty.cmake
  ${CMAKE_CURRENT_SOURCE_DIR}/dependencies/dcmtk/CMake/3rdparty.cmake @ONLY)
add_subdirectory(dependencies)

#set(DCMTK_TARGETS_IMPORTED ON)
#find_package(DCMTK 3.6.6 CONFIG REQUIRED HINTS ${CMAKE_BINARY_DIR})
#add_executable(app app.cxx)
#target_link_libraries(app LINK_PRIVATE ${DCMTK_LIBRARIES})

set(CPACK_PACKAGE_NAME "dcmtk")
set(CPACK_PACKAGE_VERSION_MAJOR 3)
set(CPACK_PACKAGE_VERSION_MINOR 6)
set(CPACK_PACKAGE_VERSION_PATCH 8)
include(CPack)
