# Please make sure you have the latest version of CMake, even if it still does create the project
cmake_minimum_required(VERSION 2.8)

project(AdventOfCode)

# Make project look cleaner on Visual Studio by using project folders
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# There is no start up project, just choose one

add_subdirectory(Day1)
add_subdirectory(Day2)