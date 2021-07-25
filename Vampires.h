#pragma once
#include "Character.h"
class Vampires:
public Character
{
public:
	//the attack is going to be Bite
	void UseBiteAttack();
	Vampires(); //spawning a new vampire
	int Attack() override; //their amount of attack damage
	void Help() override; //helping the class out


private:


};

