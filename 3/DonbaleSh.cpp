#include <iostream>

void main()
{
	// donbale hesab koni
	double x, y, n=1 , a, factoriel, hasel = 0;

	std::cout << "adad bede! ";
	std::cin >> x;
	while (n < 101) {
		y = pow(-1, ((n + 1) / 2) + 1)    // bara ye hesab kardane alamate har jomle
			* (pow(x, n));                // bara ye hesab kardane sorate har jomle
		factoriel = 1;
		a = n;
		while (a > 0) {
			factoriel *= a;
			a--;
		}
		hasel += y / factoriel;
		n = n + 2;
	}
	std::cout << "Hasele donbale= " << hasel << "\n";
}