#pragma once
#include <string>
#include "GameStructure.h"

class Character
	:public GameStructure
{
public:
	std::string Name; //the name of the class
	int GetHealthBar(); //recieving the health bar
	void SetHealthBar(int health); //setting the health bar
	//character stats
	void DisplayCharacterStat(); //character stats for all classes
	//polymorphism
	void Talk(std::string stuffToSay); //talking
	void Talk(std::string stuffToSay, std::string name); //talking
	virtual int Attack(); //their attacks
	void Help() override; //the personal classes help

private:
	int Health;



















































};

