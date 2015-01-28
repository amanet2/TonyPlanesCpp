#ifndef MACHINEGUN_H_INCLUDED
#define MACHINEGUN_H_INCLUDED

#include "fireArm.h"

class machineGun
{
	public:
	virtual char* description(){return (char*)"provides decent damage.";}
		
	virtual int rateOfFire(){ return 0;}
	virtual double velocity(){ return 0;}
	virtual double caliber(){ return 0;}

};

#endif /* MACHINEGUN_H */
