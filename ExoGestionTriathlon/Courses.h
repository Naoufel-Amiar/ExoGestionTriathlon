#ifndef COURSES_H
#define COURSES_H

#include <string>
#include "Epreuve.h"

class Courses  : public Epreuve
{
private :
	int denivele_plus;
	int denivele_moins;

public :
	Courses(int denivele_plus, int denivele_moins);

	void virtual affiche() = 0;
};


#endif 