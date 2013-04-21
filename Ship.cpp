/*
	Battleship - Ship.cpp

		Contains functions for the Ship class.
*/

#include "Ship.h"
#include "Fighter.h"
#include "Bomber.h"
#include "Battleship.h"
#include "NuclearSubmarine.h"
#include "AircraftCarrier.h"
#include "Cruiser.h"
#include "Destroyer.h"
#include "SpySatellite.h"

Ship::Ship()
{
	//Default Constructor
}

Ship::~Ship()
{
	//Default Destructor
}

class Fighter : public Ship
{
	//Derived Fighter class
}

class Bomber : public Ship
{
	//Derived Bomber class
}

class Battleship : public Ship
{
	//Derived Battleship class
}

class NuclearSubmarine : public Ship
{
	//Derived Nuclear Submarine class
}

class AircraftCarrier : public Ship
{
	//Derived Aircraft Carrier class
}

class Cruiser : public Ship
{
	//Derived Cruiser class
}

class Destroyer : public Ship
{
	//Derived Destroyer class
}

class SpySatellite : public Ship
{
	//Derived Spy Satellite class
}
