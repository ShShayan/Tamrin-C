#include <iostream>
#include <math.h>

using namespace std;

void main()
{
	int a, b, c, maghsom[100], x, n, jam;
	cout << "Adad ha ye had ro bede: ";
	cin >> a >> b;
	if (a > b) {
		c = a;
		a = b;
		b = c;
	}
	for (; a < b; ++a) {
		for (x = 1, n = 0; x < a; x++) {
			if (a % x == 0) {
				maghsom[n] = x;
				n++;
			}
		}
		for (n--, jam = 0; n >= 0; n--) {
			jam += maghsom[n];
		}
		if (a == jam)
			cout << a << "\t" << jam << "\n";
	}
}