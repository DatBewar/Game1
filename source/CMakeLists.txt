project(AWL CXX)

set(BIN_NAME "awl")
#Compilation flags
set(CMAKE_CXX_FLAGS "-Wall -o3 -lsfml-graphics -lsfml-window -lsfml-system")

# Include
set(
	ENGINE_INCLUDE_H
	"${SOURCE_DIR}/engine"
)

set(
	GAME_INCLUDE_H
	"${SOURCE_DIR}/game"
)

include_directories(
	${ENGINE_INCLUDE_H}
	${GAME_INCLUDE_H}
)

set(
	ENGINE_HEADERS
	engine/core/Component.h
	engine/core/CoreFactory.h
	engine/core/Displacement.h
	engine/core/GraphicCore.h
	engine/core/IdManager.h
	engine/core/Types.h
	engine/core/UniqueId.h
	engine/entity/Entity.h
	engine/entity/Squad.h
	engine/map/Cell.h
	engine/map/Environment.h
	engine/map/Map.h
)

set(
	ENGINE_SOURCES
	engine/core/CoreFactory.cpp
	engine/core/Displacement.cpp
	engine/core/GraphicCore.cpp
	engine/core/IdManager.cpp
	engine/entity/Entity.cpp
	engine/entity/Squad.cpp
	engine/map/Cell.cpp
	engine/map/Environment.cpp
	engine/map/Map.cpp
)

set(
	GAME_SOURCES
	main.cpp
	game/Game.cpp
)

add_library(
	engine-lib
	OBJECT
	${ENGINE_HEADERS}
	${ENGINE_SOURCES}
)

target_include_directories(
	engine-lib
	PUBLIC
	${ENGINE_INCLUDE_H}
)

add_executable(
	${BIN_NAME}
	${GAME_SOURCES}
	$<TARGET_OBJECTS:engine-lib>
)

target_link_libraries(
	${BIN_NAME}
	${SFML_LIBRARIES}
	${SFML_DEPENDENCIES}
)