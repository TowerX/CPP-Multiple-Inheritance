#include<string>
#include "Soldier.h"

void Soldier::setName(string nameIn) {
	name = nameIn;
}

void Soldier::setBio(string bioIn) {
	bio = bioIn;
}

void Soldier::setAbility(string abilityIn) {
	ability = abilityIn;
}

string Soldier::getName() {
	return name;
}

string Soldier::getBio() {
	return bio;
}

string Soldier::getAbility() {
	return ability;
}
