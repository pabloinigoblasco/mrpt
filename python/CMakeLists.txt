cmake_minimum_required(VERSION 2.8.3)

project(pymrpt)

set( PYMRPT_INSTALL_DIR "/usr/local/lib/python2.7/dist-packages" CACHE STRING "Set install directory for pymrpt. Ensure directory is in PYTHONPATH!")

include_directories(include)
include_directories(
  ${Boost_INCLUDE_DIRS}
  ${PYTHON_INCLUDE_DIRS}
)

add_library(pymrpt
  src/system_bindings.cpp
  src/utils_bindings.cpp
  src/poses_bindings.cpp
  src/slam_bindings.cpp
  src/maps_bindings.cpp
  src/obs_bindings.cpp
  src/nav_bindings.cpp
  src/gui_bindings.cpp
  src/opengl_bindings.cpp
  src/math_bindings.cpp
  src/bayes_bindings.cpp
  src/bindings.cpp
)

# disable eigen: python and eigen alignment seem not to be best friends
add_definitions(-DEIGEN_DONT_VECTORIZE -DEIGEN_DISABLE_UNALIGNED_ARRAY_ASSERT)
# uncomment to disable ROS support
add_definitions(-DROS_EXTENSIONS)

target_link_libraries(pymrpt
  ${Boost_LIBRARIES}
)

# remove "lib" prefix from .so filename
set_target_properties(pymrpt PROPERTIES PREFIX "")

install(TARGETS pymrpt
  LIBRARY DESTINATION ${PYMRPT_INSTALL_DIR}
)

DeclareAppDependencies(pymrpt mrpt-base mrpt-slam mrpt-obs mrpt-maps mrpt-nav mrpt-gui mrpt-opengl) # Dependencies
