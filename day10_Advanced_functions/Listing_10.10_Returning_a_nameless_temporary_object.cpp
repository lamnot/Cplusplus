/*
 * Listing_10.10.cpp
 * Returning a nameless temporary object
 * operator++ returns a nameless temporary object
 *
 *  Created on: 20 Sep 2013
 *      Author: cohabo
 */
/*
 // Headers and includes
#include<iostream>
using namespace std;

// Types and Defines
typedef unsigned short USHORT;

// Class Declarations
class Counter
{
public:
	Counter();
	Counter(USHORT val);
	~Counter() {}
	USHORT GetItsVal() {return itsVal;}
	void SetItsVal(USHORT x) {itsVal = x;}
	void Increment() {++itsVal;}
	Counter operator++();

private:
	USHORT itsVal;
};

// Class Definitions
Counter::Counter():
		itsVal(0)
{}

Counter::Counter(USHORT val):
		itsVal(val)
{}

Counter Counter::operator++()
		{
	++itsVal;
	return Counter(itsVal);
		}

// Main function
int main()
{
Counter i;
cout <<"The value of i is " <<i.GetItsVal() <<endl;
i.Increment();
cout <<"The value of i is " <<i.GetItsVal() <<endl;
++i;
cout <<"The value of i is " <<i.GetItsVal() <<endl;
Counter a = ++i;
cout <<"The value of a is " <<a.GetItsVal();
cout <<" and i is " <<i.GetItsVal() <<endl;
return 0;
}
*/
