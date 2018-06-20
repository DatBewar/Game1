cmake_minimum_required(VERSION 3.0)

project(GAME1 CXX)
include(ExternalProject)

#Project directories
set(PROJECT_DIR "${PROJECT_SOURCE_DIR}")
set(OUTPUT_DIR "${PROJECT_DIR}/OUTPUT")
set(DEPENDENCIES_DIR "${PROJECT_DIR}/dependencies")
set(SOURCE_DIR "${PROJECT_DIR}/source")
set(PROJECT_PREFIX "${OUTPUT_DIR}/PREFIX")

#Project output
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${OUTPUT_DIR}/bin")

### DEPENDANCIES ###
# SFML
set(SFML_DIR "${DEPENDENCIES_DIR}/SFML/cmake")
find_package(SFML 2.5 COMPONENTS system window graphics network audio)
if(NOT SFML_FOUND)
  message(FATAL_ERROR "You need SFML library")
endif()
###################

### ENGINE ###
add_subdirectory(source)
##############