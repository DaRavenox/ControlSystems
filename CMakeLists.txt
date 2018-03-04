cmake_minimum_required(VERSION 3.9)
project(ControlSystems C)

set(CMAKE_C_STANDARD 99)

add_executable(ControlSystems main.c hybridsysteminspector.c)