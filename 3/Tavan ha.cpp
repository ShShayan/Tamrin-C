#include <iostream>

int main()
{
	double x, z;
	int y;
	std::cout << "Yek adade aashari vared konid: x = ";
	std::cin >> x;
	std::cout << "Yek adade sahih vared konid: y = ";
	std::cin >> y;
	z = pow(x, y);
	std::cout << "x ^ y = " << z << "\n";

	return 0;
}