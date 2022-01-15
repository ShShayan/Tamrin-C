#include <iostream>
#include <math.h>

int main()
{
	float x;
	float y;
	float z;
	std::cout << "Zele aval:";
	std::cin >> x;
	std::cout << "Zele dovom:";
	std::cin >> y;
	z= sqrt (x*x+y*y) ;
	std::cout << "Zele sevom=" << z;
	return 0;
}