cmake_minimum_required(VERSION 3.10)
project(Snake)

set(SOURCES
	src/Snake.cpp
   )

add_executable(Snake ${SOURCES})

#Curses is an API used to create the GUI for the snake game
if(WIN32 OR MSVC)
	find_package(pdcurses)
	target_include_directories(Snake PRIVATE
		${PDCURSES_LIBRARY}
	)
	include_directories(${PDCURSES_INCLUDE_DIR})
	target_link_libraries(Snake PRIVATE
		PDcurses
	)
else(UNIX)
	find_package(Curses REQUIRED)
	target_include_directories(Snake PRIVATE
		${CURSES_LIBRARY}
	)
	include_directories(${CURSES_INCLUDE_DIR})
	target_link_libraries(Snake ncurses)
endif()


target_include_directories(Snake PRIVATE
	${PROJECT_SOURCE_DIR}/inc
	#${CURSES_LIBRARY}
)



