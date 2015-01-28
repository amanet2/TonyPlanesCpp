#ifndef M2_H_INCLUDED
#define M2_H_INCLUDED


#include "machineGun.h"

class m2 : public machineGun
{
	char* description(){return (char*)"Browning M2 0.50";}
	
	int rateOfFire(){ return 850;}
	double velocity(){ return 890;}
	double caliber(){ return 12.7;}
};

#endif /* M2_H */
