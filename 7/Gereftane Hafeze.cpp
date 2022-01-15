#include <stdio.h>
#include <iostream>

using namespace std;

void gereftaneHafeze(double**s, int N) {
	*s = (double*)malloc(N * sizeof(**s));
	if ((*s) == NULL) {
		cout << "nadaram inghadr!";
		exit(0);
	}
}

void main() {
	long N, i;
	double *nomre;
	cin >> N;
	gereftaneHafeze(&nomre,N);
	for (i = 0; i < N; i++) {
		cin >> nomre[i];
	}
	for (i = 0; i < N; i++) {
		cout << nomre[i] << "\n";
	}
	free (nomre);
}