#include "Game.h"

Game::Game() {
    board[0][0].pos = Cell::UPLEFT;
    board[size-1][0].pos = Cell::UPRIGHT;
    board[size-1][0].pos = Cell::DOWNRIGHT;
    board[0][size-1].pos = Cell::DOWNLEFT;
    for (int i = 1; i < size-1; i++) {
        board[i][0].pos = Cell::LEFT;
        board[0][i].pos = Cell::UP;
        board[size-1][i].pos = Cell::DOWN;
        board[i][size-1].pos = Cell::RIGHT;
    }

};

void Game::clearBoard()
{
	for (int i=0; i<size;i++)
		for (int j=0; j<size; j++) board[i][j].alive=false;
}

void Game::printBoard() {
    for (auto &row : board) {
        std::cout << std::endl;
        for (auto &el : row) // el means element
            std::cout << (el.alive ? '*' : ' '); //std::cout << el.c;

    }
}

void Game::updateBoard() {
    Cell tempBoard[size][size];

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            tempBoard[i][j] = board[i][j];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            updateCell(board[i][j], tempBoard[i][j], i, j);
        }
    }

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            board[i][j] = tempBoard[i][j];
}


void Game::run() {

    init();

    int i = 0;
    while (i++ < 100000) {
        updateBoard();
        printBoard();
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        system("cls");
    }
}

void Game::updateCell(Cell &cell, Cell &tempCell, int i, int j) {

    tempCell.neighbours = 0;

    switch (cell.pos) {
        case Cell::UPLEFT: {
            if (board[0][1].alive) tempCell.neighbours++;
            if (board[1][0].alive) tempCell.neighbours++;
            if (board[1][1].alive) tempCell.neighbours++;
            break;
        }

        case Cell::DOWNLEFT: {
            if (board[size - 2][0].alive) tempCell.neighbours++;
            if (board[size - 2][1].alive) tempCell.neighbours++;
            if (board[size - 1][1].alive) tempCell.neighbours++;
            break;
        }

        case Cell::DOWNRIGHT: {
            if (board[size - 2][size - 1].alive) tempCell.neighbours++;
            if (board[size - 1][size - 2].alive) tempCell.neighbours++;
            if (board[size - 2][size - 2].alive) tempCell.neighbours++;
            break;
        }
        case Cell::UPRIGHT: {
            if (board[0][size - 2].alive) tempCell.neighbours++;
            if (board[1][size - 1].alive) tempCell.neighbours++;
            if (board[1][size - 2].alive) tempCell.neighbours++;
            break;
        }
        case Cell::INSIDE: {
            if (board[i + 1][j + 1].alive) tempCell.neighbours++;
            if (board[i - 1][j - 1].alive) tempCell.neighbours++;
            if (board[i - 1][j + 1].alive) tempCell.neighbours++;
            if (board[i + 1][j - 1].alive) tempCell.neighbours++;
            if (board[i][j + 1].alive) tempCell.neighbours++;
            if (board[i][j - 1].alive) tempCell.neighbours++;
            if (board[i + 1][j].alive) tempCell.neighbours++;
            if (board[i - 1][j].alive) tempCell.neighbours++;
            break;
        }
        case Cell::UP: {
            if (board[0][j - 1].alive) tempCell.neighbours++;
            if (board[0][j + 1].alive) tempCell.neighbours++;
            if (board[1][j + 1].alive) tempCell.neighbours++;
            if (board[1][j - 1].alive) tempCell.neighbours++;
            if (board[1][j].alive) tempCell.neighbours++;
            break;
        }
        case Cell::DOWN: {
            if (board[size - 1][j - 1].alive) tempCell.neighbours++;
            if (board[size - 1][j + 1].alive) tempCell.neighbours++;
            if (board[size - 2][j + 1].alive) tempCell.neighbours++;
            if (board[size - 2][j - 1].alive) tempCell.neighbours++;
            if (board[size - 2][j].alive) tempCell.neighbours++;
            break;
        }
        case Cell::RIGHT: {
            if (board[i - 1][size - 1].alive) tempCell.neighbours++;
            if (board[i + 1][size - 1].alive) tempCell.neighbours++;
            if (board[i - 1][size - 2].alive) tempCell.neighbours++;
            if (board[i + 1][size - 2].alive) tempCell.neighbours++;
            if (board[i][size - 2].alive) tempCell.neighbours++;
            break;
        }
        case Cell::LEFT: {
            if (board[i - 1][0].alive) tempCell.neighbours++;
            if (board[i + 1][0].alive) tempCell.neighbours++;
            if (board[i - 1][1].alive) tempCell.neighbours++;
            if (board[i + 1][1].alive) tempCell.neighbours++;
            if (board[i][1].alive) tempCell.neighbours++;
            break;
        }
    }

    if (!tempCell.alive && tempCell.neighbours == 3)
	{
	 tempCell.alive = true;
	}
    else if (tempCell.alive && (tempCell.neighbours != 2 && tempCell.neighbours != 3))
	{
	 tempCell.alive = false;
	}
}

void Game::init() {

};

Cell Game::board[10][10];
