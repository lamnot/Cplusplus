/*
 * Listing9.14.cpp
 * Resolving memory leaks
 *
 *  Created on: 30 Apr 2013
 *      Author: cohabo
 */
/*
#include<iostream>
using namespace std;

class SimpleCat
{
public:
	SimpleCat(int age, int weight);
	~SimpleCat() {}
	int GetAge() const {return itsAge;}
	int GetWeight() const {return itsWeight;}

private:
	int itsAge;
	int itsWeight;
};

SimpleCat::SimpleCat(int age, int weight):
		itsAge(age), itsWeight(weight) {}

SimpleCat & TheFunction();

int main()
{
	SimpleCat & rCat = TheFunction();
	int age = rCat.GetAge();
	cout<<"rCat is: " <<age <<" years old\n";
	cout<<"rCat: " <<&rCat <<endl;
	//How do you get rid of that memory?
	SimpleCat * pCat = &rCat;
	delete pCat;
	// rCat now refers to???

	return 0;
}

SimpleCat & TheFunction()
{
	SimpleCat * pFrisky = new SimpleCat(5,9);
	cout<<"pFrisky: " << pFrisky <<endl;
	return *pFrisky;
}
*/
