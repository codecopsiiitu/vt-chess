#include <string>
using FText = std::string;
struct BullsCowCount 
{
	int Bulls = 0;
	int Cows = 0;
};
class FBullCowGame
{
public:
	FBullCowGame();
	void reset();
	int GetMaxTries() const;
	int GetCurrentTry() ;
	bool IsGameWon() const;
	bool GetGuessValidity(FText) ;
	BullsCowCount Submitguess(FText);
private:
	int MyMaxTries ;
	int MyCurrentTry ;
	FText MyHiddeWord;
};
