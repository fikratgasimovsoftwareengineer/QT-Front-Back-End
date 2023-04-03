# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/gstreamer_qgc_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/gstreamer_qgc_autogen.dir/ParseCache.txt"
  "gstreamer_qgc_autogen"
  )
endif()
