/*
 * Listing_10.15.cpp
 * The Assignment Operator "operator=()"
 *
 *  Created on: 25 Aug 2014
 *      Author: cohabo
 */
/*
// Headers and Includes
#include<iostream>
using namespace std;

// Class Declarations

class CAT
{
public:
	CAT(); //default constructor
	// Omitted copy constructor and default destructor
	int GetAge() const { return *itsAge; }
	int GetWeight() const { return *itsWeight; }
	void SetAge(int age) { *itsAge = age; }
	CAT operator=( const CAT & );

private:
	int *itsAge;
	int *itsWeight;
};

// Class Definitions

CAT::CAT()
{
	itsAge = new int;
	itsWeight = new int;
	*itsAge = 5;
	*itsWeight = 9;
}

CAT CAT::operator=( const CAT & rhs )
{
	if (this == &rhs )
		return *this;
	delete itsAge;
	delete itsWeight;
	itsAge = new int;
	itsWeight = new int;
	*itsAge = rhs.GetAge();
	*itsWeight = rhs.GetWeight();
	return *this;
}

// Main Program

int main()
{
	CAT frisky;
	cout << "Frisky's age is " << frisky.GetAge() <<endl;
	cout << "Setting Frisky's age to 6... " <<endl;
	frisky.SetAge(6);
	CAT whiskers;
	cout << "Whiskers age is " << whiskers.GetAge() <<endl;
	cout << "Copying Frisky to Whiskers.... \n";
	whiskers = frisky;
	cout << "Whiskers age is " << whiskers.GetAge() <<endl;
	return 0;
}

*/
