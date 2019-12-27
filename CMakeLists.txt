# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

set (CMAKE_CXX_STANDARD 11)

project ("FireEngine")

# Include sub-projects.

add_subdirectory ("FireEngine")
add_subdirectory ("test")