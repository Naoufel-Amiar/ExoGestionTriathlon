#ifndef TRIATHLETE_H
#define TRIATHLETE_H

#include <string>
#include "Inscription.h"
#include "Categorie.h"

class Inscription; 
class Categorie;


using namespace std;

class Triathlete
{
private:
	int n_licence;
	string nom;
	string prenom;
	string sexe;
	string adresse;
	string date_birth;

public :
	Triathlete();
	Triathlete(int n_licence, string nom, string prenom, string sexe, string adresse, string date_birth);

	Inscription* GetLesInscriptions();
	Categorie* GetLaCategorie();
	bool EquipeFranceMarathon();

	int GetNumLicence();
	string Affiche();
};
#endif 