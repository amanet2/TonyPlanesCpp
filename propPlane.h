#ifndef PROPPLANE_H_INCLUDED
#define PROPPLANE_H_INCLUDED

#include "aircraftProperties.h"
#include "propPlaneProperties.h"
#include "machineGun.h"
#include "cannon.h"
#include <vector>

using namespace std;

class propPlane
{
	public:
	vector<machineGun*> *machineGuns;
	vector<cannon*> *cannons;

	vector<char*> *videos;
	vector<char*> *pictures;

	vector<char*>* getPictures()
	{
		return pictures;
	}
		
	vector<char*>* getVideos()
	{
		return videos;
	}
		
	virtual char* name(){ return (char*)"";}
	
	propPlane()
	{		
			machineGuns = new vector<machineGun*>();
			cannons = new vector<cannon*>();

			videos = new vector<char*>();
			pictures = new vector<char*>();
	}	

	virtual char* description(){ return (char*)"A propellor-driven plane.";}

	virtual double weight(){ return 0;}
	virtual double wingSpan(){ return 0;}
	virtual double topSpeed(){ return 0;}
	virtual double climbrate(){ return 0;}
	
	virtual double propellorDiameter(){ return 0;}
};

#endif /* PROPPLANE_H */
