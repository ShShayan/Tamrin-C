#pragma once
class Mokhtalet
{
public:
	Mokhtalet();
	Mokhtalet(double initR, double initI);
	//virtual ~Mokhtalet();

	double ghesmatHaghighi() const { return r_; }
	double ghesmatMajazi() const { return i_; }
	double andaze() const;
	void getI(double a) { i_ = a; }
	void getR(double b) { r_ = b; }

	Mokhtalet jamMosavi(Mokhtalet jamKonBahash);

private:
	double i_, r_;
};

