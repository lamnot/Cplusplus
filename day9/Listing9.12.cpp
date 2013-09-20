/*
 * Listing9.12.cpp
 * Passing references to objects
 *
 *  Created on: 30 Apr 2013
 *      Author: cohabo
 */
/*
// includes and header files
#include<iostream>
using namespace std;

// class declaration
class SimpleCat
{

public:
	SimpleCat();				// class constructor
	SimpleCat(SimpleCat &);		// copy constructor
	~SimpleCat();				// class destructor
		// inline accessor functions
	int GetAge() const {return itsAge;}
	void SetAge(int age) {itsAge = age;}

private:
	int itsAge;
};

// Class methods implementation
SimpleCat::SimpleCat()
{
	cout<<"SimpleCat constructor...\n";
	itsAge = 1;
}
SimpleCat::SimpleCat(SimpleCat &)
{
	cout<<"SimpleCat copy constructor...\n";
}
SimpleCat::~SimpleCat()
{
	cout<<"SimpleCat destructor...\n";
}

// Programme function declarations
const SimpleCat & rFunctionTwo(const SimpleCat & rtheCat);

// Main programme function
int main()
{
	cout<<"Making a cat...\n";
	SimpleCat Frisky;
	cout<<"Frisky is " <<Frisky.GetAge() <<" years old.\n";
	int age = 5;
	Frisky.SetAge(age);
	cout<<"Frisky is " <<Frisky.GetAge() <<" years old.\n";
	cout<<"Calling FunctionTwo...\n";
	rFunctionTwo(Frisky);
	cout<<"Frisky is " <<Frisky.GetAge() <<" years old.\n";

	return 0;
}
// Programme function definitions
// FunctionTwo passes a ref to a const object
const SimpleCat & rFunctionTwo(const SimpleCat & rtheCat)
{
	cout<<"FunctionTwo. Returning...\n";
	cout<<"Frisky is now " <<rtheCat.GetAge() <<" years old.\n";
	// theCat.SetAge(8); const!
	return rtheCat;
}
*/
