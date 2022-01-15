#include <iostream>

int main()
{
	int a;
	int b;
	int c;
	int d;
	std::cout << "adad bede bodo! (do raghami bashe) = ";
	std::cin >> a;
	b = a / 10;
	c = a - (b * 10);
	d = c * 10 + b;
	std::cout << a << " - " << d << " = " << a-d << "\n";
	std::cout << "Booos!";
	return 0;
}