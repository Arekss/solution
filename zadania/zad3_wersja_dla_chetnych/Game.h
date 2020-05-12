#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <chrono>
#include <thread>

#include "Cell.h"

class Game {
public:
    Game();

    static const int size = 10;
    static Cell board[size][size];
    static void clearBoard();

    void init();
    void run();
    void printBoard();
    void updateBoard();
    void updateCell(Cell& cell,Cell& tempCell, int i, int j);

};


#endif
