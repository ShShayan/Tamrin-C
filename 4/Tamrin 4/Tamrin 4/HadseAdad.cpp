#include <iostream>

using namespace std;

void main()
{
	int x = 0, a = 0, b = 100 , i, t;
	cout << "yek adad dar nazar begirid ama be kasi nagid!" << "\n"
	<< "Be soalate zir ba 1 pasokh bale va 0 na bedahid." << "\n";

	for (a, b; b - a != 2; )
	{
		x = (a + b) / 2;
		cout << "Aya adade shoma bozorgtar az " << x << " ast?" << endl;
		cin >> t;
		if (t == 1) {
			a = x;
		}
		else {
			b = x;
		}
	}
	cout << "Aya adade shoma " << x + 1 << " ast?" << endl;
	cin >> t;
	if (t == 1) {
		cout << "Mooobaaaraaaaakeeee!";
	}
	else {
		cout << "Aya adade shoma " << x << " ast?" << endl;
		cin >> t;
		if (t == 1) {
			cout << "Mooobaaaraaaaakeeee!";
		}
		else
			cout << "Adade shoma " << x + 2 << " ast!";
	}
	system ("pause");
}