cmake_minimum_required(VERSION 3.16)
project(game C)

set(CMAKE_C_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR}/include)
link_directories(${CMAKE_SOURCE_DIR}/libs)

add_executable(game src/main.c
        include/player.h
        src/player.c)

target_link_libraries(game
        ${CMAKE_SOURCE_DIR}/libs/libraylib.a
        opengl32
        gdi32
        winmm
)
