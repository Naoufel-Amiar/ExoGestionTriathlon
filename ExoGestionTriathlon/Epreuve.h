#ifndef EPREUVE_H
#define EPREUVE_H

#include <string>

using namespace std;


class Epreuve
{
protected:
	string gps_d;
	string gps_f;

public:
	Epreuve(string gps_d, string gps_f);
	void virtual getLeTriathlon() = 0;
};
#endif 