cmake_minimum_required(VERSION 3.0.0)
project(nearXYZ VERSION 0.1.0)

set (CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS_DEBUG_INIT "-Wall")



include_directories(${PROJECT_SOURCE_DIR}/../
                    ) 

set (nearXYZ_SOURCE
     nearXYZ/nearXYZ.cpp
     controlMatrix/theMatrix.cpp
    )


add_library(nearXYZ ${nearXYZ_SOURCE})

add_library(utilities_import SHARED IMPORTED)
set_property(TARGET utilities_import PROPERTY IMPORTED_LOCATION  ${PROJECT_SOURCE_DIR}/../../../build/utilities/build/debug/libutilities.dll)

set_target_properties(nearXYZ
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "build/debug/"
    LIBRARY_OUTPUT_DIRECTORY "build/debug/"
    RUNTIME_OUTPUT_DIRECTORY "build/debug/"
)

target_link_libraries ( nearXYZ
                        utilities_import
                      )
