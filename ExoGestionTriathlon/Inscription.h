#ifndef INSCRIPTION_H
#define INSCRIPTION_H

// Déclarations anticipées
class Triathlon;
class Temps;
class Epreuve;
class Prelevement;
class Triathlete;

#include <string>

using namespace std;

class Inscription
{
private:
	int dossard;
	string date_i;
	bool forfait;
	int classement_c;

	Triathlete* leTriathlete;
	Triathlon* leTriathlon;
	Temps* temps;

public :
	

	Inscription();
	Inscription(int dossard, string date_i, bool forfait, int classement_c, Triathlete* leTriathlete, Triathlon* leTriathlon);
	Triathlon* GetLeTriathlon();
	Temps* GetLesTemps();
	Epreuve* GetLesTroisEpreuves();
	Prelevement* GetLesPrelevements();

	bool EstForfait();

	Triathlete* GetLeTriathlete();

	void Affiche();
};
#endif 