#include <iostream>

int main()
{
	double x , y, n=0, z, shomarande=0;
	srand(time(0));
	std::cout << "n    x     y     z" << "\n";
	while (n < 1000) {
		n++;
		x = (rand() % 10000)/ 10000.0;
		y = (rand() % 10000) / 10000.0;
		z = sqrt(pow(x, 2) + pow(y, 2));
		if (z < 1)
			shomarande++;
		std::cout << n << "    " << x << "    " << y << "    " << z << "\n";
	}
	std::cout << "Javab= " << shomarande / 1000;

	return 0;
}