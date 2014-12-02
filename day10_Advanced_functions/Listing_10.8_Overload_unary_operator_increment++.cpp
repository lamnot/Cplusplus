/*
 * Listing_10.8.cpp
 * Operator overloading
 * The counter class with operator overloading
 *
 *  Created on: 20 Sep 2013
 *      Author: cohabo
 */
/*
// Headers and Includes
#include<iostream>
using namespace std;

// Types and Defines
typedef unsigned short USHORT;

// Class Declarations
class Counter
{
public:
	Counter();
	~Counter() {}
	USHORT GetItsVal() const { return itsVal; }
	void SetItsVal(USHORT x) { itsVal = x; }
	void Increment() { ++itsVal; }
	void operator++() { ++itsVal; } //returnType Operator op (int signals prefix)

private:
	USHORT itsVal;
};

//Class Definitions
Counter::Counter():
		itsVal(0)
{}

// Main Function
int main()
{
	Counter i;
	cout <<"The value of i is " <<i.GetItsVal();
	cout <<"\nIncrease i";
	i.Increment();
	cout <<"\ni is now " <<i.GetItsVal();
	cout <<"\nIncrease i";
	++i;
	cout <<"\ni is now " <<i.GetItsVal();
	return 0;
}
*/





