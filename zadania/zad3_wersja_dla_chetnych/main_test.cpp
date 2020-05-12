/// Nalezy zmodyfikowac plik
/// tak aby 
/// program sie kompilowal i poprawnie wykonywal,
/// dajac pozywtywny wynik wszystkim 6 testom.
/// nie wolno modyfikowac innych plikow
/// oraz dodawac wlasnych includow
/// Pomocne bedzie zajrzenie do plikow Game.cpp oraz Cell.h np. w dokumentacji


#include "gtest/gtest.h"
#include "main.cpp"
#include "Game.h"
#include "Cell.h"


/* Uwaga: plansza jest rozmiaru 10x10
   do funkcji updateCell musimy przekazac indexy zgodny z enumem pozycji

   prosze uzyc najmniejszych mozliwych, przykladowo:

   INSIDE: [1][1]
   UP (and not in corner): [0][1]
   RIGHT: [1][9]
   DOWNRIGHT [9][9]   (przy cornerach mamy jeden wybor) 

*/

/* TEST(Test, EXAMPLE_INSIDE_dead_6nbours)
{
	Game game;
	Cell currentCell;

	game.board[0][0].alive = true; //first alive neighbour
	game.board[0][1].alive = true;
	game.board[0][2].alive = true;
	game.board[2][0].alive = true;
	game.board[2][1].alive = true;
	game.board[2][2].alive = true; // 6th alive neighbour

	currentCell.pos = Cell::INSIDE;
	currentCell.alive = false;
	Cell copyCell = currentCell;
	game.updateCell(currentCell,copyCell,1,1);

	EXPECT_EQ( false ,copyCell.alive);
	game.clearBoard();
} */

TEST(Test, INSIDE_dead_3nbours)
{
        /* uzupelnij */
	game.clearBoard();
}

TEST(Test, INSIDE_alive_3nbours)
{
        /* uzupelnij */
	game.clearBoard();
}

TEST(Test, INSIDE_alive_7nbours)
{
        /* uzupelnij */
	game.clearBoard();
}

TEST(Test, LEFT_alive_1nbour)
{
        /* uzupelnij */
	game.clearBoard();
}

TEST(Test, UPLEFT_alive_1nbour)
{
        /* uzupelnij */
	game.clearBoard();
}

TEST(Test, DOWN_dead_5nbours)
{
        /* uzupelnij */
	game.clearBoard();
}


int main(int argc, char**argv)
{
testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
