#ifndef TRIATHLETE_CPP
#define TRIATHLETE_CPP

#include "Triathlete.h"


//
Triathlete::Triathlete()
{

}


Triathlete::Triathlete(int n_licence, string nom, string prenom, string sexe, string adresse, string date_birth, Categorie* laCategorie, Inscription* lesInscriptions)
{
	this->n_licence = n_licence;
	this->nom = nom;
	this->prenom = prenom;
	this->sexe = sexe;
	this->adresse = adresse;
	this->date_birth = date_birth;
	this->laCategorie = laCategorie;
	this->lesInscriptions = lesInscriptions;

	
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