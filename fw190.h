#include "propPlane.h"
#include "mg131.h"
#include "mg151.h"
#include <vector>

using namespace std;

class fw190 : public propPlane 
{

	public:
		mg131* rightNoseGun;
		mg131* leftNoseGun;
		
		mg151* rightRWGun;
		mg151* leftRWGun;
		mg151* rightLWGun;
		mg151* leftLWGun;

		char* name(){return (char*)"FW190";}

		double weight(){return 4417;}
		double wingSpan(){return 10.51;}
		double topSpeed(){return 656;}
		double climbrate(){return 15;}
		
		
		double propellorDiameter(){return 3.0;}
		
		fw190()
		{
			rightNoseGun = new mg131();
			leftNoseGun = new mg131();
			
			rightRWGun = new mg151();
			leftRWGun = new mg151();
			rightLWGun = new mg151();
			leftLWGun = new mg151();
			
			machineGuns->push_back(rightNoseGun);
			machineGuns->push_back(leftNoseGun);
			
			cannons->push_back(rightRWGun);
			cannons->push_back(leftRWGun);
			cannons->push_back(rightLWGun);
			cannons->push_back(leftLWGun);
		}
};
