#include <iostream>

int main()
{
	double nomre=0, bishtarin=0, n =1, tedad=0;
	

	while (nomre > -1) {
		std::cout << "Nomre ha ra vared konid: #" << n << ": ";
		std::cin >> nomre;
		n++;
		if (nomre > bishtarin) 
			bishtarin = nomre;
		if (nomre < 10 && nomre > -1)
			tedad++;
	}
	std::cout << "Bishtarin nomre = " << bishtarin << "\n";
	std::cout << "Tedade oftade ha = " << tedad << "\n";
	return 0;
}