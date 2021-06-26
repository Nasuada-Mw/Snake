cmake_minimum_required(VERSION 3.10)
project(Snake)

#Curses is an API used to create the GUI for the snake game
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

set(SOURCES
	src/Snake.cpp)

add_executable(Snake ${SOURCES})
target_link_libraries(Snake ncurses)

target_include_directories(Snake PRIVATE
	${PROJECT_SOURCE_DIR}/inc
	${CURSES_LIBRARY})



