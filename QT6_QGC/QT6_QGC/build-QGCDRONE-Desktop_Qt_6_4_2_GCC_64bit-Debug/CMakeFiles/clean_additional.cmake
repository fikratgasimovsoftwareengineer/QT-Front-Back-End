# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QGCDRONE_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QGCDRONE_autogen.dir/ParseCache.txt"
  "QGCDRONE_autogen"
  )
endif()
