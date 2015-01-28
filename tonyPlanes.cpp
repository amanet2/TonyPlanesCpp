#include "pilot.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fw190.h"
#include "bf109.h"
#include "p51.h"


using namespace std;



void viewPlanes(pilot* p)
{
	char* thisChoice = (char*)malloc(sizeof(char)*64+1);	

	propPlane* viewingPlane = NULL;

	int inHere = 1;
	while(inHere == 1)
	{
	cout << "||    ||   //^\\\\   ||\\\\    ||  =======   //^\\\\   ======" << "\n";
	cout << "||    ||  //   \\\\  || \\\\   ||  ||       //   \\\\  ||   ||" << "\n";
	cout << "||====||  =======  ||  \\\\  ||  || ====  =======  ======"   << "\n";
	cout << "||    ||  ||   ||  ||   \\\\ ||  ||   ||  ||   ||  ||  \\\\" << "\n";
	cout << "||    ||  ||   ||  ||    \\\\||  =======  ||   ||  ||   \\\\" << "\n";
	cout << "						" << "\n";
	cout << "						" << "\n";
	cout << "						" << "\n";
		cout << "	CHOOSE AN OPTION BELOW		" << "\n";
		cout << "=======================================" << "\n";
		cout << "1.	VIEW BF-109" << "\n";
		cout << "2.	VIEW FW-190 " << "\n";
		cout << "3.	VIEW P - 51" << "\n";
		cout << "4.	EXIT SUBMENU" << "\n";

		fgets(thisChoice, 65, stdin);
		
		if(strcmp(thisChoice,"1\n")==0)
		{
			viewingPlane = new bf109();
			
		}
		else if(strcmp(thisChoice,"2\n")==0)
		{
			viewingPlane = new fw190();
			
		}
		else if(strcmp(thisChoice,"3\n")==0)
		{
			viewingPlane = new p51();
			
		}
		else if(strcmp(thisChoice,"4\n")==0)
		{
			return;
		}
		else cout << "\n	PLEASE TRY AGAIN\n\n";

		if(viewingPlane != NULL)
		{
			p->currentPlane = viewingPlane;
			p->printLoadout();
			viewingPlane = NULL;
		}
	}

	p->currentPlane = NULL;

	free(viewingPlane);
	//free(inHere);
	free(thisChoice);

	return;
}

void watchVideos()
{
	char* thisChoice = (char*)malloc(sizeof(char)*64+1);	

	propPlane* viewingPlane = NULL;

	int outLevel = 1;
	while(outLevel == 1)
	{
		int inHere = 1;
		while(inHere == 1)
		{
	cout << "===================" << "\n";
	cout << "||~~           ~~||" << "\n";
	cout << "||     VIDEOS    ||" << "\n";
	cout << "||~~	       ~~||" << "\n";
	cout << "===================" << "\n";
	cout << "						" << "\n";
	cout << "						" << "\n";
	cout << "						" << "\n";
			cout << "	CHOOSE AN OPTION BELOW		" << "\n";
			cout << "=======================================" << "\n";
			cout << "1.	VIEW BF-109" << "\n";
			cout << "2.	VIEW FW-190 " << "\n";
			cout << "3.	VIEW P - 51" << "\n";
			cout << "4.	EXIT SUBMENU" << "\n";

			fgets(thisChoice, 65, stdin);
		
			if(strcmp(thisChoice,"1\n")==0)
			{
				viewingPlane = new bf109();
				inHere = 0;
			}
			else if(strcmp(thisChoice,"2\n")==0)
			{
				viewingPlane = new fw190();
				inHere = 0;
			}
			else if(strcmp(thisChoice,"3\n")==0)
			{
				viewingPlane = new p51();
				inHere = 0;
			}
			else if(strcmp(thisChoice,"4\n")==0)
			{
					
					free(viewingPlane);
					
					//free(inHere);
					free(thisChoice);
				return;
			}
			else cout << "\n	PLEASE TRY AGAIN\n\n";
		}

		viewingPlane->getVideos()->push_back((char*)"ASDJHGERNE;FSLDFKJVSDLKFVS");

		inHere = 1;
		while(inHere == 1)
		{
			cout << "	" << viewingPlane->name() << " VIDEOS" << "\n";
			cout << "=======================================" << "\n";
			
			int counter = 1;

			for(int i = 0; i < viewingPlane->getVideos()->size(); i++)
			{
				cout << counter << ".	" << viewingPlane->getVideos()->at(i) << "\n";
			}
			
			cout << "Q.	QUIT\n";

			fgets(thisChoice, 65, stdin);
			if(strcmp("q\n", thisChoice)==0 || strcmp("Q\n",thisChoice) == 0)
			{
				inHere = 0;
			}	
			else if(atoi(thisChoice) > 0 && atoi(thisChoice) <= viewingPlane->getVideos()->size())
			{
				cout << "\nFUGG\n\n";
			}
			else cout << "\nERROR\n\n";
		}
	}

	free(viewingPlane);
	//free(inHere);
	free(thisChoice);

	return;
}

void viewPlanesInDetail(pilot* p)
{
	char* thisChoice = (char*)malloc(sizeof(char)*64+1);	

	propPlane* viewingPlane = NULL;

	int outLevel = 1;
	while(outLevel == 1)
	{
		int inHere = 1;
		while(inHere == 1)
		{
	cout << "=====	 ||	  //^\\\\   ||\\\\    ||  ======    ====== 				" << "\n";
	cout << "||   |	 ||	 //   \\\\  || \\\\   ||  ||        ||			" << "\n";
	cout << "=====	 ||	 =======  ||  \\\\  ||  ======	====== 	" << "\n";
	cout << "||	 ||	 ||   ||  ||   \\\\ ||  ||	    ||		" << "\n";
	cout << "||	 ||====  ||   ||  ||    \\\\||  ======	======			" << "\n";
	cout << "						" << "\n";
	cout << "						" << "\n";
	cout << "						" << "\n";
			cout << "	CHOOSE AN OPTION BELOW		" << "\n";
			cout << "=======================================" << "\n";
			cout << "1.	VIEW BF-109" << "\n";
			cout << "2.	VIEW FW-190 " << "\n";
			cout << "3.	VIEW P - 51" << "\n";
			cout << "4.	EXIT SUBMENU" << "\n";

			fgets(thisChoice, 65, stdin);
		
			if(strcmp(thisChoice,"1\n")==0)
			{
				viewingPlane = new bf109();
				inHere = 0;
			}
			else if(strcmp(thisChoice,"2\n")==0)
			{
				viewingPlane = new fw190();
				inHere = 0;
			}
			else if(strcmp(thisChoice,"3\n")==0)
			{
				viewingPlane = new p51();
				inHere = 0;
			}
			else if(strcmp(thisChoice,"4\n")==0)
			{
					p->currentPlane = NULL;

					free(viewingPlane);
					//free(inHere);
					free(thisChoice);
				return;
			}
			else cout << "\n	PLEASE TRY AGAIN\n\n";
		}

		p->currentPlane = viewingPlane;

		inHere = 1;
		while(inHere == 1)
		{
			cout << "	CHOOSE AN OPTION BELOW		" << "\n";
			cout << "=======================================" << "\n";
			cout << "1.	VIEW GUNS" << "\n";
			cout << "2.	FIRE GUNS " << "\n";
			cout << "3.	READ PLANE BIOGRAPHY" << "\n";
			cout << "4.	EXIT SUBMENU" << "\n";

			fgets(thisChoice, 65, stdin);
		
			if(strcmp(thisChoice,"1\n")==0)
			{
				p->printWeapons();
				
			}
			else if(strcmp(thisChoice,"2\n")==0)
			{
				p->fire();
				
			}
			else if(strcmp(thisChoice,"3\n")==0)
			{
				p->describePlane();
				
			}
			else if(strcmp(thisChoice,"4\n")==0)
			{
				inHere = 0;
			}
			else cout << "\n	PLEASE TRY AGAIN\n\n";
		}
	}

	
	p->currentPlane = NULL;

	free(viewingPlane);
	//free(inHere);
	free(thisChoice);

	return;
}

void viewWeapons(pilot* p)
{
	char* thisChoice = (char*)malloc(sizeof(char)*64+1);	

	machineGun* viewingMG = NULL;
	cannon* viewingC = NULL;

	int inHere = 1;
	while(inHere == 1)
	{
	cout << "||      ||  ======   //^\\\\   =====  ======  ||\\\\    ||  ======" << "\n";
	cout << "||      ||  ||	    //   \\\\  ||   | ||  ||  || \\\\   ||  ||" << "\n";
	cout << "||	||  ======  =======  =====  ||  ||  ||  \\\\  ||  ======"    << "\n";
	cout << "|| //\\\\ ||  ||      ||   ||  ||     ||  ||  ||   \\\\ ||      ||" << "\n";
	cout << "||//  \\\\||  ======  ||   ||  ||     ======  ||    \\\\||  ======" << "\n";
	cout << "						" << "\n";
	cout << "						" << "\n";
	cout << "						" << "\n";
		cout << "	CHOOSE AN OPTION BELOW		" << "\n";
		cout << "=======================================" << "\n";
		cout << "1.	VIEW MG-131" << "\n";
		cout << "2.	VIEW MG-151 " << "\n";
		cout << "3.	VIEW M2 .50" << "\n";
		cout << "4.	EXIT SUBMENU" << "\n";

		fgets(thisChoice, 65, stdin);
		
		if(strcmp(thisChoice,"1\n")==0)
		{
			viewingMG = new mg131();
			
		}
		else if(strcmp(thisChoice,"2\n")==0)
		{
			viewingC = new mg151();
			
		}
		else if(strcmp(thisChoice,"3\n")==0)
		{
			viewingMG = new m2();
			
		}
		else if(strcmp(thisChoice,"4\n")==0)
		{
			return;
		}
		else cout << "\n	PLEASE TRY AGAIN\n\n";

		if(viewingMG == NULL && viewingC != NULL){
			p->describeC(viewingC);	
			viewingC = NULL;}
		else if(viewingMG != NULL && viewingC == NULL){
			p->describeMG(viewingMG);
			viewingMG = NULL;}
	}


	free(viewingMG);
	free(viewingC);
	//free(inHere);
	free(thisChoice);

	return;
}

int main()
{
	pilot* thePilot = new pilot();

	int running = 1;
	char* theChoice = (char*)malloc(sizeof(char)*64+1);
	while(running == 1)
	{
		cout << "===================" << "\n";
		cout << "||~~           ~~||" << "\n";
		cout << "||   MAIN MENU   ||" << "\n";
		cout << "||~~           ~~||" << "\n";
		cout << "===================" << "\n";	
	
		cout << "	CHOOSE AN OPTION BELOW		" << "\n";
		cout << "=======================================" << "\n";
		cout << "1.	VIEW PLANES IN THE HANGAR" << "\n";
		cout << "2.	VIEW A PLANE IN DETAIL" << "\n";
		cout << "3.	VIEW ARMAMENTS" << "\n";
		cout << "4.	VIEW PLANE VIDEOS" << "\n";
		cout << "Q.	EXIT PLANES" << "\n";

	
		fgets(theChoice, 65 ,stdin);

		if(strcmp(theChoice, "Q\n") == 0 || strcmp(theChoice, "q\n")==0)
			running = 0;
		else if(strcmp(theChoice, "1\n") == 0)
		{
			viewPlanes(thePilot);
		}
		else if(strcmp(theChoice, "2\n") == 0)
		{
			viewPlanesInDetail(thePilot);
		}
		else if(strcmp(theChoice, "3\n") == 0)
		{
			viewWeapons(thePilot);
		}
		else if(strcmp(theChoice, "4\n") == 0)
		{
			watchVideos();
		}
		else
		{
			cout << "\n	PLEASE CHOOSE A VALID OPTION\n\n" ;
		}
	
	}

	free(theChoice);
	free(thePilot);

	return 0;
}
