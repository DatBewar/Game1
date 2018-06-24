cmake_minimum_required(VERSION 3.0)

project(GAME1 CXX)
include(ExternalProject)

#Project directories
set(PROJECT_DIR "${PROJECT_SOURCE_DIR}")
set(OUTPUT_DIR "${PROJECT_DIR}/OUTPUT")
set(DEPENDENCIES_DIR "${PROJECT_DIR}/dependencies")
set(SOURCE_DIR "${PROJECT_DIR}/source")
set(PROJECT_PREFIX "${OUTPUT_DIR}/PREFIX")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")

#Project output
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${OUTPUT_DIR}/bin")

### DEPENDANCIES ###
# SFML
if(WIN32)
	set(SFML_DIR "${DEPENDENCIES_DIR}/SFML-2.5.0/lib/cmake/SFML")
	if(NOT EXISTS "${DEPENDENCIES_DIR}/SFML-2.5.0")
		file(DOWNLOAD "https://www.sfml-dev.org/files/SFML-2.5.0-windows-vc15-32-bit.zip" "${DEPENDENCIES_DIR}/SFML_WIN.zip")
		execute_process(
			WORKING_DIRECTORY "${PROJECT_DIR}/dependencies/"
			COMMAND unzip SFML_WIN.zip
		)
	endif()
	set(OTHER_INCLUDE_H "${DEPENDENCIES_DIR}/SFML-2.5.0/include")
endif()
find_package(SFML 2.5 COMPONENTS system window graphics network audio)
if(NOT SFML_FOUND)
	message(FATAL_ERROR "You need SFML library")
endif()
###################

### ENGINE ###
add_subdirectory(source)
##############
