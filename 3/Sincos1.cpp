#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

void main()
{
	double x = 0, y = 0;
	char data;
	for (x = -3; x <= 2.5;  x +=0.01) {
		y = 2 * sin(x) - pow(x, 2) * cos(x);
		ofstream file("Tamrin_sincos1.txt", ios::app);
		file << x << "\t" << y << "\n";
	}
}