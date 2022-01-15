#include <iostream>
#include <math.h>

void main()
{
	// donbale hesab koni
	double x, y, n, t = 0, a = 1, hasel = 0;

	// jomle = -jomle*x*x / (i*(i+1))

	std::cout << "adad bede! ";
	std::cin >> x;
	y = x;
	while (fabs (y - t) >=0.000001) {
		t = y;
		hasel += y;
		y *= -x * x / ((a + 1) * (a + 2));  //jomle ha ye 2 be bad ra hesab mikonad
		a = a + 2;
	}
	std::cout << "Hasele donbale= " << hasel << "\n";
	std::cout << "Tedade jomle ha ye hesab shode " << (a + 1) / 2 << "\n";
}