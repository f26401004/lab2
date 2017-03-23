#include"Elo_system.h"
// the constructor of Elo system.
Elo::Elo()
{
	ra = 0;
	rb = 0;
	k = 0;
	sa = 0;
	sb = 0;
}
Elo::Elo(double r1, double r2, int k_value)
{
	ra = r1;
	rb = r2;
	k = k_value;
}
// the function to set the Ra, Rb.
int Elo::set_r_value(double r1, double r2)
{
	ra = r1;
	rb = r2;
}
// the function to compute the new Ra, Rb.
int Elo::calculate_new_r_value(double s)
{
	ea = 1 / (1 + pow(10, (double)((rb - ra) / 400)));
	eb = 1 / (1 + pow(10, (double)((ra - rb) / 400)));
	ra = ra + k * (s - ea);
	rb = rb + k * ((1-s) - eb);
}
// get the value of Ra.
double Elo::get_Ra()
{
	return ra;
}
// get the value of Rb.
double Elo::get_Rb()
{
	return rb;
}
