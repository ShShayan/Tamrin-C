#include <iostream>

void main(void)
{
	int x, y = 0, ragham, n = 0, khata=1;
	
	std::cout << "Yek adad dar mabnaye 8 bede: ";
	std::cin >> x;
	// x dar mabna ye 8 ast
	// hal an ra be mabna ye 10 mibarim.
	// har ragham ra joda mikonim va dar 8
	// be tavane motenazere shomarande ye an zarb mikonim.
	do {
		ragham = x % 10;
		if (ragham > 7) {
			std::cout << "Adadet eshtebahe mohandes!";
			khata--;
			break;
		}
		x = x / 10;
		y = y + ragham * (pow(8, n));
		n++;
	} while (x > 0.5);

	// adade dar mabnaye 10 ra print mikonim.
	if (khata)
		std::cout << "Adade shoma dar mabnaye 10: " << y << "\n";
}