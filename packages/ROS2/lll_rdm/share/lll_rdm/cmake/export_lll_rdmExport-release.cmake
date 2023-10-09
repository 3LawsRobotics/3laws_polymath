#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "lll_rdm::rdm" for configuration "Release"
set_property(TARGET lll_rdm::rdm APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(lll_rdm::rdm PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/lll_rdm/rdm"
  )

list(APPEND _cmake_import_check_targets lll_rdm::rdm )
list(APPEND _cmake_import_check_files_for_lll_rdm::rdm "${_IMPORT_PREFIX}/lib/lll_rdm/rdm" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
