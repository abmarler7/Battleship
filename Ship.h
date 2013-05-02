/*
	Battleship - Ship.h

		Contains declarations for the Ship class.
*/

#ifndef SHIP_H
#define SHIP_H

class Ship
{
	protected:
		int x, y, z, health, damage, length;
		char direction;

	public:
		Ship();
		~Ship();

		//Get Functions
		int getX() { return x; };
		int getY() { return y; };
		int getZ() { return z; };
		char getDirection() { return direction; };
		int getHealth() { return health; };
		int getLength() { return length; };
		//Set Functions
		void setX(int newX) { x = newX; };
		void setY(int newY) { y = newY; };
		void setZ(int newZ) { z = newZ; };
		void setDirection(char newDir) { direction = newDir; };
		void setHealth(int newHealth) { health = newHealth; };
		void setLength(int newLength) { length = newLength; };

};

#endif
