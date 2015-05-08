#if !defined(EVENT)
#define EVENT
#include "iostream"
#include "map"
#include "timing.h"
using namespace std;
using namespace TIME;
/*! 
\class Event
		\brief Classe Abstraite mère des éléments de l'agenda
	*/
class Event {
private:
	string titre;
	Date debut;
	Date fin;
	Duree duree;

public:
	virtual string getType() = 0;//<! retourne le type d'evennement
	string getTitre() const//<! retourne le titre
	{
		return titre;
	}
	Date getDebut() const//<! retourne la date de début
	{
		return debut;
	}
	Date getFin() const//<! retourne l'échéance
	{
		return fin;
	}
	Duree getDuree() const//<! retourne la durée
	{
		return duree;
	}
	virtual void setTitre()
	{
		string t;
		titre = t;
	}
	virtual void setDebut() = 0;
	virtual void setFin() = 0;
	virtual void setDuree() = 0;
};

#endif