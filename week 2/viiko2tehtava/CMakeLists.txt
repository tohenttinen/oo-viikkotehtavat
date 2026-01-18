cmake_minimum_required(VERSION 3.16)

project(viiko2tehtava LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(viiko2tehtava Game.cpp
    Game.h
    main.cpp)

include(GNUInstallDirs)
install(TARGETS viiko2tehtava
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
