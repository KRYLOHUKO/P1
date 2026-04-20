#include "randomClass.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
void Random::initRND(int min, int max)
{
	this->min = min;
	this->max = max;
	static bool bFirst = true;
	if (bFirst)
	{
		randomSeed();
		bFirst = false;
	}
}
void Random::randomSeed()
{
	unsigned int seed = (unsigned int)time(NULL);
	std::srand(seed);
}

						
int Random::random()
{
	
	return min + std::rand() % (max + 1 - min);
}