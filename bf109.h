#ifndef BF109_H_INCLUDED
#define BF109_H_INCLUDED

#include "propPlane.h"
#include "mg131.h"
#include "mg151.h"
#include <vector>

using namespace std;

class bf109 : public propPlane 
{
	public:
		mg131* rightNoseGun;
		mg131* leftNoseGun;
		
		mg151* centerNoseGun;

		char* name(){return (char*)"BF109";}

		double weight(){return 3148;}
		double wingSpan(){return 9.925;}
		double topSpeed(){return 640;}
		double climbrate(){return 17.0;}
		
		
		double propellorDiameter(){return 3.0;}
		
		bf109()
		{
			rightNoseGun = new mg131();
			leftNoseGun = new mg131();
			centerNoseGun = new mg151();
			
			machineGuns->push_back(rightNoseGun);
			machineGuns->push_back(leftNoseGun);
			cannons->push_back(centerNoseGun);
		}
};

#endif /* BF109_H */
