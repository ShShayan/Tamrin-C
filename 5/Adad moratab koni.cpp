#include <iostream>
#include <math.h>

using namespace std;

void main()
{
	int adad, a, b, n, p;
	cin >> adad;
	b = adad;
	for (a = 0; a <= 9; a++) {
		for (; b > 0; b /= 10) {
			if (b % 10 == a)
				cout << a;
		}
		b = adad;
	}
}