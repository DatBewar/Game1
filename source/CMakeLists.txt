project(GAME1 CXX)

set(BIN_NAME "game1")
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
	engine/core/Camera.h
	engine/core/CoreFactory.h
	engine/core/component/CDisplacement.h
	engine/core/component/Component.h
	engine/core/component/CPosition.h
	engine/core/component/CSprite.h
	engine/core/system/GraphicSystem.h
	engine/core/utils/IdManager.h
	engine/core/utils/Types.h
	engine/core/utils/UniqueId.h
	engine/entity/Entity.h
	engine/map/Environment.h
	engine/map/Map.h
)

set(
	ENGINE_SOURCES
	engine/core/Camera.cpp
	engine/core/CoreFactory.cpp
	engine/core/component/CDisplacement.cpp
	engine/core/component/CPosition.cpp
	engine/core/component/CSprite.cpp
	engine/core/system/GraphicSystem.cpp
	engine/core/utils/IdManager.cpp
	engine/entity/Entity.cpp
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
	sfml-graphics
	sfml-system
	sfml-window
	sfml-network
	sfml-audio
)
