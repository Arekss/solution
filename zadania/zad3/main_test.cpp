/// Nalezy zmodyfikowac plik
/// tak aby 
/// program sie kompilowal i poprawnie wykonywal,
/// dajac pozywtywny wynik wszystkim 3 testom.
/// nie wolno modyfikowac innych plikow
/// oraz dodawac wlasnych includow

/// Pomocne bedzie zajrzenie do plikow Game.cpp oraz Cell.h
/// Program mozna uzupelnic na wiele sposobow,
/// Kazdy powodujacy 'zielone' testy jest dobry



#include "gtest/gtest.h"
#include "main.cpp"
#include "Game.h"
#include "Cell.h"

TEST(Test, first)
{
	Game game;
	Cell currentCell;

	currentCell.pos = Cell:: /*uzupelnij*/      ;    // podpowiedz: Enum
	currentCell.alive =  /* uzupelnij */      ;      // podpowiedz: bool
	Cell copyCell = currentCell;

	game.updateCell(currentCell,copyCell,0,0);

	EXPECT_EQ( /* uzupelnij */ ,copyCell.alive); // podpowiedz: bool
}

TEST(Test, second)
{
	Game game;
	Cell currentCell;

	currentCell.pos = Cell:: /*uzupelnij*/      ;    // podpowiedz: Enum
	currentCell.alive =  /* uzupelnij */      ;      // podpowiedz: bool
	Cell copyCell = currentCell;

	game.updateCell(currentCell,copyCell,0,0);

	EXPECT_EQ( /* uzupelnij */ ,copyCell.alive); // podpowiedz: bool
}

TEST(Test, third)
{
	Game game;
	Cell currentCell;

	currentCell.pos = Cell:: /*uzupelnij*/      ;    // podpowiedz: Enum
	currentCell.alive =  /* uzupelnij */      ;      // podpowiedz: bool
	Cell copyCell = currentCell;

	game.updateCell(currentCell,copyCell,0,0);

	EXPECT_EQ( /* uzupelnij */ ,copyCell.alive); // podpowiedz: bool
}

int main(int argc, char**argv)
{
testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
