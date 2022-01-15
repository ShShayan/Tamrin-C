#include <iostream>

using namespace std;

struct linkedList {
	double data;
	linkedList* badi;
};

void main() {
	linkedList* sar, *temp, *jadid;
	temp = new linkedList;
	temp->data = 74;
	sar = temp;
	temp = new linkedList;
	temp->data = 12;
	sar->badi = temp;
	temp->badi = new linkedList;
	temp->badi->data = 23;
	temp->badi->badi = NULL;
	

	jadid = new linkedList;
	jadid->data = 13;
	jadid->badi = sar;
	sar = jadid;
}