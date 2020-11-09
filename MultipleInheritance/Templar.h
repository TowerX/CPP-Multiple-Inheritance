#pragma once
#include "Support.h"
#include "Mechanical.h"
class Templar : public Support, public Mechanical
{
private:
	string secondaryClass;
public:
	Templar() {
		setSoldierName("First Templar");
		setSoldierBio("It will block anything coming his way.");
		setSoldierAbility("Tower Shield");
	}
	string getSecondaryClass() {
		return getAlienClass();
	}
};

