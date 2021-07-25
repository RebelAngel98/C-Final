#include <iostream>
#include <string>

//gamestructure is where the virtual help for the roleplay scenario is located. 
#include "GameStructure.h"
#include "Character.h" //character holds the class of all the mermaids, vampires, fairies
#include "GameDriver.h" //Game driver is where the display menu function comes into play as well as display maze, RP scenario, and help menu

//I included all the .h files here for easier use and access if anything needs to be changed
#include "Fairies.h"
#include "Mermaids.h"
#include "Vampires.h"
#include "Source.h"


int main() 
{
	//introduction 
	//the menu screen
	GameDriver game_driver;
	game_driver.DisplayMenu();
	//Only Display Menu is required because it brings the user to all the other options listed in the display menu
	//game driver is the cpp file that the Display Menu comes from. 



	return 0;
}



