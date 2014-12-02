/*
 * Listing_11.7.cpp
 * Creating and array on the free store using "new"
 *
 *  Created on: 5 Sep 2014
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
	CAT() { itsAge = 2; itsWeight = 3; }
	~CAT();
	USHORT GetAge() const { return itsAge; }
	USHORT GetWeight() const {return itsWeight; }
	void SetAge( USHORT x ) { itsAge = x; }
private:
	int itsAge, itsWeight;
};

// Class Definitions

CAT::~CAT()
{
	cout << "Destructor called here!! \n";
}

// Main Program

int main()
{
	CAT * Family = new CAT[10];
	int i;
	CAT * pCat;

	for( i=0; i<10; i++ )
	{
		pCat = new CAT;
		pCat->SetAge( 2 * i + 1);
		Family[i] = *pCat;
		delete pCat;
	}

	for( i=0; i<10; i++ )
	{
		cout <<"CAT # "
				<<i + 1
				<<": "
				<<Family[i].GetAge() <<endl;
	}
	delete [] Family;
	return 0;
}
*/
