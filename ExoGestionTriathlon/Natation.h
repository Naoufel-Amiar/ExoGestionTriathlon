#ifndef NATATION_H
#define NATATION_H

#include <string>
#include "Epreuve.h"
#include "Triathlon.h"
#include "Inscription.h"

using namespace std;


class Natation : public Epreuve
{
private:
	int temperature;
	Inscription lesInscription;


public :
	Natation(int temperature, string gps_d, string gps_f, Triathlon* leTriathlon, Inscription inscription);
	//Natation(int temperature);
	
	int GetTemperature();

	Epreuve* Epreuve(string gps_d, string gps_f);
	Triathlon* GetLeTriathlon();
};

#endif 