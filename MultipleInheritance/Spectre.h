#pragma once
#include "Summons.h"
#include "Psionic.h"
class Spectre : public Summons, public Psionic
{
private:
	string secondaryClass;
public:
	Spectre() {
		setAlienName("The Spectre");
		setAlienBio("Thousands of nanomachine grouped together into a humanoid shape.");
		setAlienAbility("Vanish");
	}
	string getSecondaryClass() {
		return getSoldierClass();
	}
};

