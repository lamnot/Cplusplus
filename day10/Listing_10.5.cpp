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

class DOG
{
public:
	DOG();
	~DOG() {}
	int GetAge() const {return itsAge;}
	int GetWeight() const {return itsWeight;}

private:
	int itsAge;
	int itsWeight;
};

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
	itsAge = new int;
	itsWeight = new int;
	*itsAge = 5;
	*itsWeight = 9;
}

CAT::CAT(const CAT & rhs)
{
	itsAge = new int;
	itsWeight = new int;
	*itsAge = rhs.GetAge();
	*itsWeight = rhs.GetWeight();
}

CAT::~CAT()
{
	delete itsAge;
	delete itsWeight;
	*itsAge = 0;
	*itsWeight = 0;
}

DOG::DOG():
		itsAge(15),
		itsWeight(20)
{}

int main()
{
	CAT frisky;
	DOG mumps;
	cout <<"frisky's age is " <<frisky.GetAge() <<endl;
	cout <<"frisky's weight is " <<frisky.GetWeight() <<endl;

	CAT boots(frisky);
	int age;
	cout <<"Now change frisky's age ";
	cin >> age;
	frisky.SetAge(age);
	cout <<"\nboots' age is " <<boots.GetAge() <<endl;
	cout <<"boots weight is " <<boots.GetWeight() <<endl;

	cout <<"Now frisky's age is " <<frisky.GetAge() <<endl;
	cout <<"frisky's weight is " <<frisky.GetWeight() <<endl;
	cout <<"mumps age is " <<mumps.GetAge();
	cout <<"\nmumps weight is " <<mumps.GetWeight();
	return 0;
}
*/
