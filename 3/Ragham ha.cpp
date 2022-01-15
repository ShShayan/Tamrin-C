#include <iostream>

int main()
{
	int a, b, n;
	n = 0;
	std::cout << "Yek adade sahih vared konid: ";
	std::cin >> a;
	while (a>0) {
		n++;
		b = a % 10;
		a = a / 10;
		std::cout << "Raghame " << n << ": " << b <<"\n";
	}
	return 0;
}