#include <iostream>

using namespace std;

void main()
{
	int a, b, c = 0, n;
	cout << "Do adad bede: ";
	cin >> a >> b;
	for (n = 1; n <= b; n++) {
		c = n * a;
		if (c % b == 0)
			break;
	}
	cout << "KMM do adad= " << c;
}