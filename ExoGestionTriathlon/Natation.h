#ifndef NATATION_H
#define NATATION_H

#include <string>
#include "Epreuve.h"
#include "Inscription.h"

using namespace std;


class Natation : public Epreuve
{
private:
	int temperature;
	Inscription lesInscriptions;


public :
	Natation(int temperature, string gps_d, string gps_f, Triathlon* leTriathlon, Inscription inscription);
	
	int GetTemperature();
};

#endif 