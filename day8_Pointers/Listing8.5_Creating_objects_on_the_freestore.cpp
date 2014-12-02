/*
 * Listing8.5.cpp
 * Creating and deleting objects on the free store
 *
 *  Created on: 29 Apr 2013
 *      Author: cohabo
 */
/*
// Headers and includes
#include<iostream>
using namespace std;

// Class declaration
class SimpleCat
{
public:
	SimpleCat();
	~SimpleCat();
private:
	int itsAge;
};

SimpleCat::SimpleCat()
{
	cout<<"Constructor called.\n";
	itsAge = 1;
}
SimpleCat::~SimpleCat()
{
	cout<<"Destructor called.\n";
}

//Main program

int main()
{
	cout<<"SimpleCat Frisky...\n";
	SimpleCat Frisky;					// Create SimpleCat object on the stack called Frisky
	cout<<"SimpleCat *pRags = new SimpleCat...\n";
	SimpleCat *pRags = new SimpleCat;	// Create SimpleCat object on the heap pointed to
										//  by pRags.
	if(!pRags) {						// Check the value returned by new
		cout <<"Error! No memory for pRags";
		return 0;
	}
	cout<<"Delete pRags...\n";
	delete pRags;
	pRags = 0;

	cout<<"Exiting, watch Frisky go...\n";

	return 0;

}
*/
