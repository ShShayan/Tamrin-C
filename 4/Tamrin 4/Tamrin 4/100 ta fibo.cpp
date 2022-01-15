#include <iostream>


void main()
{
	double a = 1, b = 1, c = 1, n = 3;
	std::cout << "#1" << "\t" << c << "\n";
	std::cout << "#2" << "\t" << b << "\n";
	for (n; n < 101; ++n) {
		a = b + c;
		std::cout << "#" << n << "\t" << a << "\n";
		c = b;
		b = a;
	}
}