// MultipleInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <string>
#include <cstring>
#include <cstdlib>	
#include <iomanip>
#include <iostream>
#include "Faceless.h"
#include "Codex.h"
#include "Spectre.h"
#include "Wizard.h"
#include "Templar.h"
#include "Gunner.h"
using namespace std;

int main()
{
	// Alien objects
	Faceless faceless;
	Codex codex;
	Spectre spectre;
	// Soldier objects
	Wizard wizard;
	Templar templar;
	Gunner gunner;
	// Testing outputs
	// Alien # 1
	cout << "Alien #1" << endl;
	cout << "Name: " + faceless.getAlienName() << endl;
	cout << "Primary Class: " + faceless.getAlienClass() << endl;
	cout << "Secondary Class: " + faceless.getSecondaryClass() << endl;
	cout << "Bio: " + faceless.getAlienBio() << endl;
	cout << "Ability: " + faceless.getAlienAbility() << endl;
	cout << "\n";
	// Alien # 2
	cout << "Alien #2" << endl;
	cout << "Name: " + codex.getAlienName() << endl;
	cout << "Primary Class: " + codex.getAlienClass() << endl;
	cout << "Secondary Class: " + codex.getSecondaryClass() << endl;
	cout << "Bio: " + codex.getAlienBio() << endl;
	cout << "Ability: " + codex.getAlienAbility() << endl;
	cout << "\n";
	// Alien # 3
	cout << "Alien #1" << endl;
	cout << "Name: " + spectre.getAlienName() << endl;
	cout << "Primary Class: " + spectre.getAlienClass() << endl;
	cout << "Secondary Class: " + spectre.getSecondaryClass() << endl;
	cout << "Bio: " + spectre.getAlienBio() << endl;
	cout << "Ability: " + spectre.getAlienAbility() << endl;
	cout << "\n";
	// Soldier # 1
	cout << "Soldier #1" << endl;
	cout << "Name: " + wizard.getSoldierName() << endl;
	cout << "Primary Class: " + wizard.getSoldierClass() << endl;
	cout << "Secondary Class: " + wizard.getSecondaryClass() << endl;
	cout << "Bio: " + wizard.getSoldierBio() << endl;
	cout << "Ability: " + wizard.getSoldierAbility() << endl;
	// Soldier # 2
	cout << "Soldier #2" << endl;
	cout << "Name: " + templar.getSoldierName() << endl;
	cout << "Primary Class: " + templar.getSoldierClass() << endl;
	cout << "Secondary Class: " + templar.getSecondaryClass() << endl;
	cout << "Bio: " + templar.getSoldierBio() << endl;
	cout << "Ability: " + templar.getSoldierAbility() << endl;
	// Soldier # 3
	cout << "Soldier #3" << endl;
	cout << "Name: " + gunner.getSoldierName() << endl;
	cout << "Primary Class: " + gunner.getSoldierClass() << endl;
	cout << "Secondary Class: " + gunner.getSecondaryClass() << endl;
	cout << "Bio: " + gunner.getSoldierBio() << endl;
	cout << "Ability: " + gunner.getSoldierAbility() << endl;
}
