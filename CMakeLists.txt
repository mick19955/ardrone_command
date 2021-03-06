cmake_minimum_required(VERSION 2.8.3)
project(ardrone_command)

#Get c++11
ADD_DEFINITIONS(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy

  std_msgs
  message_generation
  ardrone_autonomy
  sensor_msgs
  cv_bridge

)


 add_message_files(
   DIRECTORY msg
   FILES
   altitude_control_state.msg
   qr_orientation_control_info.msg
   qr_go_to_point_control_info.msg 
   qr_code_state_info.msg 
   command_status_info.msg
   serialized_ardrone_command_part.msg
   serialized_ardrone_command.msg
 )

add_service_files(
    DIRECTORY srv
    FILES
    commandInterface.srv
)

generate_messages(DEPENDENCIES geometry_msgs std_msgs)



###################################
## catkin specific configuration ##
###################################
## The catkin_package macro generates cmake config files for your package
## Declare things to be passed to dependent projects
## INCLUDE_DIRS: uncomment this if you package contains header files
## LIBRARIES: libraries you create in this project that dependent projects also need
## CATKIN_DEPENDS: catkin_packages dependent projects also need
## DEPENDS: system dependencies of this project that dependent projects also need
catkin_package(
INCLUDE_DIRS include/
LIBRARIES ardrone_command_library
#  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
CATKIN_DEPENDS message_runtime ardrone_autonomy
)




###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
# include_directories(include)



## Add cmake target dependencies of the executable/library
## as an example, message headers may need to be generated before nodes
# add_dependencies(beginner_tutorials_node beginner_tutorials_generate_messages_cpp)

## Specify libraries to link a library or executable target against
# target_link_libraries(beginner_tutorials_node
#   ${catkin_LIBRARIES}
# )

#############
## Install ##
#############

# all install targets should use catkin DESTINATION variables
# See http://ros.org/doc/api/catkin/html/adv_user_guide/variables.html

## Mark executable scripts (Python etc.) for installation
## in contrast to setup.py, you can choose the destination
# install(PROGRAMS
#   scripts/my_python_script
#   DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
# )

## Mark executables and/or libraries for installation
# install(TARGETS beginner_tutorials beginner_tutorials_node
#   ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
#   LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
#   RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
# )

## Mark cpp header files for installation
# install(DIRECTORY include/${PROJECT_NAME}/
#   DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
#   FILES_MATCHING PATTERN "*.h"
#   PATTERN ".svn" EXCLUDE
# )

## Mark other files for installation (e.g. launch and bag files, etc.)
# install(FILES
#   # myfile1
#   # myfile2
#   DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
# )

#############
## Testing ##
#############

## Add gtest based cpp test target and link libraries
# catkin_add_gtest(${PROJECT_NAME}-test test/test_beginner_tutorials.cpp)
# if(TARGET ${PROJECT_NAME}-test)
#   target_link_libraries(${PROJECT_NAME}-test ${PROJECT_NAME})
# endif()

## Add folders to be run by python nosetests
# catkin_add_nosetests(test)

#message('Yowser' ${ardrone_autonomy_INCLUDE_DIRS})
# Add headers directory
include_directories(${CATKIN_DEVEL_PREFIX}/ardrone_command ${catkin_INCLUDE_DIRS} include/ardrone_command/)

#include_directories(include)

#include_directories('/home/hewhosurvives/c++/randomProjects/ros/catkin_ws/devel/include/' 'opt/ros/indigo/include/usr/include')

FILE(GLOB LIBRARY_SOURCEFILES src/lib/*.cpp src/lib/*.c)
FILE(GLOB EXECUTABLE_SOURCEFILES src/exec/*.cpp src/exec/*.c)

add_library(ardrone_command_library ${LIBRARY_SOURCEFILES})
target_link_libraries(ardrone_command_library ${catkin_LIBRARIES} zbar opencv_core opencv_highgui opencv_calib3d)
add_dependencies(ardrone_command_library ardrone_command_generate_messages_cpp ${PROJECT_NAME}_gencpp)

add_executable(ardrone_command ${EXECUTABLE_SOURCEFILES})

target_link_libraries(ardrone_command ardrone_command_library)



#add_dependencies(talker ${catkin_EXPORTED_TARGETS})



