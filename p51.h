#include "propPlane.h"
#include "m2.h"
#include <vector>

using namespace std;	

class p51 : public propPlane 
{
	public:
		m2* rightRWGun;
		m2* centerRWGun;
		m2* leftRWGun;
		
		m2* rightLWGun;
		m2* centerLWGun;
		m2* leftLWGun;

		char* name(){return (char*)"P51";}

		double weight(){return 4175;}
		double wingSpan(){return 11.28;}
		double topSpeed(){return 703;}
		double climbrate(){return 16.3;}

		double propellorDiameter(){return 3.0;}
		
		p51()
		{
			rightRWGun = new m2();
			centerRWGun = new m2();
			leftRWGun = new m2();
		
			rightLWGun = new m2();
			centerLWGun = new m2();
			leftLWGun = new m2();
			
			machineGuns->push_back(rightRWGun);
			machineGuns->push_back(centerRWGun);
			machineGuns->push_back(leftRWGun);
			machineGuns->push_back(centerLWGun);
			machineGuns->push_back(rightLWGun);
			machineGuns->push_back(leftLWGun);
		}
};
