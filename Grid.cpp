#include <iostream>
using namespace std;

#include "Grid.h"

Grid::Grid()
{
	//Default Constructor
}

Grid::Grid(int newWidth, int newHeight)
{
	width = newWidth;
	height = newHeight;
	gridSpace = new char* [height];
	for (int i = 0; i < height; i++)
			gridSpace[i] = new char [width];
	//Initialize every position in the grid
	for (int x = 0; x < width; x++)
	{
		for (int y = 0; y < height; y++)
			gridSpace [x] [y] = '-';
	}
}

Grid::~Grid()
{
	for (int i = 0; i < height; i++)
		delete [] gridSpace[i];
	delete [] gridSpace;
}

char Grid::getGridAt(int x, int y) 
{
	if (x >= 0 && x < width && y >= 0 && y < height)
		return gridSpace [x] [y];
	else
		return 0; //Return some value to indicate that this is out of bounds
}

void Grid::setGridAt(int x, int y, char character)
{
	if (x >= 0 && x < width && y >= 0 && y < height)
		gridSpace [x] [y] = character;
}

void Grid::drawGrid()
{
	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
			cout << gridSpace [x] [y] << " ";
		cout << endl;
	}
}