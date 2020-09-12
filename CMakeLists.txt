cmake_minimum_required(VERSION 3.10)

set(project_name "basic_sfml")

project(${project_name})

add_compile_options(-Wall -Wextra -Wpedantic)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(${project_name} src/main.cpp src/game_engine.cpp)

target_link_libraries(${project_name} sfml-graphics sfml-window sfml-system)