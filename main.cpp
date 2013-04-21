/*
	Battleship - main.cpp

		Main portion of the program, execution starts here.
*/

#include <iostream>
using namespace std;
#include <conio.h>

#include "Ship.h"
#include "Player.h"
#include "Grid.h"

int main()
{
	Grid testGrid = Grid();
	testGrid.setGridAt(5,5,'o');
	testGrid.setGridAt(6,5,'o');
	testGrid.setGridAt(7,5,'o');
	testGrid.drawGrid();
	cout << "Turn: Andrew." << endl;
	cout << "Coordinates: (13,37)." << endl;
	getch();
	return 0;
}