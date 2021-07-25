#pragma once
#include "Character.h"
class Mermaids:
public Character 
{
public:
	//Siren Attack
	void UseSirenVoice();
	Mermaids(); //spawning a new mermaid
	int Attack() override; //the attack
	void Help() override; //the help
private:




};

