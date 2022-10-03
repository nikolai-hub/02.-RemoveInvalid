#ifndef REMOVE_INVALID_H
#define REMOVE_INVALID_H

#include <list>

#include "Company.h"
typedef std::list<Company*> ListComp;

void removeInvalid(ListComp& listOfCompanies) {
	ListComp::iterator it = listOfCompanies.begin();
	while( it != listOfCompanies.end()) {
		Company* c =(*it) ;
		if (c->getId()<0)
		{
			delete c;
			it = listOfCompanies.erase(it);
		}
		else {
			it++;
		}
	}
}



#endif // !REMOVE_INVALID_H
