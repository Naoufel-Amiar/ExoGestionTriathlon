#ifndef TYPE_H
#define TYPE_H

#include <string>

using namespace std;

class Type
{
private:
	int code;
	string libelle;
	double long_nage;
	double long_velo;

public :
	Type(int code, string libelle, double long_nage, string long_velo);

	double GetLongNage();
	double GetLongVelo();
	double GetLongPied();

	void affiche();

};
#endif