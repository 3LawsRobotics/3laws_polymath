cmake_minimum_required(VERSION 3.15)
project(lll_msgs)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

find_package(builtin_interfaces REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(std_srvs REQUIRED)
find_package(stereo_msgs REQUIRED)
find_package(trajectory_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)

file(GLOB_RECURSE MSG_FILES_FULL "${CMAKE_CURRENT_SOURCE_DIR}/msg/*.msg")

foreach(MSG_FILE_FULL ${MSG_FILES_FULL})
  get_filename_component(MSG_FILE ${MSG_FILE_FULL} NAME)
  list(APPEND MSG_FILES "msg/${MSG_FILE}")
endforeach()

file(GLOB_RECURSE SRV_FILES_FULL "${CMAKE_CURRENT_SOURCE_DIR}/srv/*.srv")

foreach(SRV_FILE_FULL ${SRV_FILES_FULL})
  get_filename_component(SRV_FILE ${SRV_FILE_FULL} NAME)
  list(APPEND SRV_FILES "srv/${SRV_FILE}")
endforeach()

rosidl_generate_interfaces(${PROJECT_NAME}

  # messages
  "${MSG_FILES}"

  # services
  "${SRV_FILES}"

  DEPENDENCIES
  builtin_interfaces
  geometry_msgs
  nav_msgs
  sensor_msgs
  std_msgs
  std_srvs
  stereo_msgs
  trajectory_msgs
  visualization_msgs
)

ament_export_dependencies(
  builtin_interfaces
  geometry_msgs
  nav_msgs
  rosidl_default_runtime
  sensor_msgs
  std_msgs
  std_srvs
  stereo_msgs
  trajectory_msgs
  visualization_msgs
)
ament_package()
