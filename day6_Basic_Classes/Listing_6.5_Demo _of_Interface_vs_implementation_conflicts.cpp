/*
 * Listing6.5.cpp
 *  A demonstration of violations of the interface
 *
 *  Created on: 3 Dec 2012
 *      Author: hp
 */
/*
//Headers and Includes
#include <iostream>
using namespace std;

//Types and defines
class cCat					// cCat class declaration
{
public:
	cCat(int initialAge);	// cCat class constructor
	~cCat();				// cCat class deconstructor
	int GetAge() const;		// constant, data member accessor funtion
	void SetAge(int age);	// data member accessor funtion
	void Meow();			// other member function (method)
private:
	int itsAge;				// member variable (data member)
};
cCat::cCat(int initialAge) {	// initialises itAge class variable
	itsAge = initialAge;
	cout << "cCat class constructor,\n";
}
cCat::~cCat() {
	cout << "cCat class Destructor, takes no action";
}
int cCat::GetAge() const {		// violates const(read only)
	return (itsAge++);
}
void cCat::SetAge(int age) {
	itsAge = age;
}
void cCat::Meow() {
	cout << "Meouws!!!\n";
}

//Main program
int main()
{
	cCat Frisky;		// doesn't match function declaration
	Frisky.Meow();		//
	Frisky.Bark();		// no such member function (method) available
	Frisky.itsAge = 7;	// private data member, inaccessible from outside the class
	return 0;
}
*/

