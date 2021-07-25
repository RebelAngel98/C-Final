#include "Vampires.h"
#include <iostream>
#include <string>

void Vampires::UseBiteAttack() //attack
{
	std::cout << "\n\nBites down on the enemy.";
}
Vampires::Vampires() //a vampire spawned
{
	std::cout << "\nA Vampire spawned from the darkness.";
}
int Vampires::Attack() //how much health is taken during the attack
{
	//override will do 6+ attack damage
	return 6;
}
void Vampires::Help() //help for vampires
{
	std::cout << "\n\n\tDracula needs you to focus your ability and use your Bite Attack!";
}
