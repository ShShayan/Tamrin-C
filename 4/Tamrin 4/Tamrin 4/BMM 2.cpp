#include <iostream>

void main()
{
	// b m m hesab koni

	int x, y, c, baghimande=1;

	std::cout << "Adad aval ro bede! ";
	std::cin >> x;
	std::cout << "Adade dovom ro bede! ";
	std::cin >> y;
	c = y;
	if (x < y) {
		c = x;
		x = y;
		y = c;
	}
	while (baghimande >= 0) {
		baghimande= x % y;
		if (baghimande == 0)
			break;
		y = baghimande;
	}
	std::cout << "B.M.M. do adade " << x << " va " << c << " = " << y << "\n";
}