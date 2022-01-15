#include <iostream>

void main()
{
	// donbale hesab koni
	double x, y, n, a =1, hasel =0;

	// jomle = -jomle*x*x / (i*(i+1))

	std::cout << "adad bede! ";
	std::cin >> x;
	std::cout << "Tedade mohasebat ro bede! ";
	std::cin >> n;
	y = x;
	while (a <= 2*n-1) {
		hasel += y;
		y *= -x*x / ((a + 1) * (a + 2));  //jomle ha ye 2 be bad ra hesab mikonad
		a = a + 2;
	}
	std::cout << "Hasele donbale= " << hasel << "\n";
}