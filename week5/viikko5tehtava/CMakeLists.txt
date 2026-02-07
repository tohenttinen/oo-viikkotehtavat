cmake_minimum_required(VERSION 3.16)

project(viikko5tehtava LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(viikko5tehtava main.cpp
    Seuraaja.h
    Notifikaattori.h
    Notifikaattori.cpp
    Notifikaattori.cpp
    Seuraaja.cpp)

include(GNUInstallDirs)
install(TARGETS viikko5tehtava
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
