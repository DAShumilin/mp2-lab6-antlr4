cmake_minimum_required(VERSION 3.1)


set(PROJECT_NAME interpreter)
set(CMAKE_CXX_STANDARD 17)
project(${PROJECT_NAME} VERSION 1.0 LANGUAGES CXX)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE})
set(MP2_LIBRARY "${PROJECT_NAME}")
set(MP2_TESTS   "test_${PROJECT_NAME}")
set(MP2_INCLUDE "${CMAKE_CURRENT_SOURCE_DIR}/include")
include_directories("${MP2_INCLUDE}" gtest)
#include_directories(3rdparty/antlr4/runtime/Cpp/build/bin/include)

set(ANTLR_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/antlr4/runtime/Cpp/build/bin/include/antlr4-runtime")
set(CMAKE_SYSTEM_PROGRAM_PATH "${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/antlr4/runtime/Cpp/build/bin/bin/antlr4-runtime.dll")
set(antlr4-runtime_DIR "${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/antlr4/runtime/Cpp/build")
set(ANTLR4_LIB_DIR "${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/antlr4/runtime/Cpp/build/bin/lib")

# BUILD
add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(3rdparty/googletest)

include_directories(3rdparty/googletest/googletest/include)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# REPORT
message( STATUS "")
message( STATUS "General configuration for ${PROJECT_NAME}")
message( STATUS "======================================")
message( STATUS "")
message( STATUS "   Configuration: ${CMAKE_BUILD_TYPE}")
message( STATUS "")