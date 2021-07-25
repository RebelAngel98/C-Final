#include "Fairies.h"
#include <iostream>
#include <string>

void Fairies::UseFairyDust() //the attack that was given to Fairies
{
	std::cout << "\n\nThrowing Fairy Dust made the enemies blind!";
}
Fairies::Fairies() //when you put in Fairies in the .cpp GameDriver it spawns a new fairy
{
	std::cout << "\nA Fairy was just dropped from the sky!";
}
int Fairies::Attack() //how much damage the attack gives is here
{
	//override 4+ attack damage
	return 4;
}
void Fairies::Help() //the help for the fairy class 
{
	std::cout << "\n\tFae highly recommends that you attack with Fairy Dust.";
}