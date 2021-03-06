/*
	Battleship - main.cpp

		Main portion of the program, execution starts here.
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include <conio.h>

#include "Ship.h"
#include "AircraftCarrier.h"
#include "Battleship.h"
#include "Cruiser.h"
#include "Destroyer.h"
#include "NuclearSubmarine.h"
#include "Player.h"
#include "Grid.h"
#include "EventManager.h"

int main()
{
	//Get the Grid/Board Size
	int gridSize = 0;
	cout << "Grid Size: " << endl;
	while (gridSize < 10)
		cin >> gridSize;

	int playerAmount = 0;
	vector <Player> players;

	char fire;
	int x, y, direction;

	//Player Setup
	system("CLS");
	cout << "Number of players?";
	while (playerAmount < 2) //Need at least 2 players to play.
		cin >> playerAmount;
	string setName;
	char setType;
	//Prompt the user for info and create each player.
	for (int i = 0; i < playerAmount; i++)
	{
		cout << "Name for Player " << i + 1 << ": " << endl;
		cin >> setName;
		setType = ' ';
		cout << "Is " << setName << " a human (hit 'h') or a computer (hit 'c')?" << endl;
		while (setType != 'h' && setType != 'c')
			setType = getch();
		players.push_back(Player(setName,setType,gridSize)); //Create a new Player
	}

	//Display the player list (to verify the vector and Player class are working).
	system("CLS");
	cout << "Player List:" << endl;
	for (int i = 0; i < players.size(); i++)
		cout << players[i].getName() << ", " << players[i].getType() << endl;
	cout << endl << endl << "Press Any Key to Continue." << endl;
	getch();

	system("CLS");

	EventManager em = EventManager(playerAmount, players);

	Grid testGrid = Grid(gridSize,gridSize);
	testGrid.drawGrid();

	for (int i = 0; i < playerAmount; i++)
	{
		cout << "Set position and direction of Aircraft Carrier: " << endl;
		cin >> x >> y >> direction;
		players[i].setPosition(x, y, direction, "carrier");
		
		cout << "Set position and direction of Battleship: " << endl;
		cin >> x >> y >> direction;
		players[i].setPosition(x, y, direction, "battleship");

		cout << "Set position and direction of Cruiser: " << endl;
		cin >> x >> y >> direction;
		players[i].setPosition(x, y, direction, "cruiser");

		cout << "Set position and direction of Destroyer: " << endl;
		cin >> x >> y >> direction;
		players[i].setPosition(x, y, direction, "destroyer");

		cout << "Set position and direction of Nuclear Submarine: " << endl;
		cin >> x >> y >> direction;
		players[i].setPosition(x, y, direction, "sub");
	}

	cout << "Turn: Andrew." << endl;
	cout << "Coordinates: " << endl;
	cin >> x >> y;
	fire = players[0].fire(x, y);

	if (fire == 'h')
		cout << "Hit!" << endl;
	else
		cout << "Miss" << endl;

	getch();
	return 0;
}
