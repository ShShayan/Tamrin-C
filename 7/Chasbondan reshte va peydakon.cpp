#include <stdio.h>
#include <iostream>

using namespace std;

long myFactoriel(int n) {
	long s = 1;
	while (n) {
		s *= n;
		n--;
	}
	return s;
}

long myFactoriel2(int n) {
	if (n == 1)
		return 1;
	return n * myFactoriel2(n - 1);
}

// bara ye tavan resondan va fibonachi ham benevis tabe


float tavan(int a, int b) {
	if (b == 0)
		return 1;
	if (b > 0) {
		return (a * (tavan(a, (b - 1))));
	}
	if (b < 0) {
		return (1.0 / (a * (tavan(a, ((-b) - 1)))));
	}
}

long fibo(int a) {
	if (a == 1)
		return 1;
	if (a == 2)
		return 1;
	if (a > 2)
		return fibo(a - 1) + fibo(a - 2);
}

char chasbon(char a[], char b[]) {
	int n = 0, m = 0;
	for (; a[n]; n++);
	for (; b[m]; m++, n++) {
		a[n] = b[m];
	}
	a[n] = 0;
	return *a;
}


char peydaKon(char a[], char b[]) {
	int n = 0, m = 0;
	for (; a[n] && b[m]; n++) {
		if (a[n] == b[m]) {
			m++;
			if (b[m] == 0) {
				break;
			} else if (b[m] != a[n + 1]) {
				m--;
				continue;
			}
		}
	}
	if (b[m] == 0)
		return n - m + 2;
	return -1;
}



void main() {
	int j;
	char a[80], b[80];
	cin >> a;
	cout << "va" << "\n";
	cin >> b;
	j = peydaKon(a,b);
	if (j == -1) {
		cout << "nabod!";
	}
	else {
		cout << "'" << b << "' az harfe shomare " << j << " e '" << a << "' bod!";
	}
	
}