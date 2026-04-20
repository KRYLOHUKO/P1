#include <iostream>
using namespace std;
#include <string>
#include <raylib.h>

namespace kris

{
	unsigned int uint = 100;
};

int main()
{

	{			 // scope
		int i = 5;
		//cout << i << endl;
	}
	
	double d = 5.131313113337771337;
	float f = 3.132334341f;// we write float at the end to actuallz be a float 
	char c = 'k';
	string op;
	bool one = 1;
	bool zero = 0;
	bool isFalse = false;
	bool isTrue = true;
	//cout << endl << d << endl << f << endl << c << endl <<  one << endl << zero << endl << boolalpha << isFalse << endl << isTrue
		//<< endl;
	unsigned int uint = 10;
	unsigned int max = -1; // -1 will turn to the max positive int value (unsigned) allowed on the system 32/64 bit
	//cout << uint << endl << max << endl;
	//cout << sizeof(max) << endl;
	//cout << sizeof(double) << endl;
	//cout << sizeof(double) << endl;
	//unsigned long long pe = -1;
	//cout << pe << endl;
	cout << uint << endl;
	cout << kris::uint << endl;
	getline(cin, op);
	return 0;			 
}