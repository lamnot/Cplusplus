/*
 * Listing_10.11.cpp
 * Overloading the prefix operator
 * Using the this pointer (this points to the individual object)
 * Returning the dereferenced this pointer
 *
 *  Created on: 25 Aug 2014
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
		USHORT GetItsVal()const { return this->itsVal; }
		void SetItsVal(USHORT x) { this->itsVal = x; }
		void Increment() { ++itsVal; }
		const Counter& operator++();

	private:
		USHORT itsVal;
};

// Class Definitions

Counter::Counter():
		itsVal(0) {};

const Counter& Counter::operator++()
	{
	++itsVal;
	return *this;
	}

int main()
{
	Counter i;
	cout << "The value of i is " << i.GetItsVal() <<endl;
	i.Increment();
	cout << "The value of i is " << i.GetItsVal() <<endl;
	++i;
	cout << "The value of i is " << i.GetItsVal() <<endl;
	Counter a = ++i;
	cout << "The value of a is " << a.GetItsVal() <<endl;
	cout << "The value of i is " << i.GetItsVal() <<endl;
	return 0;
}
*/
