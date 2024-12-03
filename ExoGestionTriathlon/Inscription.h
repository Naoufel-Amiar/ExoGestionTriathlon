#ifndef INSCRIPTION_H
#define INSCRIPTION_H

#include <string>
#include "Triathlon.h"
#include "Temps.h"
#include "Epreuve.h"
#include "Prelevement.h"

class Triathlon;
class Temps;
class Epreuve;
class Prelevement;

using namespace std;

class Inscription
{
private:
	int dossard;
	string date_i;
	bool forfait;
	int classement_c;

public :
	Inscription(int dossard, string date_i, bool forfait, int classment);
	Triathlon* GetLeTriathlon();
	Temps* GetLesTemps();
	Epreuve* GetLesTroisEpreuves();
	Prelevement* GetLesPrelevements();

	bool EstForfait();

	Triathlete* GetLeTriathlete();

	void Affiche();
};
#endif 