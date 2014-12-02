/*
 * Listing_10.9.cpp
 * Operator overloading
 * The counter class overloaded operator (operator++)
 * return a temporary object.
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
	USHORT GetItsVal() const {return itsVal;}
	void SetItsVal(USHORT x) {itsVal = x;}
	void increment() {++itsVal;}
	Counter operator++();

private:
	USHORT itsVal;
};
Counter::Counter():
		itsVal(0)
{}

Counter Counter::operator++()
		{
	++itsVal;
	Counter temp;
	temp.SetItsVal(itsVal);
	return temp;
		}

// Main function
int main()
{
	Counter i;
	cout <<i.GetItsVal() <<endl;
	cout <<"Incremented i = ";
	++i;
	cout <<i.GetItsVal() <<endl;
	Counter a = ++i;
	cout <<a.GetItsVal() <<endl;
	return 0;
}
*/
