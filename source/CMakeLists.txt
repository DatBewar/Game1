project(GAME1 CXX)

set(BIN_NAME "game1")
#Compilation flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -lsfml-graphics -lsfml-window -lsfml-system")

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
	${OTHER_INCLUDE_H}
	${ENGINE_INCLUDE_H}
	${GAME_INCLUDE_H}
)

if(SFML_FOUND)
	set(BACKEND_HEADERS
		${BACKEND_HEADERS}
		engine/backend/SFML/GraphicCore-SFML.h
		engine/backend/SFML/CSprite-SFML.h
	)
	set(BACKEND_SOURCES
		${BACKEND_SOURCES}
		engine/backend/SFML/GraphicCore-SFML.cpp
		engine/backend/SFML/CSprite-SFML.cpp
	)
endif()

set(
	ENGINE_HEADERS
	engine/core/component/CDisplacement.h
	engine/core/component/CPosition.h
	engine/core/component/IComponent.h
	engine/core/component/ICSprite.h
	engine/core/entity/Entity.h
	engine/core/system/CoreFactory.h
	engine/core/system/IGraphicCore.h
	engine/core/utils/ClockTimer.h
	engine/core/utils/IdManager.h
	engine/core/utils/Types.h
	engine/core/utils/UniqueId.h
)

set(
	ENGINE_SOURCES
	engine/core/component/CDisplacement.cpp
	engine/core/component/CPosition.cpp
	engine/core/entity/Entity.cpp
	engine/core/system/CoreFactory.cpp
	engine/core/utils/ClockTimer.cpp
	engine/core/utils/IdManager.cpp
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
	${BACKEND_HEADERS}
	${BACKEND_SOURCES}
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
