cmake_minimum_required(VERSION 3.31)

project(2d_dodge_player VERSION 0.0.1 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_subdirectory(sub_modules/SDL)


add_executable(main main.cpp)


target_link_libraries(main PRIVATE SDL3::SDL3)
