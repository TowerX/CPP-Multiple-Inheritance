#pragma once
#include "Assault.h"
#include "Organic.h"
class Gunner : public Assault, public Organic
{
private:
	string secondaryClass;
public:
	Gunner() {
		setSoldierName("The Guuuunneeer");
		setSoldierBio("Pew, pew, pew!");
		setSoldierAbility("Barrage");
	}
	string getSecondaryClass() {
		return getAlienClass();
	}
};

