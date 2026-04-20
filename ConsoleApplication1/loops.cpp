#include <iostream>

int main()
{
				
	int a = 0;
	int b = 0;
	
	//one liner
	int d = a == b ? 10 : -10;
	
	switch (a)
	{
	case 1:	  
	{
		std::cout << " a is = 1\n";
	}
	break;
	case 2:
	{
		std::cout << "a is = 2\n";
	}
	default:
		break;
	}
	return 0;
}