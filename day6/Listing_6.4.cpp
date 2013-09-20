/*
 * Listing6.4.cpp
 *  Demonstrates declaration of a constructor and destructor
 *  for the Cat class
 *
 *  Created on: 29 Nov 2012
 *      Author: hp
 */
/*
#include <iostream>		// for cout
using namespace std;		// standard namespace

class cCat
{
public:						// access control
	cCat(int initialAge);	// class constructor declaration
	~cCat();				// class deconstructor declaration
	int GetAge();			// accessor function
	void SetAge(int age);	// accessor function
	void Meow();			// declaration of general member function
private:					// access control
	int itsAge;				// member variable (data) declaration
};

cCat::cCat(int initialAge) { // constructor of cCat, set initial value
	itsAge = initialAge;
}
cCat::~cCat() {				 // destructor ofcCat, does nothing
}
int cCat::GetAge() {		 // returns value of itsAge data member
	return itsAge;
}
void cCat::SetAge(int age) { // passes in value of parameter age to itsAge data member
	itsAge = age;
}
void cCat::Meow() {
	cout << "Meouws!!!\n";
}

int main() {
	cCat Frsky(5);
	Frsky.Meow();
	cout << "Frsky's age at first is: " << Frsky.GetAge() << "years old" <<endl;
	Frsky.Meow();
	Frsky.SetAge(7);
	cout << "Frsky's age is: " << Frsky.GetAge() << "years old" <<endl;
	return 0;
}
*/
