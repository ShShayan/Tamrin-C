#include <iostream>
#include <math.h>

using namespace std;

void main()
{
	int a, b[185], i = 0, m, n;
	cin >> a;
	m = a;
	for (;m > 0; i++) {
		b[i] = m % 10;
		m /= 10;
	}
	i--;
	n = i;
	for (; i >= 0; i--)
		cout << b[n - i];
}