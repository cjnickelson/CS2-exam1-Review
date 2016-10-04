#pragma once

#include<iostream>
#include<ctime>

using namespace std;

class Dice
{
	int sides;
	int rolls = 0;

public:
	
	Dice(int Sides);
	// The constructor sets the number of sides of the die.
	// The constructor also calls srand() to initialize 
	// the random number generator.
	int Roll();
	// Returns the results of a roll
	// i.e. a random value between 1 and the number of sides of the die
	int GetRolls();
	// Returns the number of times this dice was rolled since it was created.
	int GetSides();
};
