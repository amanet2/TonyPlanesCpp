#ifndef MG151_H_INCLUDED
#define MG151_H_INCLUDED

#include "cannon.h"

class mg151 : public cannon
{
	public:
	char* description(){ return (char*)"MG-151";}

	int rateOfFire(){ return 750;}
	double velocity(){ return 805;}
	double caliber(){ return 20.0;}
};

#endif /* MG151_H */
