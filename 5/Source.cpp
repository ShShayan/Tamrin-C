#include <iostream>
#include <math.h>

using namespace std;

void main()
{
	double x[3], y[3];
	int a;
	cout << "bordare aval ra vared konid:" << "\n";
	for (a = 0; a <= 2; a++) {
		cin >> x[a];
	}
	cout << "bordare dovom ra vared konid:" << "\n";
	for (a = 0; a <= 2; a++) {
		cin >> y[a];
	}
	cout << "bordare tafazole do bordar:" << "\n";
	for (a = 0; a <= 2; a++) {
		cout << x[a] - y[a] << "\n";
	}
}