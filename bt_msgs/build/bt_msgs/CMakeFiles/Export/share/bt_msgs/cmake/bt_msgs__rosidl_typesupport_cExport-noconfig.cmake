#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "bt_msgs::bt_msgs__rosidl_typesupport_c" for configuration ""
set_property(TARGET bt_msgs::bt_msgs__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(bt_msgs::bt_msgs__rosidl_typesupport_c PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libbt_msgs__rosidl_typesupport_c.so"
  IMPORTED_SONAME_NOCONFIG "libbt_msgs__rosidl_typesupport_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS bt_msgs::bt_msgs__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_bt_msgs::bt_msgs__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/libbt_msgs__rosidl_typesupport_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)