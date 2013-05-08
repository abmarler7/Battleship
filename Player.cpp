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
	if (carrier.getDirection() == 'n' || battleship.getDirection() == 'n'
		|| cruiser.getDirection() == 'n' || destroyer.getDirection() == 'n'
		|| nuclearSubmarine.getDirection() == 'n')
	{
		if (x == carrier.getX() && y >= carrier.getY()
			&& y <= (carrier.getY() + carrier.getLength()))
			return 'h';
		else if (x == battleship.getX() && y >= battleship.getY()
			&& y <= (battleship.getY() + battleship.getLength()))
			return 'h';
		else if (x == cruiser.getX() && y >= cruiser.getY()
			&& y <= (cruiser.getY() + cruiser.getLength()))
			return 'h';
		else if (x == destroyer.getX() && y >= destroyer.getY()
			&& y <= (destroyer.getY() + destroyer.getLength()))
			return 'h';
		else if (x == nuclearSubmarine.getX() && y >= nuclearSubmarine.getY()
			&& y <= (nuclearSubmarine.getY() + nuclearSubmarine.getLength()))
			return 'h';
		else
			return 'm';
	}
}

void Player::setPosition(int x, int y, char direction, string ship)
{
	if (ship == "carrier")
	{
		carrier.setX(x);
		carrier.setY(y);
		carrier.setDirection(direction);
	}
	else if (ship == "battleship")
	{
		battleship.setX(x);
		battleship.setY(y);
		battleship.setDirection(direction);
	}
	else if (ship == "cruiser")
	{
		cruiser.setX(x);
		cruiser.setY(y);
		cruiser.setDirection(direction);
	}
	else if (ship == "destroyer")
	{
		destroyer.setX(x);
		destroyer.setY(y);
		destroyer.setDirection(direction);
	}
	else if (ship == "sub")
	{
		nuclearSubmarine.setX(x);
		nuclearSubmarine.setY(y);
		nuclearSubmarine.setDirection(direction);
	}
}
