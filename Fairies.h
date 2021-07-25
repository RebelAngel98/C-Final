#pragma once
#include "Character.h"
class Fairies: //draws from the character.h file
	public Character
{
public: //all the commands given to the fairy class through the Character mother class. 
	void UseFairyDust(); //attack
	Fairies(); //spawning a new class
	int Attack() override; //the attack damage
	void Help() override; //the help for fairies



};

