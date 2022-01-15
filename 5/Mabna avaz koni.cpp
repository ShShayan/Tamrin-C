#include <iostream>
#include <math.h>

using namespace std;

void main()
{
	int a, b, x[10], n, p;
	cout << "adad morede nazar ra vared konid: ";
	cin >> a;
	cout << "mabna ye morede nazar ra vared konid: ";
	cin >> b;
	for (n = 0; a != 0; n++) {
		x[n] = a % b;
		a /= b;
	}
	n--;
	for (; n >= 0; n--)
		cout << x[n];
}