# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\viiko7tehtava1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\viiko7tehtava1_autogen.dir\\ParseCache.txt"
  "viiko7tehtava1_autogen"
  )
endif()
