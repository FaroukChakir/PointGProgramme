#pragma once
#include "Includes.h"
#include "PointGeo.h"

class Hotel
{
private:
	string NomHotel;
	PointGeo Pg;
	int nbrEtoile;
public:
	Hotel(string, PointGeo, int);
	void FindHotel( PointGeo);


};
