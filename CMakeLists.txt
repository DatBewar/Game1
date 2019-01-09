cmake_minimum_required(VERSION 3.0)

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
set(SFML_DIR "${DEPENDENCIES_DIR}/SFML-2.5.1/lib/cmake/SFML")
if(NOT EXISTS "${DEPENDENCIES_DIR}/SFML-2.5.1")
	if(WIN32)
		file(DOWNLOAD "https://www.sfml-dev.org/files/SFML-2.5.1-windows-vc15-32-bit.zip" "${DEPENDENCIES_DIR}/SFML.zip")
		execute_process(
			WORKING_DIRECTORY "${PROJECT_DIR}/dependencies/"
			COMMAND unzip SFML.zip)
	else()
		file(DOWNLOAD "https://www.sfml-dev.org/files/SFML-2.5.1-linux-gcc-64-bit.tar.gz" "${DEPENDENCIES_DIR}/SFML.tar.gz")
		execute_process(
			WORKING_DIRECTORY "${PROJECT_DIR}/dependencies/"
			COMMAND  tar -xzf SFML.tar.gz)
	endif()
endif()
set(OTHER_INCLUDE_H "${DEPENDENCIES_DIR}/SFML-2.5.0/include")
find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)

###################

### ENGINE ###
add_subdirectory(source)
##############
