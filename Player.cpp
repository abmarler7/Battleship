/*
	Battleship - Player.cpp

		Contains functions for the Player class.
*/

#include "Player.h"
#include "Grid.h"

Player::Player(string newName, char newType, int gridSize)
{
	name = newName;
	type = newType;
	playerView = Grid (gridSize, gridSize); //Initialize the grid view for the specific player
	satellite = SpySatellite(); //Initialize the player's spy satellite
}

Player::~Player()
{
	//Default Destructor
}