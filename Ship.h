/*
	Battleship - Ship.h

		Contains declarations for the Ship class.
*/

#ifndef SHIP_H
#define SHIP_H

class Ship
{
	protected:
		int x, y, z, direction, health, damage;

	public:
		Ship();
		~Ship();

		//Get Functions
		int getX() { return x; };
		int getY() { return y; };
		int getZ() { return z; };
		int getDirection() { return direction; };
		int getHealth() { return health; };
		//Set Functions
		void setX(int newX) { x = newX; };
		void setY(int newY) { y = newY; };
		void setZ(int newZ) { z = newZ; };
		void setDirection(int newDir) { direction = newDir; };
		void setHealth(int newHealth) { health = newHealth; };

};

#endif
