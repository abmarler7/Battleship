#ifndef SHIP_H
#define SHIP_H

class Ship
{
	protected:
		int x, y, direction;

	public:
		Ship();
		~Ship();

		//Get Functions
		int getX() { return x; };
		int getY() { return y; };
		int getDirection() { return direction; };
		//Set Functions
		void setX(int newX) { x = newX; };
		void setY(int newY) { y = newY; };
		void setDirection(int newDir) { direction = newDir; };

};

#endif