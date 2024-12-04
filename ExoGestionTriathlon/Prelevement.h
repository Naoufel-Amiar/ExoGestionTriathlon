#ifndef PRELEVEMENT_H
#define PRELEVEMENT_H

#include <string>
#include "Taux.h"
#include "Produit_Dopants.h"

using namespace std;

class Prelevement
{
private:
	string id;
	string date;

public :
	Prelevement(string id, string date);

	Taux* GetLesTaux();
	ProduitDopants* ProduitDopantPositif();

	bool EstPositif();
};
#endif 