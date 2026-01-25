cmake_minimum_required(VERSION 3.16)

project(viikon3tehtava LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(viikon3tehtava main.cpp)

include(GNUInstallDirs)
install(TARGETS viikon3tehtava
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
