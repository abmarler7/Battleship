#include <iostream>
using namespace std;

#include "Grid.h"

Grid::Grid()
{
	//Initialize every position in the grid
	for (int x = 0; x < 20; x++)
	{
		for (int y = 0; y < 20; y++)
			gridSpace [x] [y] = '-';
	}
}

Grid::~Grid()
{

}

char Grid::getGridAt(int x, int y) 
{
	if (x >= 0 && x <= 20 && y >= 0 && y <= 20)
		return gridSpace [x] [y];
	else
		return 0; //Return some value to indicate that this is out of bounds
}

void Grid::setGridAt(int x, int y, char character)
{
	if (x >= 0 && x <= 20 && y >= 0 && y <= 20)
		gridSpace [x] [y] = character;
}

void Grid::drawGrid()
{
	for (int y = 0; y < 20; y++)
	{
		for (int x = 0; x < 20; x++)
			cout << gridSpace [x] [y] << " ";
		cout << endl;
	}
}