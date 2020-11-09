#pragma once
#include "Alien.h"
class Mechanical : public Alien
{
protected:
	Alien mechanical;
	string alienClass = "Mechanical Class";

	void setAlienName(string nameIn) {
		setName(nameIn);
	}
	void setAlienBio(string bioIn) {
		setBio(bioIn);
	}
	void setAlienAbility(string abilityIn) {
		setAbility(abilityIn);
	}

public:

	string getAlienClass() {
		return alienClass;
	}
	string getAlienName() {
		return getName();
	}
	string getAlienBio() {
		return getBio();
	}
	string getAlienAbility() {
		return getAbility();
	}
};

