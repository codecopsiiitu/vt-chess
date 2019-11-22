#include<iostream>
#include<string>
#include "FBullCowGame.h"

int intro();
void PlayGame();
FText guess();
bool AskToPlayAgain();
FBullCowGame BGame;

int main()
{
	FBullCowGame hello;
	
	do
	{
		BGame.reset();
		intro();
		PlayGame();
	} 
	while (AskToPlayAgain());
}

int intro()
{
	
	std::cout << "Welcome to bulls and cows , a fun word game " << std::endl;
	std::cout << "Can you guess the 9 letter isogram i am thinking off?"<<std::endl<<"\n";
	return 0;
}


void PlayGame()
{
	int Maxtries = BGame.GetMaxTries();
	for (int i = 0; i < Maxtries ; i++)
	{
		std::cout << "Your guess was - " << guess()<< std::endl; //TODO make a list of invalid guesses
	}
	//TODO Summarise the game
}

FText guess()
{
	int Current = BGame.GetCurrentTry();
	FText guess1;
	std::cout << "Enter your guess " << Current <<".  " <<std::endl;
	getline(std::cin, guess1);
	return guess1;
}
		
bool AskToPlayAgain()
{
	FText a;
	std::cout << "Do you want to play again\n";
	std::cout << "Type anything starting with 'Y' or 'y' to continue playing. \n";
	getline(std::cin, a);
	return (a[0] == 'y' || a[0] == 'Y');
	
}