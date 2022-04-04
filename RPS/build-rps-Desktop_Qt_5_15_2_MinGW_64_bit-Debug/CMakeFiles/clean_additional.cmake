# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\rps_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\rps_autogen.dir\\ParseCache.txt"
  "rps_autogen"
  )
endif()
