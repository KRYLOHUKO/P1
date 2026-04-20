#include "randomClass.h"
#include <iostream>

using namespace std;

class Player
{
private:
	int score;
public:
	void gamble();
	int getScore();
};
int Player::getScore() { return score; }
void Player::gamble()
{
	Random dice;
	dice.initRND(1, 6);
	int i, rn; // INDEx, ZUFALLSZAHL
	score = 0;
	for (i=0; i  < 5; ++i)
	{
		rn = dice.random();
		cout << rn << " , ";
		score += rn;
	}
	cout << " Summe: " << score << endl;
}
int main()
{

	Player player1, player2;
	char yn;
	do
	{
		cout << "\n1. Spieler: "; player1.gamble();
		cout << "\n2. Spieler: "; player2.gamble();
		if (player1.getScore() > player2.getScore())
		{
			cout << "\nDer 1. Spieler gewinnt." << endl;
		}
		else if (player1.getScore() < player2.getScore())
		{
			cout << "\nDer 2. Spieler gewinnt." << endl;
		}
		else
		{
			cout << "\nUNENTSCHIEDEN." << endl;
		}
		cout << "\nFortsetzen (y/n)?" << endl;
		cin >> yn;
	} while (yn == 'y' || yn == 'Y');		// when we input Y/y or we continue the game


	return 0;
}