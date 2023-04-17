# configure dcmtk options:
set(DCMTK_WITH_ZLIB ON) # zlib is used by PNG anyway
set(DCMTK_WITH_PNG ON)

set(BUILD_APPS OFF)
set(DCMTK_ENABLE_STL ON)
#set(USE_COMPILER_HIDDEN_VISIBILITY ON)
set(DCMTK_WITH_DOXYGEN OFF)
set(DCMTK_ENABLE_MANPAGES OFF)
set(BUILD_SHARED_LIBS OFF)

set(DCMTK_WITH_ICU OFF)
set(DCMTK_WITH_STDLIBC_ICONV OFF)

# https://github.com/DCMTK/dcmtk/pull/78
#if(WIN32)
#  find_package(PNG REQUIRED)
#  message(STATUS "DCMTK/PNG: ${PNG_INCLUDE_DIR}")
#  set(WITH_LIBPNGINC ${PNG_INCLUDE_DIR}/..)
#  find_package(ZLIB REQUIRED)
#  message(STATUS "DCMTK/ZLIB: ${ZLIB_INCLUDE_DIRS}")
#  set(WITH_ZLIBINC ${ZLIB_INCLUDE_DIRS}/..)
#endif()

# build DCMTK
add_subdirectory(dcmtk EXCLUDE_FROM_ALL)
