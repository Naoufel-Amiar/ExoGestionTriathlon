#ifndef CYCLISME_CPP
#define CYCLISME_CPP

#include <string>
#include "Cyclisme.h"

Cyclisme::Cyclisme(int pente) : Courses(0,0)
{
	this->pente = pente;
}

void Cyclisme::Affiche()
{
	std::cout << "Cyclisme" << pente << "°" << std::endl;
	//return 0;
}

#endif 