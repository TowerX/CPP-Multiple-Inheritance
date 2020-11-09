#pragma once
#include "Psionic.h"
#include "Summons.h"
class Wizard : public Psionic, public Summons
{
private:
	string secondaryClass;
public:
	Wizard() {
		setSoldierName("The Wizard");
		setSoldierBio("Boom, boom and more boom!");
		setSoldierAbility("Fireball");
	}
	string getSecondaryClass() {
		return getAlienClass();
	}
};

