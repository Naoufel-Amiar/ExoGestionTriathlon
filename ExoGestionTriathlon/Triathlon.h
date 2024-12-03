#ifndef TRIATHLON_H
#define TRIATHLON_H

#include <string>


using namespace std;


class Triathlon
{
private:
	int id;
	string nom;
	string lieu;
	string date;

public :
	Triathlon(int id, string nom, string lieu, string date);


	Epreuve* GetLesEpreuves();
	string GetLeType();
	Inscription* GetLesInscriptions();

	void AddLesInscriptions(Inscription** lesInscriptions);
};
#endif 