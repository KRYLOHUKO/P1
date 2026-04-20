#include "piggybank.h"
#include <iostream>

void Piggybank::initPiggyBank(int coin, int counter, int maxAmount, bool boolState, int surplus)
{
	this->coin = coin;
	this->counter = counter;
	this->maxAmount = maxAmount;
	this->boolState = boolState;
	this->surplus = surplus;
}

void Piggybank::display()
{
	
	surplus = counter - maxAmount;
	if (surplus < 0)
	{
		surplus = 0;
	}
	std::cout << "The amount of coins in your piggy bank is: " << counter <<  std::endl << "Your piggy bank can have a maximum amount of " << maxAmount << " coins!" << "\nThe surplus is " << surplus << " coin\n";

}			
int Piggybank::addCoin(int coin)
{
	std::cout << "---------------------------" << std::endl;
	std::cout << "Added the coin successfully" << std::endl;
	std::cout << "---------------------------" << std::endl;
	
	//counter += coin;
	counter += coin;
	std::cout << "The current amount of coin is " << counter << std::endl;
	if (counter >= maxAmount)
	{
		this->boolState = true;
		this->breakInto(boolState);
		
	}
	else
	{
		return counter;
	}
	
}
bool Piggybank::isEmpty()
{
	std::cout << "Is the piggy bank empty?\n";
	if (counter <= 0)
	{
		std::cout << "The piggy bank is empty!!!\n";
		return true;
	}
	else
	{
		std::cout << "The piggy bank is not empty!!\n" << "It has " << counter << " coins in it!\n";
		std::cout << "---------------------------" << std::endl;
		return false;
	}
}
bool Piggybank::isFull()
{
	std::cout << "Is the piggy bank full?\n";
	if (counter >= maxAmount)
	{
		//surplus = counter - maxAmount;
		counter = maxAmount;
		std::cout << "The piggy bank is FULL!!!\n";
		std::cout << "It has reached the max capacity of "<< counter <<" coins" << std::endl;
		//std::cout << "You have a surplus of " << surplus << " coin" << std::endl;
		return true;
	}
	else
	{
		std::cout << "The piggy bank is not full!!\n" << "It has " << counter << " coins in it!\n";
		std::cout << "---------------------------" << std::endl;
		return false;
	}
}
bool Piggybank::isBroken()
{
	if (boolState)
	{	
		std::cout << "---------------------------" << std::endl;
		std::cout << "The piggy bank is open\n";
		std::cout << "---------------------------" << std::endl;
		
		return true;
	}
	else
	{
		std::cout << "---------------------------" << std::endl;
		std::cout << "The piggy bank is still whole\n";
		std::cout << "---------------------------" << std::endl;
		return false;
	}
}
void Piggybank::breakInto(bool boolState)
{
	if (this->isBroken())
	{
		surplus = counter - maxAmount;
		std::cout << "The piggy bank has been broken into!\n" << maxAmount 
			+ surplus << " coins have been spread on the ground" << std::endl;
		//std::cout << "You have a surplus of " << surplus << " coin" << std::endl;
	}
	else
	{
		std::cout << "---------------------------" << std::endl;
		std::cout << "The piggy bank is still whole\n";
		std::cout << "---------------------------" << std::endl;
		
	}
}				