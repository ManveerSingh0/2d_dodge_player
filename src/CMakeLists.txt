add_library(game_core game_core.cpp)

target_include_directories(
	game_core
	PUBLIC
	${CMAKE_SOURCE_DIR}/include
)

