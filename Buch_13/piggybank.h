#ifndef PIGGYBANK_H_
#define PIGGYBANK_H_

class Piggybank
{
private:
	int counter;
	int maxAmount;
	bool boolState;
	int coin;
	int surplus;

public:
	void display();
	void initPiggyBank(int coin, int counter, int maxAmount, bool boolState,  int surplus);
	int addCoin(int coin);
	bool isEmpty();
	bool isFull();
	bool isBroken();
	void breakInto(bool boolState);
};

#endif // !PIGGYBANK_H_