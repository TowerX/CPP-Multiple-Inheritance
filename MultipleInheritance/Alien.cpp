#include<string>
#include "Alien.h"

void Alien::setName(string nameIn) {
	name = nameIn;
}

void Alien::setBio(string bioIn) {
	bio = bioIn;
}

void Alien::setAbility(string abilityIn) {
	ability = abilityIn;
}

string Alien::getName() {
	return name;
}

string Alien::getBio() {
	return bio;
}

string Alien::getAbility() {
	return ability;
}


