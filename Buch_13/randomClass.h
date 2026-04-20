#ifndef RANDOM_H_
#define RANDOM_H_
#include <limits>
#include <iostream>

class Random
{
private:
	int min = 0, max = 0;
	void randomSeed();

	
public:
	void initRND(int min, int max);
	int random();
};

#endif // !RANDOM_H_
