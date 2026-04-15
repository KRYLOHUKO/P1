#include <iostream>
#include <string>
#include <istream>
#include <cstdlib>
#
using namespace std;

#define DEBUG_A
#ifdef DEBUG_A
#define a 30
#elif DEBUG_B
#define a 100
#else
#define a 1000
#endif
int main()

{
	int fieve = 0;
	std::getline(std::cin, fieve);
	cout << "Hello c++! \n";
	cout << a << endl;
}