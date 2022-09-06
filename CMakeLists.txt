cmake_minimum_required(VERSION 3.15 FATAL_ERROR)
project(logger VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    add_compile_options(-Wall -Wextra -Wpedantic)
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    add_compile_options(/W4)
else ()
    message(WARNING "Unknown Compiler ${CMAKE_CXX_COMPILER_ID}")
endif ()

include_directories(include)
file(GLOB_RECURSE sourceFiles CONFIGURE_DEPENDS "source/*.cpp")

add_executable(${PROJECT_NAME} ${sourceFiles})
