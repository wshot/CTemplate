cmake_minimum_required(VERSION 3.11)
set (CMAKE_CXX_STANDARD 11)

SET(ProjectName CTemplateTest)
project(${ProjectName})

SET(TARGET_LIB CTemplate)

SET(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/tc_main.cpp
    )

add_executable(${ProjectName} ${SOURCES})
target_include_directories(${ProjectName} PRIVATE ../include /usr/local/include)
target_link_directories(${ProjectName} PRIVATE /usr/local/lib)
target_link_libraries(${ProjectName} PRIVATE ${TARGET_LIB} gtest gtest_main pthread)
