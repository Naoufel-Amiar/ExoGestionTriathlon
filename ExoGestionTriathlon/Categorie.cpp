#ifndef CATEGORIE_CPP
#define CATEGORIE_CPP

#include "Categorie.h"

Categorie::Categorie(int code, string libelle, int age_min, int age_max)
{
	this->code = code;
	this->libelle = libelle;
	this->age_min = age_min;
	this->age_max = age_max;
}

Triathlete** Categorie::GetLesTriathletes()
{
	return 0;
}


Triathlete** Categorie::LesTriathletesAsurveiller()
{
	return 0;
}


void Categorie::AddLesTriathletes(Triathlete** lesTriathletes)
{

}
#endif