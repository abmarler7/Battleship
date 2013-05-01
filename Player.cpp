/*
	Battleship - Player.cpp

		Contains functions for the Player class.
*/

#include "Player.h"
#include "Grid.h"
#include "Ship.h"
#include "AircraftCarrier.h"
#include "Cruiser.h"
#include "Destroyer.h"
#include "NuclearSubmarine.h"
#include "Aircraft.h"
#include "Fighter.h"
#include "Bomber.h"
#include "SpySatellite.h"

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

char Player::fire(int x, int y)
{
	if (x = carrier.getX(), y = carrier.getY())
		return 'h';
	if (x = battleship.getX(), y = battleship.getY())
		return 'h';
	if (x = cruiser.getX(), y = cruiser.getX())
		return 'h';
}
