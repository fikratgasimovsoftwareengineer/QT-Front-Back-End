# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/qmlWebView_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/qmlWebView_autogen.dir/ParseCache.txt"
  "qmlWebView_autogen"
  )
endif()
