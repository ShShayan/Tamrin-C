#include <iostream>
#include <math.h>

using namespace std;

void main()
{
	int a, b, n;
	cin >> a;
	for (n = 0, b = 0; a != 0; n++) {
		b += ((a % 2) * pow(10, n));
		a /= 2;
	}
	cout << b;
}