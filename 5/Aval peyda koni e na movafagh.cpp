#include <iostream>
#include <math.h>

using namespace std;

void main()
{
	int had, i, n, aval[100], x;
	cout << "Adad had ro bede: ";
	cin >> had;
	aval[0] = 1;
	aval[1] = 2;
	for (i = 3; i <= had; i++) {
		for (x = 1, n = 2; x <= 99 ; x++) {
			if (i % aval[x] == 0)
				break;
			else
				aval[n] = i;
		}
		cout << i;
	}
}