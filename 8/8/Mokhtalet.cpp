#include "Mokhtalet.h"
#include <math.h>

Mokhtalet::Mokhtalet()
{
	i_ = r_ = 0;
}

Mokhtalet::Mokhtalet(double initR, double initI) {
	i_ = initI;
	r_ = initR;
}

Mokhtalet::~Mokhtalet()
{
}

double Mokhtalet::andaze() const
{
	return sqrt(r_ * r_ + i_ * i_);
}

Mokhtalet Mokhtalet::jamMosavi(const Mokhtalet jamKonBahash) {
	r_ += jamKonBahash.ghesmatHaghighi();
	i_ += jamKonBahash.ghesmatMajazi();
	return (*this);
}