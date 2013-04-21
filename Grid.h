#ifndef GRID_H
#define GRID_H

class Grid
{
	private:
		char gridSpace [20] [20] ;
	public:
		Grid();
		~Grid();

		char getGridAt(int x, int y); //Returns the character at the current position
		void setGridAt(int x, int y, char character);
		void drawGrid(); //Draws the grid
};

#endif
