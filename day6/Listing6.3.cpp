/*
 * Listing6.3.cpp
 *  Demonstrates declaration of a class and
 *  definition of class member function
 *
 *  Created on: 29 Nov 2012
 *      Author: hp
 */
/*
#include <iostream>			// for cout
using namespace std;		// for

class Cat					// begin declaration for the class
{
public:						// begin public section
	int GetAge();			// accessor function
	void SetAge(int age);	// accessor function
	void Meow();			// general function
private:					// begin private section
	int itsAge;				// member variable
};
int Cat::GetAge() {			// definition of GetAge accessor function
	return itsAge;			// returns value of itsAge member
}
void Cat::SetAge(int age) {	// definition of SetAge accessor function passed in by
	itsAge = age;			// returns sets data variable (data) itsAge to value parameter age
}
void Cat::Meow() {			// definition of Meow member function (method)
	cout << "Meouw!!!\n";	// prints "meouw" to screen.
}
int main()
{
	Cat Frsky;
	int x;
	cout << "What is Frsky's age? ";
	cin >> x;
	Frsky.SetAge(x);
	Frsky.Meow();
	cout << "Frsky's age is " << Frsky.GetAge() <<endl;
	Frsky.Meow();
	return 0;
}
*/
