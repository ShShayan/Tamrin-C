#include <iostream>
#include <string>
#include "Mokhtalet.h"

using namespace std;

void main() {
	Mokhtalet a, b(3, 4);
	int x, y;
	cin >> x >> y;
	a.getR(x);
	a.getI(y);
	cout << "haghighiye a" << a.ghesmatHaghighi() << "majazi a" << a.ghesmatMajazi();
	cout << "Andaze B " << b.andaze();
	cout << " Andaze A " << a.andaze();
	a.jamMosavi(b);
	cout << "haghighiye a" << a.ghesmatHaghighi() << "majazi a" << a.ghesmatMajazi();
	cout << " Andaze A " << a.andaze();
}