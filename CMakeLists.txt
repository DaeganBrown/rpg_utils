cmake_minimum_required(VERSION 3.16)
#==================================================================================#
#= Parse control file =============================================================#
#==================================================================================#
file(STRINGS "${CMAKE_CURRENT_SOURCE_DIR}/pkg/control/control" VERSION_LINE REGEX "^Version:")

string(REGEX REPLACE "^Version:[ \t]*" "" PROJECT_VERSION "${VERSION_LINE}")


project(rpg_utils VERSION ${PROJECT_VERSION} LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Collect source files
file(GLOB_RECURSE SRC_FILES
    ${PROJECT_SOURCE_DIR}/src/*.cpp
)
add_library(${PROJECT_NAME} STATIC
    ${SRC_FILES}
)
# Public headers live in include/
target_include_directories(${PROJECT_NAME} PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

# Tests
add_executable(${PROJECT_NAME}_test
    ${PROJECT_SOURCE_DIR}/tests/test.cpp
)

# Link test executable to the library
target_link_libraries(${PROJECT_NAME}_test PRIVATE
    ${PROJECT_NAME}
)