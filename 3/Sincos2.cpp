#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

void main()
{
	double x = 0, y = 0, t;
	char data;
	for (t = -15.0; t <= 15.0;  t+=0.01) {
		x = 3 * sin(5 * t);
		y = 3 * cos(3 * t);

		ofstream file("Tamrin_sincos3.txt", ios::app);
		file << x << "\t" << y << "\n";
	}
}