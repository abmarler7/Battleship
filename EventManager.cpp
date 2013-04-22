#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "EventManager.h"
#include "Player.h"

EventManager::EventManager(int newAmount, vector <Player> &newPlayers)
{
	playerAmount = newAmount;
	players = newPlayers;
	turn = 0; //Player 1's turn.
}

EventManager::~EventManager()
{

}

void EventManager::displayPlayers()
{
	for (int i = 0; i < players.size(); i++)
		cout << players[i].getName() << ", " << players[i].getType() << endl;
}