#ifndef CATEGORIE_H
#define CATEGORIE_H

#include <string>
#include "Triathlete.h"

using namespace std;

class Categorie
{
private:
	int code;
	string libelle;
	int age_min;
	int age_max;

public :
	Categorie(int code, string libelle, int age_min, int age_max);

	Triathlete** GetLesTriathletes();
	Triathlete** LesTriathletesAsurveiller();
	void AddLesTriathletes(Triathlete** lesTriathletes);
};
	

#endif 
