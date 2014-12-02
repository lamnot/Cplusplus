/*
 * Listing8.7.cpp
 * Pointer as data members
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
	SimpleCat();
	~SimpleCat();

	int GetAge() const {return *pItsAge;}
	void SetAge(int age) {*pItsAge = age;}

	int Getweight() const {return *pItsWeight;}
	void SetWeight(int weight) {*pItsWeight = weight;}

private:
	int * pItsAge;
	int * pItsWeight;
};

SimpleCat::SimpleCat()
{
	pItsAge = new int(2);		// allocate memory on the free store
	pItsWeight = new int(5);	// initialise it with value 2 and 5
}

SimpleCat::~SimpleCat()
{
	delete pItsAge;
	pItsAge = 0;
	delete pItsWeight;
	pItsWeight = 0;
}

int main()
{
	SimpleCat * pFrisky = new SimpleCat;
	if(!pFrisky) {
		cout<<"Error! No memory for pFrisky.";
		return 0;
	}

	cout<<"pFrisky is " <<pFrisky->GetAge() <<" years old.\n";
	pFrisky->SetAge(5);
	cout<<"pFrisky is " <<pFrisky->GetAge() <<" years old.\n";
	delete pFrisky;

	return 0;
}

*/
