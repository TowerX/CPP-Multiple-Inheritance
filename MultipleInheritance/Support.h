#pragma once
#include "Soldier.h"
class Support : public Soldier
{
protected:
	Soldier support;
	string soldierClass = "Support Class";

	void setSoldierName(string nameIn) {
		setName(nameIn);
	}
	void setSoldierBio(string bioIn) {
		setBio(bioIn);
	}
	void setSoldierAbility(string abilityIn) {
		setAbility(abilityIn);
	}
public:
	string getSoldierClass() {
		return soldierClass;
	}

	string getSoldierName() {
		return getName();
	}
	string getSoldierBio() {
		return getBio();
	}
	string getSoldierAbility() {
		return getAbility();
	}
};

