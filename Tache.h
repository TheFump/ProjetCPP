#if !defined(TACHE)
#define TACHE

#include "iostream"
#include "map"
#include "timing.h"
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
	string getType()//<! red�finition pour renvoyer le bon type
	{
		return "Tache";
	}
};


#endif