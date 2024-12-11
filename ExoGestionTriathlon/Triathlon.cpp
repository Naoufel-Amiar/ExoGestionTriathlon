#ifndef TRIATHLON_CPP
#define TRIATHLON_CPP

#include <string>
#include "Triathlon.h"

Triathlon::Triathlon(int id, string nom, string lieu, string date)
{
	this->id = id;
	this->nom = nom;
	this->lieu = lieu;
	this->date = date;
}


Epreuve* Triathlon::GetLesEpreuves()
{
	return lesEpreuves;
}


//string Triathlon::GetLeType()
//{
//	return leType;
//}


Inscription* Triathlon::GetLesInscriptions()
{
	return lesInscriptions;
}

void Triathlon::AddLesInscriptions(Inscription** lesInscriptions)
{

}
#endif