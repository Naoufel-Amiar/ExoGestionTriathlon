#ifndef INSCRIPTION_CPP
#define INSCRIPTION_CPP

#include "Inscription.h"
#include "Temps.h"

#include <iostream>
#include <string>

using namespace std;




Inscription::Inscription(int dossard, string date_i, bool forfait, int classement_c, Triathlete* leTriathlete, Triathlon* leTriathlon)
{
	this->dossard = dossard;
	this->date_i = date_i;
	this->forfait = forfait;
	this->classement_c = classement_c;

	this->leTriathlete = leTriathlete;
	this->leTriathlon = leTriathlon;
}



Triathlon* Inscription::GetLeTriathlon()
{
	return leTriathlon;
}


Temps* Inscription::GetLesTemps()
{
	return temps;
}


Epreuve* Inscription::GetLesTroisEpreuves()
{
	return 0;
}


Prelevement* Inscription::GetLesPrelevements()
{
	return 0;
}


bool Inscription::EstForfait()
{
	return false;
}


Triathlete* Inscription::GetLeTriathlete()
{
	return leTriathlete;
}


void Inscription::Affiche()
{

}
#endif