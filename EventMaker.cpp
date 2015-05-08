#include "EventMaker.h"

EventMaker* EventMaker::create(TYPE_EVENT factory)
{
	if (factory == TYPE_EVENT::ACTIVITE)
	{
		return new Activite_F();
	}
	else if (factory == TYPE_EVENT::PROJET)
	{
		return new Projet_F();
	}
	else if (factory == TYPE_EVENT::TACHE_C)
	{
		return new TacheC_F();
	}
	else if (factory == TYPE_EVENT::TACHE_P)
	{
		return new TacheP_F();
	}
	else if (factory == TYPE_EVENT::TACHE_S)
	{
		return new TacheS_F();
	}
}