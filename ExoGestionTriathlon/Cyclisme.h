#ifndef CYCLISME_H
#define CYCLISME_H

#include <string>
#include "Courses.h"

class Cyclisme  :public Courses
{
private:
	int pente;

public :
	Cyclisme(int pente);

	void Affiche();
};


#endif 