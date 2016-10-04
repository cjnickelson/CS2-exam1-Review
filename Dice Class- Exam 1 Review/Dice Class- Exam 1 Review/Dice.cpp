#include"Dice.h"

Dice::Dice(int Sides)
{
	sides = Sides;
	srand(time(0));
}

int Dice::Roll()
{
	rolls++;
	return rand() % sides + 1;
}

int Dice::GetRolls()
{
	return rolls;
}
// Returns the number of times this dice was rolled since it was created.
int Dice::GetSides()
{
	return sides;
}