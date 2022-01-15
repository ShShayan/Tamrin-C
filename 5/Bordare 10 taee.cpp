#include <iostream>
#include <math.h>

using namespace std;

void main()
{
	double x[10], y;
	int n;
	cout << "10 ta adad bede: ";
	for (n = 0; n <= 9; n++) {
		cin >> x[n];
	}
	cout << "adadi ke mikhay zarb koni ro bede: ";
	cin >> y;
	for (n--; n >= 0; n--) {
		cout << y * x[9 - n] << "\n";
	}
}