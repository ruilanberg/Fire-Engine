# CMakeList.txt : CMake project for FireEngine, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

add_subdirectory("ECS")

set(FIREENGINE_HEADER
	${ECS_HEADER})

# Add source to this project's executable.
add_executable (FireEngineTest "FireEngine.cpp" "FireEngine.h" ${FIREENGINE_HEADER})

