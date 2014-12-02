/*
 * Listing9.10.cpp
 * Passing object by reference; pointers to objects
 *
 *  Created on: 30 Apr 2013
 *      Author: cohabo
 */
/*
// Headers and includes
#include<iostream>
using namespace std;

// Class declarations
class SimpleCat
{
public:
	SimpleCat();				// constructor
	SimpleCat(SimpleCat & );	// copy constructor
	~SimpleCat();				// destructor
};

SimpleCat::SimpleCat()
{
	cout<<"SimpleCat Cat Constructor...\n";
}
SimpleCat::SimpleCat(SimpleCat &)
{
	cout<<"SimpleCat Cat Copy Constructor...\n";
}
SimpleCat::~SimpleCat()
{
	cout<<"SimpleCat Cat destructor\n";
}

// Function definitions
SimpleCat FunctionOne(SimpleCat theCat);
SimpleCat* pFunctionTwo(SimpleCat * ptheCat);

// Main program
int main()
{
	cout<<"Making a cat...\n";
	SimpleCat Frisky;
	cout<<"Calling FunctionOne\n";
	FunctionOne(Frisky);
	cout<<"Calling FunctionTwo\n";
	pFunctionTwo(& Frisky);

	return 0;
}

// FunctioOne passes by value
SimpleCat FunctionOne(SimpleCat ptheCat)
{
	cout<<"Function One. Returning...\n";
	return ptheCat;
}
// FunctionTwo passes by reference
SimpleCat * pFunctionTwo(SimpleCat * ptheCat)
{
	cout<<"Function Two. Returning...\n";
	return ptheCat;
}

*/
