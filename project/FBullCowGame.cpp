#include "FBullCowGame.h"
FBullCowGame::FBullCowGame()
{
	reset();
}


int FBullCowGame::GetMaxTries() const
{ 
	return MyMaxTries;
}

int FBullCowGame::GetCurrentTry() 
{
	MyCurrentTry++;
	return MyCurrentTry;
}

bool FBullCowGame::IsGameWon() const
{
	return false;
}



void FBullCowGame::reset()
{
	const FText HiddenWord = "planet";
	MyHiddeWord = HiddenWord;
	MyMaxTries = 5;
	MyCurrentTry = 0;
	return;
}

bool FBullCowGame::GetGuessValidity(FText) 
{
	return false;
}

BullsCowCount FBullCowGame::Submitguess(FText)
{
	MyMaxTries++;
	return BullsCowCount();
}
