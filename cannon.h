#ifndef CANNON_H_INCLUDED
#define CANNON_H_INCLUDED

#include "fireArm.h"

class cannon
{
	public:
	virtual char* description(){return (char*)"provides heavy damage.";}
		
	virtual int rateOfFire(){ return 0;}
	virtual double velocity(){ return 0;}
	virtual double caliber(){ return 0;}

};

#endif /* CANNON_H */
