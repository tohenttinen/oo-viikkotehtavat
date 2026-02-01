cmake_minimum_required(VERSION 3.16)

project(viikon4tehtava LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(viikon4tehtava main.cpp
    PANKKITILI.h
    PANKKITILI.cpp
    Luottotili.h
    LUOTTOTILI.cpp
    ASIAKAS.h
    ASIAKAS.cpp)

include(GNUInstallDirs)
install(TARGETS viikon4tehtava
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
