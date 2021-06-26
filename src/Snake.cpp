// Snake.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <stdlib.h>
#include <ncurses.h>


int main(void)
{
    initscr();
    printw("Hello World!");
    refresh();
    getch();
    endwin();
    std::cout << "Built with CMake and Curse!\n";

    return 0;
}


