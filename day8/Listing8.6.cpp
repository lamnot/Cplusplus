/*
 * Listing8.6.cpp
 * Accessing data members of objects on the free store/heap
 *
 *  Created on: 29 Apr 2013
 *      Author: cohabo
 */

/*
#include<iostream>
using namespace std;

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

int main()
{
	SimpleCat * pFrisky = new SimpleCat;
	cout<<"pFrisky is " <<(*pFrisky).GetAge() <<" years old\n";
	cout<<"pFrisky is " <<pFrisky->GetAge() <<" years old\n";	// use dereferencing/indirection shorthand
	pFrisky->SetAge(5);
	cout<<"pFrisky is " <<(*pFrisky).GetAge() <<" years old\n";
	cout<<"pFrisky is " <<pFrisky->GetAge() <<" years old\n";	// use dereferencing/indirection shorthand
	delete pFrisky;
	pFrisky = 0;

	return 0;
}
*/
