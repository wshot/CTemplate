cmake_minimum_required(VERSION 3.11)
set (CMAKE_CXX_STANDARD 11)

SET(ProjectName CTemplateTest)
project(${ProjectName})

#SET(TARGET_LIB CTemplate)

SET(SOURCES_TO_TEST
    ${CMAKE_CURRENT_SOURCE_DIR}/../src/adapter/DisplayAdapter.cpp
    )

SET(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/tc_main.cpp
    )

add_executable(${ProjectName} ${SOURCES} ${SOURCES_TO_TEST})
target_include_directories(${ProjectName} PRIVATE ../include /usr/local/include)
target_link_directories(${ProjectName} PRIVATE /usr/local/lib)
target_link_libraries(${ProjectName} PRIVATE gtest gtest_main pthread)
