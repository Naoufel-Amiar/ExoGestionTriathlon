#ifndef TYPE_CPP
#define TYPE_CPP

#include "Type.h"

Type::Type(int code, string libelle, double long_nage, double long_velo, double long_pied)
{
	this->code = code;
	this->libelle = libelle;

	this->long_nage = long_nage;
	this->long_velo = long_velo;
	this->long_pied = long_pied;

}


double Type::GetLongNage()
{
	return long_nage;
}


double Type::GetLongVelo()
{
	return long_velo;
}


double Type::GetLongPied()
{
	return 0.0;
}

//
//void Type:: che()
//{
//
//}

#endif