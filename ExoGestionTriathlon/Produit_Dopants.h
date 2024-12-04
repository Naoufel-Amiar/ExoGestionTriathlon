#ifndef PRODUIT_DOPANTS_H
#define PRODUIT_DOPANTS_H

#include <string>

using namespace std;

class ProduitDopants
{
private:
	int code;
	string libelle;
	double taux;

public :
	ProduitDopants(int code, string libelle, double taux);

	double GetLeTaux();
};

#endif 