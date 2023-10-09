cmake_minimum_required(VERSION 3.15)
project(lll_rdm_msgs)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

find_package(lll_msgs REQUIRED)

file(GLOB_RECURSE MSG_FILES_FULL "${CMAKE_CURRENT_SOURCE_DIR}/msg/*.msg")

foreach(MSG_FILE_FULL ${MSG_FILES_FULL})
  get_filename_component(MSG_FILE ${MSG_FILE_FULL} NAME)
  list(APPEND MSG_FILES "msg/${MSG_FILE}")
endforeach()

rosidl_generate_interfaces(${PROJECT_NAME}
  "${MSG_FILES}"

  DEPENDENCIES
  lll_msgs
)

ament_export_dependencies(
  rosidl_default_runtime
  lll_msgs
)
ament_package()
