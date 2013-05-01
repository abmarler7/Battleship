/*
	Battleship - Player.cpp

		Contains functions for the Player class.
*/

#include <string>
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
	if (x == carrier.getX(), y == carrier.getY())
		return 'h';
	else if (x == battleship.getX(), y == battleship.getY())
		return 'h';
	else if (x == cruiser.getX(), y == cruiser.getX())
		return 'h';
	else if (x == destroyer.getX(), y == destroyer.getY())
		return 'h';
	else if (x == nuclearSubmarine.getX(), y == nuclearSubmarine.getY())
		return 'h';
	else
		return 'm';
}

void Player::setPosition(int x, int y, string ship)
{
	if (ship == "carrier")
	{
		carrier.setX(x);
		carrier.setY(y);
	}
	else if (ship == "battleship")
	{
		battleship.setX(x);
		battleship.setY(y);
	}
	else if (ship == "cruiser")
	{
		cruiser.setX(x);
		cruiser.setY(y);
	}
	else if (ship == "destroyer")
	{
		destroyer.setX(x);
		destroyer.setY(y);
	}
	else if (ship == "sub")
	{
		nuclearSubmarine.setX(x);
		nuclearSubmarine.setY(y);
	}
}