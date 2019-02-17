cmake_minimum_required(VERSION 3.0.0)
project(R_LIB VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(R_LIB R_LIB.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_subdirectory(C)
add_subdirectory(Coord)
add_subdirectory(Debug)
add_subdirectory(Input)
add_subdirectory(ListStructures)
add_subdirectory(ObjectBase)
add_subdirectory(String)
add_subdirectory(TestClasses)
add_subdirectory(Thread)