#include <iostream>
#include <math.h>

using namespace std;

void main()
{
	int adad, a[100], b[100], n, m, p;
	cin >> adad;
	for (n = 0; adad > 0; n++) {
		a[n] = adad % 10;
		adad /= 10;
	}
	n--;
	for (n, m = 0; n >= 0; --n) {
		if (a[n] % 2 == 0) {
			b[m] = a[n];
			m++;
		}
	}
	m--;
	p = m;
	for (m; m >= 0; m--) {
		cout << b[p - m];
	}
}