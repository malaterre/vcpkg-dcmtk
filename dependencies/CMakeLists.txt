# configure dcmtk options:
set(DCMTK_WITH_ZLIB ON) # zlib is used by PNG anyway
set(DCMTK_WITH_PNG ON)

# https://github.com/DCMTK/dcmtk/pull/78
if(WIN32)
  find_package(PNG REQUIRED)
  message(STATUS ${PNG_INCLUDE_DIR})
  set(WITH_LIBPNGINC ${PNG_INCLUDE_DIR}/..)
endif()

# build DCMTK
add_subdirectory(dcmtk EXCLUDE_FROM_ALL)
