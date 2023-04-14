# configure dcmtk options:
set(DCMTK_WITH_ZLIB ON) # zlib is used by PNG anyway
set(DCMTK_WITH_PNG ON)

# build DCMTK
add_subdirectory(dcmtk EXCLUDE_FROM_ALL)
