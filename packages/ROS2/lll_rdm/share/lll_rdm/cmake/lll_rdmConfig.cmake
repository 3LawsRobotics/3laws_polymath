# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_lll_rdm_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED lll_rdm_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(lll_rdm_FOUND FALSE)
  elseif(NOT lll_rdm_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(lll_rdm_FOUND FALSE)
  endif()
  return()
endif()
set(_lll_rdm_CONFIG_INCLUDED TRUE)

# output package information
if(NOT lll_rdm_FIND_QUIETLY)
  message(STATUS "Found lll_rdm: 0.9.3 (${lll_rdm_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'lll_rdm' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${lll_rdm_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(lll_rdm_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake")
foreach(_extra ${_extras})
  include("${lll_rdm_DIR}/${_extra}")
endforeach()
