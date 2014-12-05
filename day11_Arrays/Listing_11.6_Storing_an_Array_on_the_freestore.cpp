/*
 * Listing_11.6.cpp
 * Storing and array on the free store:
 * An array of pointers to objects
 *
 *  Created on: 3 Sep 2014
 *      Author: cohabo
 */
/*
// Headers and Includes
#include<iostream>
using namespace std;

// Types and Definitions
typedef unsigned short USHORT;

// Class Declarations

class CAT
{
public:
	CAT();
	~CAT() {};
	USHORT GetAge() { return itsAge; }
	void SetAge( USHORT x ) { itsAge = x; }
private:
	int itsAge;
};

// Class Definitions

CAT::CAT():
		itsAge(1)
{}

// Main Program

int main()
{
	CAT * Family[500];
	int i;
	CAT * pCAT;

	for( i=0; i<500; i++ )
	{
		pCAT = new CAT;
		if(!pCAT) {
			cout << "ERROR! No memory for pCAT!!";
			return 0;
		} 
		else { pCAT->SetAge( 2 * i + 1 );
		Family[i] = pCAT;
		}
	}

	for( i=0; i<500; i++ )
	{
		cout <<"Cat # " <<i + 1 <<": "
				<<Family[i]->GetAge() <<endl;
	}
	return 0;
}
*/