#ifndef ANNEE_H
#define ANNEE_H

#include <string>
#include "Produit_Dopants.h"

class Annee
{
private :
	int Num;

public :
	Annee(int Num);

	void dope(); //: public Produit_Dopants
};

#endif