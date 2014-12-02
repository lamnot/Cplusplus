/*
 * Listing_10.5.cpp
 * Copy Constructors
 *
 *  Created on: 19 Sep 2013
 *      Author: cohabo
 */
/*
// Headers and Includes

#include<iostream>
using namespace std;

// Types and Defines

// Class Declarations

class CAT
{
public:
	CAT();
	CAT(const CAT &);
	~CAT();
	int GetAge() const {return *itsAge;}
	int GetWeight() const {return *itsWeight;}
	void SetAge(int age) {*itsAge = age;}

private:
	int *itsAge;
	int *itsWeight;
};

// Class Definitions
CAT::CAT()
{
	itsAge = new int(5);
	itsWeight = new int(9);
}

CAT::CAT(const CAT & rhs)
{
	itsAge = new int(rhs.GetAge());
	itsWeight = new int(rhs.GetWeight());
}

CAT::~CAT()
{
	delete itsAge;
	*itsAge = 0;
	delete itsWeight;
	*itsWeight = 0;
}

int main()
{
	CAT frisky;
	cout <<"frisky's age is " <<frisky.GetAge() <<endl;
	cout <<"Setting frisky's age to 6" <<endl;
	frisky.SetAge(6);

	cout <<"\nCreating boots from frisky " <<endl;
	CAT boots(frisky);
	cout <<"boots' age is " <<boots.GetAge() <<endl;
	cout <<"frisky's age is " <<frisky.GetAge() <<endl;

	cout <<"\nSetting frisky's age to 7" <<endl;
	frisky.SetAge(7);
	cout <<"boots' age is " <<boots.GetAge() <<endl;
	cout <<"frisky's age is " <<frisky.GetAge() <<endl;

	cout <<"\nSetting boots' age to 8" <<endl;
	boots.SetAge(8);
	cout <<"boots' age is " <<boots.GetAge() <<endl;
	cout <<"frisky's age is " <<frisky.GetAge() <<endl;

	return 0;
}

*/
