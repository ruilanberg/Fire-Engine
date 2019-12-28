# CMakeList.txt : CMake project for FireEngine, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

include(${CMAKE_CURRENT_LIST_DIR}/ECS/CMakeLists.txt)

set(FIREENGINE_HEADER
	${ECS_HEADER} PARENT_SCOPE)

set(FIREENGINE_SOURCE
	${ECS_SOURCE} PARENT_SCOPE)

# Add source to this project's executable.
add_executable (FireEngine "FireEngine.cpp" "FireEngine.h" ${FIREENGINE_HEADER} ${FIREENGINE_SOURCE})

