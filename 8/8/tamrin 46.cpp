#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define tedadDars = 100;

using namespace std;

struct daneshjo {
	char nam[15];
	char namKh[15];
	int shomareDaneshjoee;
	int codeReshte;
	int tedadVahed;
	double nomre[100];
	double moadel;
};

double* moratabKon(daneshjo* a, int number) {
	int i;
	double x;
	double* b;
	b = new double[number];
	for (i = 0; i < number; i++) {
		b[i] = a[i].moadel;
	}
	//	meghdare a ro mirizim to a
	//	meghdare gozine ha ye b ro done done ba ham jabe ja mikonim ta be tartib beshan
	for (int n = 0; n < number; n++) {
		for (i = 0; i < number - 1; i++) {
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

daneshjo* moratabNam(daneshjo* a, int tedadDaneshjo) {
	int i, n;
	char x[15];
	daneshjo* b;
	b = new daneshjo[tedadDaneshjo];
	for (i = 0; i < tedadDaneshjo; i++) {
		strcpy_s(b[i].nam,a[i].nam);
	}
	//	meghdare a ro mirizim to a
	//	meghdare gozine ha ye b ro done done ba ham jabe ja mikonim ta be tartib beshan
	for (int n = 0; n < tedadDaneshjo; n++) {
		for (i = 0; i < tedadDaneshjo - 1; i++) {
			if (*b[i].nam < *b[i + 1].nam)
				continue;
			if (*b[i].nam > *b[i + 1].nam) {
				strcpy_s(x,b[i].nam);
				strcpy_s(b[i].nam,b[i + 1].nam);
				strcpy_s(b[i + 1].nam,x);
			}
		}
	}
	for (i = 0; i < tedadDaneshjo; i++) {
		for (n = 0; n < tedadDaneshjo; n++) {
			if (!(strcmp(b[i].nam,a[n].nam))) {
				strcpy_s(b[i].namKh, a[n].namKh);
				b[i].shomareDaneshjoee = a[n].shomareDaneshjoee;
				b[i].codeReshte = a[n].codeReshte;
				b[i].tedadVahed = a[n].tedadVahed;
				for (int m = 0; m < b[i].tedadVahed; m++) {
					b[i].nomre[m] = a[n].nomre[m];
				}
				b[i].moadel = a[n].moadel;
				a[n].moadel = 100;
			}
		}
	}
	return b;
}

daneshjo* moratabMoadel(daneshjo* a, int tedadDaneshjo) {
	daneshjo* b;
	double* c;
	int i, n;
	b = new daneshjo[tedadDaneshjo];
	c = moratabKon(a, tedadDaneshjo);
	for (i = 0; i < tedadDaneshjo; i++) {
		b[i].moadel = c[i];
	}
	for (i = 0; i < tedadDaneshjo; i++) {
		for (n = 0; n < tedadDaneshjo; n++) {
			if (b[i].moadel == a[n].moadel) {
				strcpy_s(b[i].nam, a[n].nam);
				strcpy_s(b[i].namKh, a[n].namKh);
				b[i].shomareDaneshjoee = a[n].shomareDaneshjoee;
				b[i].codeReshte = a[n].codeReshte;
				b[i].tedadVahed = a[n].tedadVahed;
				for (int m = 0; m < b[i].tedadVahed; m++) {
					b[i].nomre[m] = a[n].nomre[m];
				}
				a[n].moadel = 100;
				break;
			}
		}
	}
	return b;
}

void main() {
	int i, o;
	double majmo;
	int tedadDaneshjo;
	daneshjo* a;
	daneshjo* b;
	cout << "Tedad daneshjo ra vared konid: ";
	cin >> tedadDaneshjo;
	a = new daneshjo[tedadDaneshjo];
	for (i = 0; i < tedadDaneshjo; i++) {
		cout << "Etelaate daneshjo ye " << i + 1 << "om ra vared konid:\n";
		cout << "nam: ";
		cin >> a[i].nam;
		cout << "nam khanevadegi: ";
		cin >> a[i].namKh;
		cout << "Shomare Daneshjoee: ";
		cin >> a[i].shomareDaneshjoee;
		cout << "code reshte: ";
		cin >> a[i].codeReshte;
		cout << "tedad vahed gozarande: ";
		cin >> a[i].tedadVahed;
		for (o = 0; o < a[i].tedadVahed; o++) {
			cout << "nomre ye darse " << o + 1 << "om ra vared konid:";
			cin >> a[i].nomre[o];
		}
		o--;
		for (majmo = 0; o >= 0; o--) {
			majmo += a[i].nomre[o];
		}
		a[i].moadel = majmo / a[i].tedadVahed;
	}
	for (i = 0; i < tedadDaneshjo; i++) {
		cout << "moadele " << a[i].nam << " " << a[i].namKh << ": " << a[i].moadel << endl;
	}
	int option;
	Boob:
	cout << "dar sorate tamayol yeki az gozine ha ye zir ra vared konid:\n"
		<< "1 moratab sazi bar asas nam va namayesh etelaat.\n"
		<< "2 moratab sazi bar asas moadel va namayesh etelaat.\n"
		<< "3 namayesh etelaate daneshjoyane oftade.\n";
	cin >> option;
	switch (option) {
	case 1:
		b = moratabNam(a, tedadDaneshjo);
		for (i = 0; i < tedadDaneshjo; i++) {
			cout << b[i].shomareDaneshjoee << ": " << b[i].nam << " " << b[i].namKh << "- code reshte: " << b[i].codeReshte
				<< "\nTedad vahede gozarande: " << b[i].tedadVahed << "\nMoadel: " << b[i].moadel << endl;
			for (o = 0; o < b[i].tedadVahed; o++) {
				cout << "nomre ye darse " << o + 1 << ": " << b[i].nomre[o] << endl;
			}
		}
		cout << "dar sorate tamayol be daste bandi dobare 1 va dar geyre in sorat 0 ra vared konid: ";
		cin >> option;
		if (option)
			goto Boob;
		else
			return;
	case 2:
		b = moratabMoadel(a, tedadDaneshjo);
		for (i = 0; i < tedadDaneshjo; i++) {
			cout << b[i].shomareDaneshjoee << ": " << b[i].nam << " " << b[i].namKh << "- code reshte: " << b[i].codeReshte
				<< "\nTedad vahede gozarande: " << b[i].tedadVahed << "\nMoadel: " << b[i].moadel << endl;
			for (o = 0; o < b[i].tedadVahed; o++) {
				cout << "nomre ye darse " << o + 1 << ": " << b[i].nomre[o] << endl;
			}
		}
		cout << "dar sorate tamayol be daste bandi dobare 1 va dar geyre in sorat 0 ra vared konid: ";
		cin >> option;
		if (option)
			goto Boob;
		else
			return;
	case 3:
		for (i = 0; i < tedadDaneshjo; i++) {
			for (int n = 0; n < a[i].tedadVahed; n++) {
				if (a[i].nomre[n] < 10) {
					cout << a[i].shomareDaneshjoee << ": " << a[i].nam << " " << a[i].namKh << "- code reshte: " << a[i].codeReshte
						<< "\nTedad vahede gozarande: " << a[i].tedadVahed << "\nMoadel: " << a[i].moadel << endl;
					for (o = 0; o < a[i].tedadVahed; o++) {
						cout << "nomre ye darse " << o + 1 << ": " << a[i].nomre[o] << endl;
					}
					break;
				}
			}
		}
		cout << "dar sorate tamayol be daste bandi dobare 1 va dar geyre in sorat 0 ra vared konid: ";
		cin >> option;
		if (option)
			goto Boob;
		return;
	}
}