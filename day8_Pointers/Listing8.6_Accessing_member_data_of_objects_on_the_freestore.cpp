/*
 * Listing8.6.cpp
 * Accessing data members of objects on the free store/heap
 *
 *  Created on: 29 Apr 2013
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
	SimpleCat() {itsAge = 2;}
	~SimpleCat() {}
	int GetAge() const {return itsAge;}
	void SetAge(int age) {itsAge = age;}
private:
	int itsAge;
};

// Main program

int main()
{
	SimpleCat * pFrisky = new SimpleCat;
	if(!pFrisky) {
		cout <<"Error! No memory for pFrisky";
		return 0;
	}

	// Dereference the pointer and call the dot operator on the object pointed to by the
	// pointer. Parentheses assure the pointer will be dereferenced before dot is called.

	cout<<"pFrisky is " <<(*pFrisky).GetAge()	// Dereferencing an object on the freestore
		<<" years old\n"; 						// 	using the indirection operator.
	cout<<"pFrisky is " <<pFrisky->GetAge() 	// Use of the indirection operator shorthand.
		<<" years old\n";
	pFrisky->SetAge(5);
	cout<<"pFrisky is " <<(*pFrisky).GetAge()
		<<" years old\n";
	cout<<"pFrisky is " <<pFrisky->GetAge() 	// Use dereferencing/indirection shorthand.
		<<" years old\n";
	delete pFrisky;
	pFrisky = 0;

	return 0;
}
*/
