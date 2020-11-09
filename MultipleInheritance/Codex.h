#pragma once
#include "Mechanical.h"
#include "Support.h"
class Codex : public Mechanical, public Support
{
private:
	string secondaryClass;
public:
	Codex() {
		setAlienName("Codex");
		setAlienBio("A mysterious mechanical alien taking on the appearance of a human female.");
		setAlienAbility("Clone");
	}
	string getSecondaryClass() {
		return getSoldierClass();
	}
};

