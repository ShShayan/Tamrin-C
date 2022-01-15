#include <iostream>
#include <math.h>

using namespace std;

void main()
{
	double x[100], tedad, miyangin, majmo, para[100], kandegi;
	int n;
	cout << "Tedad ra vared konid: ";
	cin >> tedad;
	for (n = 0; n < tedad; n++) {
		cin >> x[n];
	}
	n--;
	for (majmo = 0; n >= 0; n--) {
		majmo += x[n];
	}
	miyangin = majmo / tedad;
	cout << "Miyangin adad: " << miyangin << "\n";
	n++;
	for (; n < tedad; n++) {
		para[n] = pow((x[n] - miyangin), 2);
	}
	n--;
	for (kandegi = 0; n >= 0; n--) {
		kandegi += para[n];
	}
	cout << "Parakandegi adad: " << sqrt(kandegi / tedad);
}