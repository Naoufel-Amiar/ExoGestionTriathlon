#ifndef TRIATHLON_H
#define TRIATHLON_H

#include <string>


using namespace std;

// Déclarations anticipées
class Inscription;
class Epreuve;
class Type;

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

	Triathlon(int id, string nom, string lieu, string date);


	Epreuve* GetLesEpreuves();
	string GetLeType();
	Inscription* GetLesInscriptions();

	void AddLesInscriptions(Inscription** lesInscriptions);
};
#endif 