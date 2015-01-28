#include <vector>
#include <stdio.h>
#include <iostream>
#include "fireArmFunction.h"
#include "pilotFunction.h"
#include "propPlane.h"

using namespace std;

class pilot
{

	public:
	propPlane* currentPlane;
	
	pilot()
	{
		currentPlane = NULL;
	}

	pilot(propPlane* p)
	{
		currentPlane = p;
	}
	
	double fire()
	{
		int gunCount = 1;
		double damageSum = 0;
		
		cout << currentPlane->name() <<  "\n--------" << "\n";
		for(int i = 0; i < currentPlane->machineGuns->size(); i++)
		{
			machineGun* mg = currentPlane->machineGuns->at(i);
			damageSum += (mg->caliber() * mg->velocity());
			cout << "Gun " << gunCount << ": " << (mg->caliber() * mg->velocity()) << " dmg" << "\n";
			gunCount++;
		}
		for(int i = 0; i < currentPlane->cannons->size(); i++)
		{
			cannon* c = currentPlane->cannons->at(i);
			damageSum += (c->caliber() * c->velocity());
			cout << "Gun " << gunCount << ": " << (c->caliber() * c->velocity()) << " dmg" << "\n";
			gunCount++;
		}
		return damageSum;
	}
	
	virtual void describeMG(machineGun* m)
	{
		cout << "\n" << m->description() << " fires " << (m->rateOfFire()/60) << " " << m->caliber() <<"mm rounds in a second, at " << m->velocity();
		cout << " meters per second, dealing " << (m->velocity()*m->caliber()) << " damage with each round." << "\n\n";
	}

	virtual void describeC(cannon* m)
	{
		cout <<"\n"<< m->description() << " fires " << (m->rateOfFire()/60) << " " << m->caliber() <<"mm rounds in a second, at " << m->velocity();
		cout << " meters per second, dealing " << (m->velocity()*m->caliber()) << " damage with each round." << "\n\n";
	}
	
	void reload()
	{
		cout << currentPlane->name() <<  "\n--------" << "\n";
		cout << "All " << (currentPlane->machineGuns->size() + currentPlane->cannons->size()) << " guns reloaded." << "\n";
	}
	
	void printWeapons()
	{
				cout << currentPlane->name() <<  "\n--------" << "\n";
				cout << "	Armament\n	------" << "\n";
		cout << "		Machine Guns\n		------" << "\n";
		
			for(int i = 0; i < currentPlane->machineGuns->size(); i++)
			{
				machineGun* mg = currentPlane->machineGuns->at(i);
				cout << "			" << mg->description() << "\n";
				cout << "			Caliber: " << mg->caliber() << "mm" << "\n";
				cout << "			Muzzle Velocity: " << mg->velocity() << "m/s" << "\n";
				cout << "\n";
			}
			
		cout << "		Cannons\n		------" << "\n";
		
			for(int i = 0; i < currentPlane->cannons->size(); i++)
			{
				cannon* mg = currentPlane->cannons->at(i);
				cout << "			" << mg->description() << "\n";
				cout << "			Caliber: " << mg->caliber() << "mm" << "\n";
				cout << "			Muzzle Velocity: " << mg->velocity() << "m/s" << "\n";
				cout << "\n" << "\n";
			}
	}
	
	void describePlane()
	{
		cout << currentPlane->name() << " - " << currentPlane->description() << "\n--------" << "\n";
	}

	void printLoadout()
	{
		cout << currentPlane->name() << " - " << currentPlane->description() << "\n--------" << "\n";
		cout << "	Weight: " << currentPlane->weight() << "kg" << "\n";
		cout << "	Wingspan: " << currentPlane->wingSpan() << "m" << "\n";
		cout << "	Top Speed: " << currentPlane->topSpeed() << "kmph" << "\n";
		cout << "	Climb Rate: " << currentPlane->climbrate() << "m/s" << "\n";
		cout << "	Armament\n	------" << "\n";
		cout << "		Machine Guns\n		------" << "\n";
		
			for(int i = 0; i < currentPlane->machineGuns->size(); i++)
			{
				machineGun* mg = currentPlane->machineGuns->at(i);
				cout << "			" << mg->description() << "\n";
				cout << "			Caliber: " << mg->caliber() << "mm" << "\n";
				cout << "			Muzzle Velocity: " << mg->velocity() << "m/s" << "\n";
				cout << "\n";
			}
			
		cout << "		Cannons\n		------" << "\n";
		
			for(int i = 0; i < currentPlane->cannons->size(); i++)
			{
				cannon* mg = currentPlane->cannons->at(i);
				cout << "			" << mg->description() << "\n";
				cout << "			Caliber: " << mg->caliber() << "mm" << "\n";
				cout << "			Muzzle Velocity: " << mg->velocity() << "m/s" << "\n";
				cout << "\n" << "\n";
			}
	}
};
