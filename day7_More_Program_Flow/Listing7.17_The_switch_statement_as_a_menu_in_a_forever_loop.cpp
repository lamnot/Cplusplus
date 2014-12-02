/*
 * Listing7.17.cpp
 * Using a forever loop to manage user interaction
 *
 *  Created on: 25 Apr 2013
 *      Author: cohabo
 */
/*

#include <iostream>
using namespace std;

// type & defines
enum BOOL { FALSE, TRUE };
typedef unsigned short int USHORT;
#define EVER ;;

// prototypes
USHORT menu();
void DoTaskOne();
void DoTaskMany(USHORT);

int main()
{
	BOOL exit = FALSE;
	for (EVER)
	{
		USHORT choice = menu();
		switch(choice)
		{
		case (1):
				DoTaskOne();
		break;
		case (2):
				DoTaskMany(2);
		break;
		case(3):
				DoTaskMany(3);
		break;
		case(4):
				continue;	// redundant!
		break;
		case(5):
				exit=TRUE;
		break;
		default:
			cout <<"Please select again!\n";
			break;
		}					// end of switch
		if(exit)
			break;
	}						// end forever
	return 0;
}							// end main

USHORT menu()
{
	USHORT choice;
	cout <<"**** MENU ****\n\n";
	cout <<"(1) Choice one.\n";
	cout <<"(2) Choice two.\n";
	cout <<"(3) Choice three.\n";
	cout <<"(4) Redisplay menu.\n";
	cout <<"(5) Quit.\n\n";
	cout <<": ";
	cin >>choice;
	return choice;
}

void DoTaskOne()
{
	cout << "Task One!\n\n";
}

void DoTaskMany(USHORT which)
{
	if(which == 2)
		cout<<"Task Two!\n";
	else
		cout<<"Task Three\n";
}

*/
