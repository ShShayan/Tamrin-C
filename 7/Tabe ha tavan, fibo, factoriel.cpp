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

void main() {
	int a, b;
	long t;
	cin >> a;
	t = fibo(a);
	cout << "Jomle ye " << a << " om donbale ye fibonachi= " << t;
}