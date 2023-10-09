cmake_minimum_required(VERSION 3.15)
project(lll_rdm_msgs)

find_package(catkin REQUIRED COMPONENTS message_generation lll_msgs
)

include_directories(include ${catkin_INCLUDE_DIRS} ${Boost_INCLUDE_DIRS})
link_directories(${catkin_LIBRARY_DIRS})

file(GLOB_RECURSE MSG_FILES_FULL "${CMAKE_CURRENT_SOURCE_DIR}/msg/*.msg")

foreach(MSG_FILE_FULL ${MSG_FILES_FULL})
  get_filename_component(MSG_FILE ${MSG_FILE_FULL} NAME)
  list(APPEND MSG_FILES "${MSG_FILE}")
endforeach()

add_message_files(DIRECTORY msg FILES
  "${MSG_FILES}"
)

generate_messages(DEPENDENCIES lll_msgs)

catkin_package(CATKIN_DEPENDS lll_msgs)
