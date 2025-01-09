#ifndef NATATION_CPP
#define NATATION_CPP

#include <string>
#include "Natation.h"



Natation::Natation(int temperature, string gps_d, string gps_f, Triathlon* leTriathlon, Inscription inscription) :Epreuve(gps_d, gps_f), temperature(temperature), lesInscriptions(inscription)
{

}



int Natation::GetTemperature()
{
	return temperature;
}

#endif