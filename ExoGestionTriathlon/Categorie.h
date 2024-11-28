#ifndef CATEGORIE_H
#define CATEGORIE_H

#include <string>
#include "Triathlete.h"

class Triathlete;

class Categorie
{
private:
	int code;
	std::string libelle;
	int age_min;
	int age_max;

public :
	Triathlete** GetLesTriathletes();
	Triathlete** LesTriathletesAsurveiller();
	void AddLesTriathletes(Triathlete** lesTriathletes);
};
	

#endif 
