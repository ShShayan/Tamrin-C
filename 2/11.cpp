#include <iostream>

int main()
{
	float a, b;
	std::cout << "Adad bede:";
	std::cin >> a;
	b = a - (int) a;
	if (b < 0.5) {
		std::cout << "adadet gerd shode: " << a - b;
	}
	else
		std::cout << "adadet gerd shode: " << (int) a + 1;
	return 0;
}