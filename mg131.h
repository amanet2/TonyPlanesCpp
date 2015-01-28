#ifndef MG131_H_INCLUDED
#define MG131_H_INCLUDED

#include "machineGun.h"

class mg131 : public machineGun
{
	public:
	char*  description(){return (char*)"MG-131";}
		
	int rateOfFire(){ return 900;}
	double velocity(){ return 750;}
	double caliber(){ return 13.0;}
};

#endif /* MG131_H */
