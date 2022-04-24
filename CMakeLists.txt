cmake_minimum_required(VERSION 3.11)

SET(ProjectName CTemplate)
project(${ProjectName})

set (CMAKE_CXX_STANDARD 11)

SET(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
    )

add_library(${ProjectName} SHARED ${SOURCES})
add_subdirectory(ut)
#add_executable(${ProjectName} ${SOURCES})