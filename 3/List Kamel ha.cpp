#include <iostream>

void main()
{
	// aval mikhaym bebinim adad vorodi kamel hast ya na.
	// adade khame = jame maghsom alayh hash.

	int x = 1, maghsomAlayh, majmo, n;
	
	while (x <101) {
		n = 1;
		majmo = 0;
		while (n < sqrt(x) + 1) {
			// maghsom alayh ha ra peyda mikonim.
			if (x % n == 0) {
				maghsomAlayh = n;
				majmo += maghsomAlayh;
			}
			n++;
		}

		if (majmo == x) {
			std::cout << x << " Adad kamel ast!" << "\n";
		}
		x++;
	}
		
}