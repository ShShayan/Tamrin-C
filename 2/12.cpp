#include <iostream>

int main()
{
	srand(time(0));
	int a;
	a = rand() % 6 + 12;
	std::cout << a;
	return 0;
}