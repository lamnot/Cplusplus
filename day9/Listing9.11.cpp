/*
 * Listing9.11.cpp
 * Passing const pointers
 *
 *  Created on: 30 Apr 2013
 *      Author: cohabo
 */
/*
#include<iostream>
using namespace std;

// class interface / declaration
class SimpleCat
{
public:
	SimpleCat();				// class constructor
	SimpleCat(SimpleCat &);	// class copy constructor
	~SimpleCat();				//	class destructor

	int GetAge() const {return itsAge;}	// with inline implementations
	void SetAge(int age) {itsAge = age;}

private:
	int itsAge;
};

// class implementations / definitions
SimpleCat::SimpleCat()
{
	cout<<"SimpleCat Constructor...\n";
	itsAge = 1;
}
SimpleCat::SimpleCat(SimpleCat & )
{
	cout<<"SimpleCat Copy Constructor...\n";
}
SimpleCat::~SimpleCat()
{
	cout<<"SimpleCat destructor...\n";
}

// Programme Function declarations
const SimpleCat * const FunctionTwo(const SimpleCat * const theCat);

int main()
{
	cout<<"Making a cat...\n";
	SimpleCat Frisky;
	cout<<"Frisky is " <<Frisky.GetAge() <<" years old\n";
	int age = 5;
	Frisky.SetAge(age);
	cout<<"Frisky is " <<Frisky.GetAge() <<" years old\n";
	cout<<"Calling FunctionTwo...\n";
	FunctionTwo(&Frisky);
	cout<<"Frisky is " <<Frisky.GetAge() <<" years old\n";

	return 0;
}

// Main Function definitions
// FunctionTwo passes a const pointer
const SimpleCat * const FunctionTwo(const SimpleCat * const theCat)
{
	cout<<"Function two. Returning...\n";
	cout<<"Frisky is now " <<theCat->GetAge() <<" years old.\n";
	// theCat->SetAge(8); //const!
	return theCat;
}

*/
