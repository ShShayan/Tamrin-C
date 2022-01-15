#include <iostream>

int main()
{
	float x;
	float y;
	float a;
	float b;
	float c;
	float d;
	float e;
	float f{};
	std::cout << "moalefe ha ye matrise 2*2 ra be tartib vared konid! \n";
	std::cout << "a";
	std::cin >> a;
	std::cout << "b";
	std::cin >> b;
	std::cout << "c";
	std::cin >> c;
	std::cout << "d";
	std::cin >> d;
	std::cout << "moalefe ha ye bordar ra vared konid! \n";
	std::cout << "e";
	std::cin >> e;
	std::cout << "f";
	std::cin >> f;
	x = (a + b) * e;
	y = (c + d) * f;
	std::cout << "x = " << x << "\n";
	std::cout << "y = " << y << "\n";
	return 0;
}