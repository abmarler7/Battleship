#ifndef GRID_H
#define GRID_H

#include <vector>

class Grid
{
	private:
		char** gridSpace;
		int width, height;
	public:
		Grid();
		Grid(int newWidth, int newHeight);
		~Grid();

		char getGridAt(int x, int y); //Returns the character at the current position
		void setGridAt(int x, int y, char character);
		void drawGrid(); //Draws the grid
};

#endif
