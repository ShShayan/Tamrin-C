#include <iostream>


void main()
{
	int a[10];
	int i;
	
	for (i = 0; i < 10; i++) {
		std::cin >> a[i];
	}
	for (i; i >= 0; i--) {
		std::cout << a[i] << "\t";
	}
	std::cout << "\n";
}