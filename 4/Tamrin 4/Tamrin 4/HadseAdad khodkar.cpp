#include <iostream>

using namespace std;

void main()
{
	int x = 0, a, b, i, n;
	
	for (i = 5, a = 0, b = 100, n = 0; i <= 100; ++i, a = 0, b = 100, n = 0) {
		for (a, b; b - a != 2 && b - a != 1; )
		{
			x = (a + b) / 2;
			if (x < i) {
				a = x;
			}
			else {
				b = x;
			}
			n++;
		}
		if (x == i) {
			cout << x << " javab ast!";
			n++;
			cout << "Tedad soal " << n << endl;
		}
		else {
			if (x + 1 == i) {
				cout << x + 1 << " javab ast!";
				n++;
				cout << "Tedad soal " << n << endl;
			}
			else {
				cout << x + 2 << " javab ast!";
				n++;
				cout << "Tedad soal " << n << endl;
			}
		}
	}
	system("pause");
}