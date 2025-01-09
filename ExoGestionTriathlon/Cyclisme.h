#ifndef CYCLISME_H
#define CYCLISME_H

#include <string>
#include <iostream>

#include "Courses.h"

using namespace std;

class Cyclisme  :public Courses
{
private:
	int pente;

public :
	Cyclisme(int pente);

	void Affiche();
};


#endif 