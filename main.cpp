#include<cstdlib>
#include<iostream>
#include<fstream>
#include"Elo_system.h"
using namespace std;

int main()
{
	int K;
	double Ra, Rb, S;
	// create a ofstream object to open a file.
	ofstream out_obj("file.out", ios::out);
	if (!out_obj)
	{
		cerr << " Failed Opening the file.out!!" << endl;
		exit(1);
	}
	// create a ofstream object to read a file.
	ifstream in_obj("file.in", ios::in);
	if (!in_obj)
	{
                cerr << " Failed Opening the file.in!!" << endl;
                exit(1);
	}
	// get the first information.
	in_obj >> K >> Ra >> Rb;
	// set the system and initialize the Ra, Rb, K.
	Elo system(Ra, Rb, K);
	// write the first statements of Ra, Rb.
	out_obj << system.get_Ra() << " " << system.get_Rb() << endl;
	// keep read if it doesn't meet end-of-file.
	while(in_obj >> S)
	{
		// system compute the data.
		system.calculate_new_r_value(S);
		// write the data into file.
		out_obj << round(system.get_Ra()) << " " << round(system.get_Rb()) << endl;
	}
	return 0;
}
