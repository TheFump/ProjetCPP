#ifndef PROJET
#define PROJET

#include "Tache.h"
#include <map>

using namespace std;
using namespace TIME;
/*!
\class Projet
\brief Classe utilisée pour regrouper des taches
*/
class Projet : public Event
{
protected :
	map<string, Tache*> taches;
public:
	string getType()//<! redéfinition pour renvoyer le bon type
	{
		return "Projet";
	}
	void setDebut()
	{

	}
	void setFin()
	{

	}
	void setDuree()
	{

	}
	void ajouterTache(Tache& t){
		taches[t.getTitre()] = &t;
	}
	void supprimerTache(string t){
		taches.erase(taches.find(t));
	}
};


#endif