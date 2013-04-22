#include <iostream>
#include <vector>
using namespace std;

#include "Player.h"

#ifndef EVENT_MANAGER
#define EVENT_MANAGER

class EventManager
{
	private:
		int playerAmount, turn;
		vector <Player> players;
	public:
		EventManager(int newAmount, vector <Player> &newPlayers);
		~EventManager();

		void displayPlayers(); //Just a function to verify the vector is properly passed in.  Will delete later.
};

#endif