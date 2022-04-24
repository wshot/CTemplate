cmake_minimum_required(VERSION 3.11)
set (CMAKE_CXX_STANDARD 11)

SET(ProjectName CTemplate)
project(${ProjectName})

SET(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
    )

# Static library (Display)
SET(ADAPTER_NAME display_adapter)
SET(ADAPTER_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/adapter/DisplayAdapter.cpp
)
add_library(${ADAPTER_NAME} STATIC ${ADAPTER_SOURCES})

# Binary
set(CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} /usr/local/Cellar/glib/2.62.2/lib /usr/local/opt/gettext/lib)
LINK_DIRECTORIES(${CMAKE_LIBRARY_PATH})
add_executable(${ProjectName} ${SOURCES})
target_include_directories(${ProjectName} PRIVATE /usr/local/include /usr/local/include/glib-2.0 /usr/local/Cellar/glib/2.62.2/lib/glib-2.0/include)
target_link_libraries(${ProjectName} ${ADAPTER_NAME} glib-2.0 intl)

# Unit test
add_subdirectory(ut)
