#include "Mermaids.h"
#include <iostream>
#include <string>

void Mermaids::UseSirenVoice() //attack
{
	std::cout << "\n\nSing A Deadly Song.";
}
Mermaids::Mermaids() //spawning a new mermaid
{
	std::cout << "\nMermaid was birthed.";
}
int Mermaids::Attack() //what is taken during their attack
{
	//override will do 5+ attack damage
	return 5;
}
void Mermaids::Help() //the help for mermaids
{
	std::cout << "\n\n\tAriel informs you to use your Siren Voice.";
}
