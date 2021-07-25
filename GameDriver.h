#pragma once
class GameDriver
{
public:
	//Displaying Menu
	void DisplayMenu(); 
	void RoleplayScenario(); //displaying roleplay scenario
	// void DisplayCharacterStats();
	//display maze
	void DisplayMaze(); //displaying maze
	void HelpMenu(); //displaying help menu

private: //both of these are for the maze section
	void CreateTheColumns(int ColumnStartNumber, int ColumnEndNumber);
	void CreateTheRows(int RowStartNumber, int RowEndNumber, int ColumnStartNumber, int ColumnEndNumber); 
};

