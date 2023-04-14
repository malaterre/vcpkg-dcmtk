cmake_minimum_required(VERSION 3.22)
project(vcpkg-dcmtk LANGUAGES CXX)

add_subdirectory(dependencies)

set(DCMTK_TARGETS_IMPORTED ON)
find_package(DCMTK 3.6.6 CONFIG REQUIRED HINTS ${CMAKE_BINARY_DIR})

add_executable(app app.cxx)
target_link_libraries(app LINK_PRIVATE ${DCMTK_LIBRARIES})
