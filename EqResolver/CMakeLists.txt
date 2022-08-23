cmake_minimum_required(VERSION 3.0.0)
project(EqSolver VERSION 0.1.0)

add_subdirectory(src/libraries/utilities) 
add_subdirectory(src/libraries/nearXYZ) 

add_executable(EqSolver src/main.cpp)

