#include <stdio.h>
#include <iostream>

using namespace std;

int mycompare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int* moratabKon(int* a,int number) {
	int i, x;
	int* b;
	b = new int[number];
	for (i = 0; i < number; i++) {
		b[i] = a[i];
	}
	//	meghdare a ro mirizim to a
	//	meghdare gozine ha ye b ro done done ba ham jabe ja mikonim ta be tartib beshan
	for (int n = 0; n < number; n++) {
		for (i = 0; i < number-1; i++) {
			if (b[i] < b[i + 1])
				continue;
			if (b[i] > b[i + 1]) {
				x = b[i];
				b[i] = b[i + 1];
				b[i + 1] = x;
			}
		}
	}
	return b;
}


void main() {
	int a[] = { 1,5,4,6,8,4,3 };
	int b[] = { 1,5,4,6,8,4,3 };
	int* c;
	int i;
	qsort(b, 7, sizeof(int), mycompare);
	c = moratabKon(a, 7);
	cout << "A: \n";
	for (i = 0; i < 7; i++) {
		cout << a[i] << " ";
	}
	cout << "\nB: \n";
	for (i = 0; i < 7; i++) {
		cout << b[i] << " ";
	}
	cout << "\nC: \n";
	for (i = 0; i < 7; i++) {
		cout << c[i] << " ";
	}
}