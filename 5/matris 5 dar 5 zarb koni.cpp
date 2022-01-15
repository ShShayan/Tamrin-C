#include <iostream>
#include <math.h>

using namespace std;

void main()
{
	double x[5][5], y[5][5], z[5][5];
	int a, b, c, d, e, f;
	cout << "matrise 5 dar 5 e aval ra satr be satr vared konid: ";
	for (b = 0; b <= 4; b++) {
		for (a = 0; a <= 4; a++) {
			cin >> x[b][a];
		}
	}
	cout << "matrise 5 dar 5 e dovom ra satr be satr vared konid: ";
	for (d = 0; d <= 4; d++) {
		for (c = 0; c <= 4; c++) {
			cin >> y[d][c];
		}
	}
	for (e = 0; e <= 4; e++) {
		for (f = 0; f <= 4; f++) {
			for (z[e][f] = 0, a = 0; a <= 4; a++) {
				z[e][f] += (x[e][a]) * (y[a][f]);
			}
		}
	}
	for (e = 0; e <= 4; e++) {
		for (f = 0; f <= 4; f++) {
			cout << z[e][f] << "\t";
		}
		cout << "\n";
	}
}