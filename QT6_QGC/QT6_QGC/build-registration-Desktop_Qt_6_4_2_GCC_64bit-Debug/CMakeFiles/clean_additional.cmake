# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/registration_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/registration_autogen.dir/ParseCache.txt"
  "registration_autogen"
  )
endif()
