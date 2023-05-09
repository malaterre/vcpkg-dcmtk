# packagePresets requires version 6 in CMakePreset.json
cmake_minimum_required(VERSION 3.25)
cmake_policy(SET CMP0091 NEW)
project(vcpkg-dcmtk LANGUAGES CXX)

#set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)

# pretend to release 3.6.8:
#configure_file(
#  ${CMAKE_CURRENT_SOURCE_DIR}/patch/dcmtkPrepare.cmake
#  ${CMAKE_CURRENT_SOURCE_DIR}/dependencies/dcmtk/CMake/dcmtkPrepare.cmake @ONLY)
#add_subdirectory(dependencies)
#set(DCMTK_TARGETS_IMPORTED ON)

find_package(Boost 1.53 REQUIRED COMPONENTS filesystem)
find_package(DCMTK 3.6.7 REQUIRED)
add_library(foo SHARED foo.cxx)
#message(STATUS ${DCMTK_INCLUDE_DIRS})
target_include_directories(foo PRIVATE ${DCMTK_INCLUDE_DIRS})
target_include_directories(foo PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(foo PRIVATE DCMTK::ofstd) # ${DCMTK_LIBRARIES})
target_link_libraries(foo PRIVATE Boost::filesystem)
set_property(TARGET foo PROPERTY
             MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

set(CPACK_PACKAGE_NAME "dcmtk")
set(CPACK_PACKAGE_VERSION_MAJOR 3)
set(CPACK_PACKAGE_VERSION_MINOR 6)
set(CPACK_PACKAGE_VERSION_PATCH 8)
include(CPack)
