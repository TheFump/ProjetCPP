#ifndef TACHE
#define TACHE

#include "Event.h"

using namespace std;
using namespace TIME;
/*!
\class Tache
\brief Classe Abstraite m�re des diff�rentes taches
*/
class Tache : public Event
{
public:

	 void setDebut()
	{

	}
	 void setFin()
	 {

	 }
	 void setDuree()
	 {

	 }
};

class TacheC : public Tache
{
public:
	string getType()//<! red�finition pour renvoyer le bon type
	{
		return "TacheC";
	}
};

class TacheS : public Tache
{
public:
	string getType()//<! red�finition pour renvoyer le bon type
	{
		return "TacheC";
	}
};

class TacheP : public TacheS
{
public:
	string getType()//<! red�finition pour renvoyer le bon type
	{
		return "TacheC";
	}
};



#endif