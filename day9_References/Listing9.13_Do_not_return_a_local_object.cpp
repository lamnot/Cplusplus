/*
 * Listing9.13.cpp
 * Returning a reference to an object
 *  which no longer exists
 *
 *  Created on: 30 Apr 2013
 *      Author: cohabo
 */

/*
// Headers and includes
#include<iostream>
using namespace std;

// class declarations
class SimpleCat
{
public:
	SimpleCat(int age, int weight);
	~SimpleCat() {}
	int GetAge() {return itsAge;}
	int GetWeight() {return itsWeight;}
private:
	int itsAge;
	int itsWeight;
};

SimpleCat::SimpleCat(int age, int weight):
itsAge(age), itsWeight(weight)
{}

// Function declarations
SimpleCat & rTheFunction();

// Main programme functions
int main()
{
	SimpleCat & rCat = rTheFunction();
	int age = rCat.GetAge();
	int weight = rCat.GetWeight();
	cout<<"rCat is: " <<age <<" years old and weighs "<<weight <<" kgs\n";
	return 0;
}

SimpleCat & rTheFunction()
{
	SimpleCat Frisky(5,9);
	return Frisky;
}
*/
