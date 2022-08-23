cmake_minimum_required(VERSION 3.0.0)
project(utilities VERSION 0.1.0)

set (CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS_DEBUG_INIT "-Wall")



include_directories(${PROJECT_SOURCE_DIR}/nodes
                    
                    ) 

set (utilities_SOURCE
     nodes/nodes.cpp
    )


add_library(utilities SHARED ${utilities_SOURCE})


set_target_properties(  utilities
                        PROPERTIES
                        ARCHIVE_OUTPUT_DIRECTORY "build/debug/"
                        LIBRARY_OUTPUT_DIRECTORY "build/debug/"
                        RUNTIME_OUTPUT_DIRECTORY "build/debug/"
                    )
