cmake_minimum_required(VERSION 3.31)

project(2d_dodge_player VERSION 0.0.1 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


include(FetchContent)
FetchContent_Declare(
  SFML
  GIT_REPOSITORY https://github.com/SFML/SFML.git
  GIT_TAG 3.0.2
  GIT_SHALLOW ON
  EXCLUDE_FROM_ALL
  SYSTEM
) 
FetchContent_MakeAvailable(SFML)



add_executable(main main.cpp)


target_link_libraries(main PRIVATE SFML::Graphics)
