#include <iostream>

int main()
{
	float a;
	std::cout << "Saaaalam! begoo bebinam Shayan chand ta dooset dare? ";
	std::cin >> a;
	if (11 > a) {
		std::cout << "Man bahat harfi nadaram" << "\n";
	}
	if ((a >= 11) && (99.5 > a)) {
		std::cout << "Hata nazdik ham nisti!" << "\n";
	}
	if ((a > 99.5) && (999.5>a)) {
		std::cout << "Dari nazdik mishi!" << "\n";
	}
	if (a>999.5) {
		std::cout << "Afarin! too mahdode dorosti! :-* " << "\n";
		std::cout << "Boos eshghol <3 <3 <3" << "\n";
	}
	system("pause");
}
