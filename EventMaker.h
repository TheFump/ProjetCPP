#if !defined(EVENTMAKER)
#define EVENTMAKER

#include "iostream"
#include "Event.h"
#include "map"
#include "timing.h"
using namespace std;
using namespace TIME;


/*!
\class EventMaker
\brief Classe pour implémentation du design pattern abstract factory
*/
class EventMaker {
public:
	enum TYPE_EVENT
	{
		PROJET,
		TACHE_S,
		TACHE_C,
		TACHE_P,
		ACTIVITE
	};
	virtual Event* getEvent();//<!construction du bon Event
	static EventMaker* create(TYPE_EVENT factory);//<! creation de l'élément
};
/*!
\class Activite_F
\brief Création Activité
*/
class Activite_F : public EventMaker {
public:
	Event* getEvent()
	{
	}
};
/*!
\class Projet_F
\brief Création Projet
*/
class Projet_F : public EventMaker {
public:
	Event* getEvent()
	{
	}
};
/*!
\class TacheC_F
\brief Création Tache Composite
*/
class TacheC_F : public EventMaker {
public:
	Event* getEvent()
	{
	}
};
/*!
\class TacheP_F
\brief Création Tache Préemptée
*/
class TacheP_F : public EventMaker {
public:
	Event* getEvent()
	{
	}
};
/*!
\class TacheS_F
\brief Création Tache Simple
*/
class TacheS_F : public EventMaker {
public:
	Event* getEvent()
	{
	}
};


#endif
