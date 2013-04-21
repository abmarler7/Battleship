#ifndef FIGHTER_H
#define FIGHTER_H

class Fighter
{

	private:
		int fire; //Returns hit, sink, or miss

	public:
		Fighter();
		~Fighter();

		//Get functions
		int getStatus () { return fire; };

		//Set functions
		int setStatus (int newFire) { fire = newFire; };
};

#endif