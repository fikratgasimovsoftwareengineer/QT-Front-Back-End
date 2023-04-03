# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/qmlMap_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/qmlMap_autogen.dir/ParseCache.txt"
  "qmlMap_autogen"
  )
endif()
