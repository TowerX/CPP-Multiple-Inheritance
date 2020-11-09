#pragma once
#include <string>
using namespace std;

#ifndef ALIEN_H
#define ALIEN_H


class Alien
{
private:
	string name;
	string bio; 
	string ability;

public:

	void setName(string nameIn);
	void setBio(string bioIn);
	void setAbility(string abilityIn);

	string getName();
	string getBio();
	string getAbility();

};
#endif
