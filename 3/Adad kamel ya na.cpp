#include <iostream>

void main()
{
	// aval mikhaym bebinim adad vorodi kamel hast ya na.
	// adade khame = jame maghsom alayh hash.

	int x, maghsomAlayh, majmo =0, n = 2;
	
	std::cout << "Yek adad bede: ";
	std::cin >> x;
	do {
		// maghsom alayh ha ra peyda mikonim.
		if (x % n == 0) {
			maghsomAlayh = n;
			majmo += n;
		}
		n++;

	} while (n< sqrt (x) +1);

	if (majmo == x) {
		std::cout << "Adad kamel ast!" << "\n";
	}
	else
		std::cout << "Adad kamel nist!" << "\n";
		
}