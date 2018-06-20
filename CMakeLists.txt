cmake_minimum_required(VERSION 3.0)

project(GAME1 CXX)
include(ExternalProject)

#Project directories
set(PROJECT_DIR "${PROJECT_SOURCE_DIR}")
set(OUTPUT_DIR "${PROJECT_DIR}/OUTPUT")
set(DEPENDENCIES_DIR "${PROJECT_DIR}/dependencies")
set(SOURCE_DIR "${PROJECT_DIR}/source")
set(PROJECT_PREFIX "${OUTPUT_DIR}/PREFIX")

#Path to built dependencies
set(CMAKE_PREFIX_PATH ${CMAKE_MODULE_PATH} "${DEPENDENCIES_DIR}/SFML/cmake/Modules")

#Project output
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${OUTPUT_DIR}/bin")

### DEPENDANCIES ###
# SFML
set(SFML_ROOT "${DEPENDENCIES_DIR}/SFML")
find_package(SFML COMPONENTS system window graphics network audio)
if(SFML_FOUND)
  include_directories(${SFML_INCLUDE_DIR})
else()
  message(FATAL_ERROR "You need SFML library")
endif()
###################

### ENGINE ###
add_subdirectory(source)
##############