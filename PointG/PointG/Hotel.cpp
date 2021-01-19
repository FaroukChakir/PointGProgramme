#include "Hotel.h"

Hotel::Hotel(string nom, PointGeo pg , int nbretoil ):Pg(pg)
{
	this->NomHotel = nom;
	this->nbrEtoile = nbretoil;
}

void Hotel::FindHotel( PointGeo p)
{
	if ( Pg.operator=(p))
	{
		cout << "Le nom de l'hotel est : " <<"''"<< this->NomHotel << "''" << " avec un nombre d'etoiles de : " << this->nbrEtoile << endl;
	}

}


