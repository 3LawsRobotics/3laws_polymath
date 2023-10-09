cmake_minimum_required(VERSION 3.15)
project(lll_msgs)

find_package(catkin REQUIRED COMPONENTS message_generation
  nav_msgs
  rosgraph_msgs
  sensor_msgs
  std_msgs
  std_srvs
  stereo_msgs
  trajectory_msgs
  visualization_msgs
)

include_directories(include ${catkin_INCLUDE_DIRS} ${Boost_INCLUDE_DIRS})
link_directories(${catkin_LIBRARY_DIRS})

file(GLOB_RECURSE MSG_FILES_FULL "${CMAKE_CURRENT_SOURCE_DIR}/msg/*.msg")

foreach(MSG_FILE_FULL ${MSG_FILES_FULL})
  get_filename_component(MSG_FILE ${MSG_FILE_FULL} NAME)
  list(APPEND MSG_FILES "${MSG_FILE}")
endforeach()

file(GLOB_RECURSE SRV_FILES_FULL "${CMAKE_CURRENT_SOURCE_DIR}/srv/*.srv")

foreach(SRV_FILE_FULL ${SRV_FILES_FULL})
  get_filename_component(SRV_FILE ${SRV_FILE_FULL} NAME)
  list(APPEND SRV_FILES "${SRV_FILE}")
endforeach()

add_message_files(DIRECTORY msg FILES
  "${MSG_FILES}"
)

# add_service_files(DIRECTORY srv FILES
# "${SRV_FILES}"
# )
generate_messages(DEPENDENCIES geometry_msgs
  nav_msgs
  rosgraph_msgs
  sensor_msgs
  std_msgs
  std_srvs
  stereo_msgs
  trajectory_msgs
  visualization_msgs)

catkin_package(CATKIN_DEPENDS geometry_msgs
  nav_msgs
  rosgraph_msgs
  sensor_msgs
  std_msgs
  std_srvs
  stereo_msgs
  trajectory_msgs
  visualization_msgs
  message_runtime)
