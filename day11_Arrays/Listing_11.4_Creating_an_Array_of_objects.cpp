/*
 * Listing_11.4.cpp
 * Creating an array of objects
 *
 *  Created on: 3 Sep 2014
 *      Author: cohabo
 */
/*
// Headers and Includes
#include<iostream>
using namespace std;

// Types and Defines
typedef unsigned short USHORT;

// Class Declarations

class CAT
{
public:
	CAT();
	~CAT() {};
	USHORT GetAge() const { return itsAge; }
	USHORT GetWeight() const { return itsWeight; }
	void SetAge( USHORT y ) { itsAge = y; }
	void SetWeight( USHORT x ) { itsWeight = x; }

private:
	USHORT itsAge;
	USHORT itsWeight;
};

// Class Definitions

CAT::CAT()
{
	itsAge = 3;
	itsWeight = 1;

}

// Main Program
int main()
{
	CAT Litter[5];
	int i;

	for( i=0; i<5; i++ )
		Litter[i].SetWeight( 2 * i + 1 );

	for( i=0; i<5; i++ )
	{
		cout <<"Cat #" <<i + 1 <<" aged "
				<<Litter[i].GetAge() <<" weighs "
				<<Litter[i].GetWeight()<<endl;

	}
	return 0;
}

*/
