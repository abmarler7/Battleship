#include <iostream>
using namespace std;

#ifndef PLAYER_H
#define Player_H

class Player
{
	protected:
		string name;

	public:
		Player(string newName);
		~Player();

		//Get Functions
		string getName() { return name; };

};

#endif