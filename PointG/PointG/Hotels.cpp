#include "Hotels.h"

Hotels::Hotels(int x, int y, string nom, int etoile):PointGeo::PointGeo(x,y)
{
	this->Nom = nom;
	this->etoile = etoile;
}


