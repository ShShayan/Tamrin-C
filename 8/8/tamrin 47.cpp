#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

void main() {
	int i,n = 0, a, b, x, m, c, tedadKalame = 0, d;
	char check = {};
	char kalame[1000][100];
	char kalameMoratab[1000][100];
	char matn[500][500];
	for (i = 0; i < 500;i++) {
		cin.getline(matn[i], sizeof(matn) - 1);
		//cout << matn[i] << endl;
		if (!strcmp(matn[i], &check))
			break;
		n++;			// tedad satr ha
	}
	for (i = 0; i < n; i++) {
		cout << matn[i] << endl;
	}
	i = 0;
	a = 0;
	//cout << matn[0][0] << " " << matn[1][0];
	for (x = 0; i < n; i++) {
		x = 0;
		for (b = 0; matn[i][x]; x++, b++) {
			kalame[a][b] = matn[i][x];
			if (matn[i][x + 1] == 32) {
				kalame[a][b + 1] = NULL;
				a++;
				b = -1;
				x++;
			}
			if (!matn[i][x + 1]) {
				kalame[a][b + 1] = NULL;
				a++;
			}
		}
	}
	m = a;			//tedad kalame ha

	////////////////////////////////bara ye moratab kardane esm ha//////////////////////////////
	/*
	for (int n = 0; n < m; n++) {
		for (i = 0; i < m - 1; i++) { 
			if (strcmp(kalame[a],kalame[a+1]) < 0)
				continue;
			if (strcmp(kalame[a], kalame[a + 1]) > 0) {
				strcpy_s(movaghat, kalame[a]);
				strcpy_s(kalame[a], kalame[a+1]);
				strcpy_s(kalame[a+1], movaghat);
			}
		}
	}
	*/

	//shomarande kalame ha
	for (a = 0; a < m; a++) {
		for (c = 0, tedadKalame = 0; c < m; c++) {
			if (!strcmp(kalame[a], kalame[c])) {
				tedadKalame++;
				if (c != a) {
					d = c;
					m--;
					for (; d < m - 1; d++) {
						strcpy_s(kalame[d], kalame[d + 1]);
					}
				}
			}
		}
		cout << kalame[a] << ":     " << tedadKalame << endl;
	}
}