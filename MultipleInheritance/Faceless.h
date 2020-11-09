#pragma once
#include "Organic.h"
#include "Assault.h"
class Faceless : public Organic, public Assault
{
private: 
	string secondaryClass;
public:
	Faceless() {
		setAlienName("The Faceless");
		setAlienBio("It servers as the aliens primary infiltration unit.");
		setAlienAbility("Claws");	
	}
	string getSecondaryClass() {
		return getSoldierClass();
	}
};

