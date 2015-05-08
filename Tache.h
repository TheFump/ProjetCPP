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
\brief Classe Abstraite mère des différentes taches
*/
class Tache : public Event
{
public:
	string getType()//<! redéfinition pour renvoyer le bon type
	{
		return "Tache";
	}
};


#endif