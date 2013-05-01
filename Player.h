#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include "Grid.h"
#include "AircraftCarrier.h"
#include "Battleship.h"
#include "Cruiser.h"
#include "Destroyer.h"
#include "NuclearSubmarine.h"
#include "Fighter.h"
#include "Bomber.h"
#include "SpySatellite.h"


#ifndef PLAYER_H
#define PLAYER_H

class Player
{
	protected:
		string name;
		char type; //Type is 'c' for computer or 'h' for human
		Grid playerView; //The grid of what the player can see

		//Ships
		AircraftCarrier carrier;
		Battleship battleship;
		Cruiser cruiser;
		Destroyer destroyer;
		NuclearSubmarine nuclearSubmarine;

		//Aircraft
		vector <Fighter> fighters;
		vector <Bomber> bombers;
		SpySatellite satellite;

	public:
		Player(string newName, char newType, int gridSize);
		~Player();

		//Get Functions
		string getName() { return name; };
		char getType() { return type; };

		char fire(int x, int y);
		void setPosition(int x, int y, string ship);
};

#endif
