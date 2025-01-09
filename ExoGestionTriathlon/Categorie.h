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
	Triathlete* triathlete;

public :
	Categorie(int code, string libelle, int age_min, int age_max, Triathlete* triathlete);

	Triathlete** GetLesTriathletes();
	Triathlete** LesTriathletesAsurveiller();
	void AddLesTriathletes(Triathlete** lesTriathletes);
	string getLibelle();
};
	

#endif 
