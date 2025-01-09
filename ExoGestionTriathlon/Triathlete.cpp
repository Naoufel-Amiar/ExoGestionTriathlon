#ifndef TRIATHLETE_CPP
#define TRIATHLETE_CPP

#include "Triathlete.h"


//
Triathlete::Triathlete()
{

}


Triathlete::Triathlete(int n_licence, string nom, string prenom, string sexe, string adresse, string date_birth, Categorie* laCategorie)
{
	
}


Inscription* Triathlete::GetLesInscriptions()
{
	return lesInscriptions;
}


Categorie* Triathlete::GetLaCategorie()
{
	return laCategorie;
}


bool Triathlete::EquipeFranceMarathon()
{
	return 0;
}


int Triathlete::GetNumLicence()
{
	return n_licence;
}




string Triathlete::Affiche()
{
	return "Data Send";
}
#endif