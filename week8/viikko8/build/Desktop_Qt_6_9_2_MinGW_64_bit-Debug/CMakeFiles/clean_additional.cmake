# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\viikko8_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\viikko8_autogen.dir\\ParseCache.txt"
  "viikko8_autogen"
  )
endif()
