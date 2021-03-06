# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "chapter4: 0 messages, 1 services")

set(MSG_I_FLAGS "-Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(chapter4_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/buckey/catkin_ws/src/chapter4/srv/WordCount.srv" NAME_WE)
add_custom_target(_chapter4_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "chapter4" "/home/buckey/catkin_ws/src/chapter4/srv/WordCount.srv" ""
)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages

### Generating Services
_generate_srv_cpp(chapter4
  "/home/buckey/catkin_ws/src/chapter4/srv/WordCount.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/chapter4
)

### Generating Module File
_generate_module_cpp(chapter4
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/chapter4
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(chapter4_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(chapter4_generate_messages chapter4_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/buckey/catkin_ws/src/chapter4/srv/WordCount.srv" NAME_WE)
add_dependencies(chapter4_generate_messages_cpp _chapter4_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(chapter4_gencpp)
add_dependencies(chapter4_gencpp chapter4_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS chapter4_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages

### Generating Services
_generate_srv_lisp(chapter4
  "/home/buckey/catkin_ws/src/chapter4/srv/WordCount.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/chapter4
)

### Generating Module File
_generate_module_lisp(chapter4
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/chapter4
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(chapter4_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(chapter4_generate_messages chapter4_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/buckey/catkin_ws/src/chapter4/srv/WordCount.srv" NAME_WE)
add_dependencies(chapter4_generate_messages_lisp _chapter4_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(chapter4_genlisp)
add_dependencies(chapter4_genlisp chapter4_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS chapter4_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages

### Generating Services
_generate_srv_py(chapter4
  "/home/buckey/catkin_ws/src/chapter4/srv/WordCount.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/chapter4
)

### Generating Module File
_generate_module_py(chapter4
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/chapter4
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(chapter4_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(chapter4_generate_messages chapter4_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/buckey/catkin_ws/src/chapter4/srv/WordCount.srv" NAME_WE)
add_dependencies(chapter4_generate_messages_py _chapter4_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(chapter4_genpy)
add_dependencies(chapter4_genpy chapter4_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS chapter4_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/chapter4)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/chapter4
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(chapter4_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/chapter4)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/chapter4
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(chapter4_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/chapter4)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/chapter4\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/chapter4
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(chapter4_generate_messages_py std_msgs_generate_messages_py)
endif()
