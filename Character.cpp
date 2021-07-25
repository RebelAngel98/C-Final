#include "Character.h"
#include <iostream>
#include <string>

int Character::GetHealthBar()  //when GetHealthBar is placed into play, the return is the health of the class
{
	return Health;
}
void Character::SetHealthBar(int health) //what is said when the character dies
{
	if (health < 0) {
		health = 0;
		std::cout << "\n\n\t" << Name << " is dead. GG.";
	}
	
	Health = health;
}
void Character::DisplayCharacterStat() { //character stats of health, basically the same as getting HealthBar

	std::cout << "\n\n\t" << Name << " is currently at " << Health << ".";
}
void Character::Talk(std::string stuffToSay) { //character talking
	std::cout << "\n" << Name << " saids " << stuffToSay << std::endl;
}
void Character::Talk(std::string stuffToSay, std::string name) //same as above
{
	std::cout << "\n" << Name << " saids " << stuffToSay << std::endl;
}
int Character::Attack() //the attack health. 
{
	//this is the attack method for all of our classes
	return 10;
}
void Character::Help() //the main help if the user wants help
{
	std::cout << "\n\nThis is the N.P.C Help!\n";
}