#ifndef NATATION_H
#define NATATION_H

#include <string>
#include "Epreuve.h"
#include "Triathlon.h"

class Natation : public Epreuve
{
private:
	int temperature;

public :
	Natation(int temperature);
	
	int GetTemperature();
	Triathlon* GetLeTriathlon();
};

#endif 