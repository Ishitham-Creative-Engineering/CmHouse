#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "zlib-ng::zlib" for configuration "Release"
set_property(TARGET zlib-ng::zlib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(zlib-ng::zlib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libz-ng.a"
  )

list(APPEND _cmake_import_check_targets zlib-ng::zlib )
list(APPEND _cmake_import_check_files_for_zlib-ng::zlib "${_IMPORT_PREFIX}/lib/libz-ng.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
