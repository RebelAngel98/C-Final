#include "GameDriver.h"
#include <iostream>
#include "time.h"
#include "Fairies.h"
#include "Vampires.h"
#include "Mermaids.h"

//the folder where I have displaymenu, roleplay scenario, maze, and help menu. This is the main hub of activity for the whole program

void GameDriver::DisplayMenu()
{
	std::cout << "\n\n\t****Please Make A Selection Below****\n\n";
	std::cout << "\n\nOption 1: Roleplay Senario. Enter 1.";
	std::cout << "\n\nOption 2: Maze. Enter 2  to Display.";
	std::cout << "\n\nOption 3: Help Menu. Enter 3 for Help Menu.";
	std::cout << "\n\nOption 4: Quit the Program. Enter 4.";
	std::cout << "Enter Here >> ";

	//home screen, choosing between 1 and 4
	int MenuChoice = 0;
	std::cin >> MenuChoice;
	if (!std::cin||MenuChoice>4||MenuChoice<1)
	{
		std::cout << "\n\n\t****Wrong Input****";
		std::cin.clear();
		std::cin.ignore();
		DisplayMenu();
	}
	else
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "\n\n\t***You Made A Great Decision!***\n\n";
		std::cout << "\n\nYou chose " << MenuChoice << "!\n\n" ;
		switch (MenuChoice)
		{
		case 1:
			RoleplayScenario();
			break;
		case 2:
			DisplayMaze();
			break;
		case 3:
			HelpMenu();
			break;
		case 4:
			std::cout << "\n\n***Exit*** //Hint: Try 1 & 2\n\n";
			break;
		default:
			break;
		}
	}
}

void GameDriver::RoleplayScenario()
{
	//======Roleplay Scenario=====
	//new fairies
	Fairies red_fairy;
	Fairies blue_fairy;
	//their names
	red_fairy.Name = "Cornelius";
	blue_fairy.Name = "Thumbelina";
	//health of the Fairies
	red_fairy.SetHealthBar(250);
	blue_fairy.SetHealthBar(250);
	std::cout << "The starting Health for this Fairy is " << red_fairy.GetHealthBar() << std::endl;
	std::cout << "The starting Health for this Fairy is " << blue_fairy.GetHealthBar() << std::endl;
	//character stats
	red_fairy.DisplayCharacterStat();
	blue_fairy.DisplayCharacterStat();

	//new Mermaids
	Mermaids green_mermaid;
	Mermaids gold_mermaid;
	//names
	green_mermaid.Name = "Starbucks";
	gold_mermaid.Name = "Melody";
	//health
	green_mermaid.SetHealthBar(250);
	gold_mermaid.SetHealthBar(250);
	std::cout << "The starting Health for this Mermaid is " << green_mermaid.GetHealthBar() << std::endl;
	std::cout << "The starting Health for this Mermaid is " << gold_mermaid.GetHealthBar() << std::endl;
	//character stats
	green_mermaid.DisplayCharacterStat();
	gold_mermaid.DisplayCharacterStat();

	//new Vampires
	Vampires black_vampire;
	Vampires white_vampire;
	//name
	black_vampire.Name = "Sebastian";
	white_vampire.Name = "Claude"; //Based on Black Butler Anime
								   //health
	black_vampire.SetHealthBar(300);
	white_vampire.SetHealthBar(300);
	std::cout << "The starting Health for this Vampire is " << black_vampire.GetHealthBar() << std::endl;
	std::cout << "The starting Health for this Vampire is " << white_vampire.GetHealthBar() << std::endl;
	//character stats
	black_vampire.DisplayCharacterStat();
	white_vampire.DisplayCharacterStat();

	//-----Talking for all Characters-----

	red_fairy.Talk("I'll protect you Thumbelina! Stay back from the fighting!");
	blue_fairy.Talk("Thank you Cornelius, however I am sick of being on the sidelines!");
	blue_fairy.Attack();
	red_fairy.Attack();

	black_vampire.Talk("Claude, I do believe we have a challenge.");
	white_vampire.Talk("As sad as I am to admit it, I do believe you are correct.");
	black_vampire.Attack();
	white_vampire.Attack();

	green_mermaid.Talk("We cannot give up on this stupid fight.");
	gold_mermaid.Talk("I agree, these idiots are going down. We are superior");
	green_mermaid.Attack();
	//Help for all species displayed below
	red_fairy.Help();
	green_mermaid.Help();
	white_vampire.Help();
}
void GameDriver::DisplayMaze()
{
	//=============MAze Section==============
	std::cout << "\n\n\n\n\t ***Maze Runner*** \n\n"; //based off of the Maze Runner movie
	std::cout << "\n\nWhat if I want to be a Runner?\n\n";
	std::cout << "\n\nNo one wants to be a Runner.\n\n";

	//Maze using 2D array
	//randomized
	//30 x 30 & 25 x 25
	// 1 = wall 0 = space 

	int n; //number generator
	int ResponseColumn; //response to how many columns across
	int ResponseRow; //response to how many rows down

	std::cout << "\nHow many columns do you wish to have? "; //asking the user
	std::cin >> ResponseColumn;
	std::cout << "\nHow many rows do you wish to have? "; //asking the user
	std::cin >> ResponseRow;

	
	CreateTheRows(0, ResponseRow, 0, ResponseColumn); //a function needed for the maze to begin
	srand(time(0));
	
}
void CreateTheColumns(int ColumnStartNumber, int ColumnEndNumber) {

	//int StepsCounter = 0;
	int MazeWall; //number generator
	if (ColumnStartNumber < ColumnEndNumber) //recursive case
	{
		MazeWall = rand() % 2; //for the random number of 1 & 0. 
		std::cout << MazeWall; //prints out the random number
		ColumnStartNumber++;
		CreateTheColumns(ColumnStartNumber, ColumnEndNumber);
	}
	else
	{ //base case
		return;
	}
}
void CreateTheRows(int RowStartNumber, int RowEndNumber, int ColumnStartNumber, int ColumnEndNumber)
{
	if (RowStartNumber < RowEndNumber)
	{
		CreateTheColumns(ColumnStartNumber, ColumnEndNumber);
		std::cout << std::endl;
		RowStartNumber++;
		CreateTheRows(RowStartNumber, RowEndNumber, ColumnStartNumber, ColumnEndNumber);
	}
	else
	{
		return;
	}


}

//the maze portion of the assignment
//another section of maze from Create the Column and Create the Rows. Both in the DisplayMaze section
void GameDriver::CreateTheColumns(int ColumnStartNumber, int ColumnEndNumber)
{

	//int StepsCounter = 0;
	int MazeWall; //number generator
	if (ColumnStartNumber < ColumnEndNumber) //recursive case
	{
		MazeWall = rand() % 2; //for the random number of 1 & 0. 
		std::cout << MazeWall; //prints out the random number
		ColumnStartNumber++;
		CreateTheColumns(ColumnStartNumber, ColumnEndNumber);
	}
	else
	{ //base case
		return;
	}
}
void GameDriver::CreateTheRows(int RowStartNumber, int RowEndNumber, int ColumnStartNumber, int ColumnEndNumber)
{
	if (RowStartNumber < RowEndNumber)
	{
		CreateTheColumns(ColumnStartNumber, ColumnEndNumber);
		std::cout << std::endl;
		RowStartNumber++;
		CreateTheRows(RowStartNumber, RowEndNumber, ColumnStartNumber, ColumnEndNumber);
	}
	else
	{
		return;
	}
}
void GameDriver::HelpMenu()
{
	//help menu where user finds out what they want to do
	std::cout << "\n\nOption 1: Roleplay Senario. Enter 1.";
	std::cout << "\n\nOption 2: Maze. Enter 2  to Display.";
	std::cout << "\n\nOption 3: Help Menu. Enter 3 for Help Menu.";
	std::cout << "\n\nOption 4: Quit the Program. Enter 4.";
	std::cout << "\n\n***To Exit The Program Quicker*** >> please proceed to select one of the following options and then press any key after option is displayed!";
}
