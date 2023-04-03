# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/buttons_design_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/buttons_design_autogen.dir/ParseCache.txt"
  "buttons_design_autogen"
  )
endif()
