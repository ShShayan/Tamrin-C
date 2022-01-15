#include <iostream>

void main()
{
	// b m m hesab koni

	int x, y, n = 1, maghsomAlayhX = 1, BMM = 1;

	std::cout << "Adad aval ro bede! ";
	std::cin >> x;
	std::cout << "Adade dovom ro bede! ";
	std::cin >> y;
	while (n < x) {
		if (x % n == 0) {
			maghsomAlayhX = n;
			if (y % maghsomAlayhX == 0)
				BMM = maghsomAlayhX;
		}
		n++;
	}
	std::cout << "B.M.M. do adade " << x << " va " << y << " = " << BMM << "\n";
}