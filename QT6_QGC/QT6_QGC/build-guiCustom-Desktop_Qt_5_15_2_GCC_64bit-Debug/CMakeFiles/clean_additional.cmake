# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/guiCustom_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/guiCustom_autogen.dir/ParseCache.txt"
  "guiCustom_autogen"
  )
endif()
