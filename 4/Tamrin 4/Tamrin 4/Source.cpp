#include <iostream>
#include <fstream>

using namespace std;

void main(void)
{
	int n, l, i;
	cout << "Tedad khat ha ra vared konid: ";
	cin >> n;
	cout << "Toole khat ha ra vared konid: ";
	cin >> l;
	ofstream file("test2.dis");
	file << "% in do ta khata ye amodi ofoghi an" << "\n";
	file << "SL " << 10 * l << " " << 10 * l << " " << 10 * l << " " << 10 * l * (n) << "\n";
	file << "SL " << 10 * l << " " << 10 * l << " " << 10 * l * (n) << " " << 10 * l << "\n";
	file << "% ina khata ye beyneshonan" << "\n";
	for (i = 1; i <= n - 1; i++) {
		file << "SL " << 10 * l + i * 10 * l << " " << 10 * l << " " << 10 * l << " " << 10 * l * (n) - 10 * l * i << "\n";
	}
}