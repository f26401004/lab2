#ifndef CMATH
#define CMATH
#include<cmath>
#endif

class Elo
{
	public:
		Elo();
		Elo(double, double, int);
		int calculate_new_r_value(double);
		double get_Ra();
		double get_Rb();
		int set_r_value(double, double);
	private:
		float ra, rb, ea, eb;
		int sa, sb, k;
};
