#include <iostream>

void main()
{
	// donbale hesab koni
	double x, n=1 , factoriel = 1, hasel = 0;

	std::cout << "adad bede! ";
	std::cin >> x;
	while (n < 101) {
		factoriel *= n;
		hasel += pow(x, n) / factoriel;
		n++;
	}
	std::cout << "Hasele donbale= " << hasel << "\n";
}