#include <iostream>
#include <fstream>

using namespace std;

void main(void)
{
	int a, b, i;
	cout << "Tedad khat ha ye ofoghi ra vared konid: ";
	cin >> a;
	cout << "Tedad khat ha ye amodi ra vared konid: ";
	cin >> b;
	ofstream file("test.dis");
	for (i = 1; i <= b; i++) {
		file << "SL " << 30*i << " " << 30 << " " << 30*i << " " << 30 + ((a-1)*30) << "\n";
	}
	for (i = 1; i <= a; i++) {
		file << "SL " << 30 << " " << 30 * i << " " << 30 + ((b - 1) * 30) << " " << 30 * i << "\n";
	}
}