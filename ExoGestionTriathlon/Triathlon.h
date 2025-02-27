#ifndef TRIATHLON_H
#define TRIATHLON_H

#include <string>

#include "Inscription.h"
#include "Epreuve.h"
#include "Type.h"


using namespace std;

// Déclarations anticipées


class Triathlon
{
private:
	int id;
	string nom;
	string lieu;
	string date;


	Epreuve* lesEpreuves;
	Type* leType;
	Inscription* lesInscriptions;


public :

	Triathlon(int id, string nom, string lieu, string date, Epreuve* lesEpreuves, Inscription* lesInscriptions, Type* leType);


	Epreuve* GetLesEpreuves();
	string GetLeType();
	Inscription* GetLesInscriptions();

	void AddLesInscriptions(Inscription** lesInscriptions);
};
#endif 