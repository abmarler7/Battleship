#ifndef FIGHTER_H
#define FIGHTER_H

class Fighter
{
private:
	int fire;

public:
	//Get functions
	int getStatus () { return fire };

	//Set functions
	int setStatus (int newFire) { fire = newFire };
}

#endif
