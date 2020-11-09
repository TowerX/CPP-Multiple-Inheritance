#pragma once
#include <string>
using namespace std;

#ifndef SOLDIER_H
#define SOLDIER_H
class Soldier
{
private:
	string name;
	string bio;
	string ability;

public:
	Soldier() {

	}

	Soldier(string nameIn) : name(nameIn) {

	}

	void setName(string nameIn);
	void setBio(string bioIn);
	void setAbility(string abilityIn);

	string getName();
	string getBio();
	string getAbility();

};
#endif

