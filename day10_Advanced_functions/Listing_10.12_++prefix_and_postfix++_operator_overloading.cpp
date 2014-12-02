/*
 * Listing_10.12.cpp
 * Overloading the postfix operator
 * Returning the dereferenced this pointer
 *
 *  Created on: 25 Aug 2014
 *      Author: cohabo
 */
/*
// Headers and Includes
#include <iostream>
using namespace std;

// Types and Defines
typedef unsigned short USHORT;

// Class Declarations

class Counter
{
public:
	Counter();
	~Counter () {}
	USHORT GetItsVal() const { return itsVal; }
	void SetItsVal( USHORT x )  { itsVal = x; }
	const Counter& operator++();
	const Counter operator++(int);

private:
	USHORT itsVal;
};

Counter::Counter():
		itsVal(0)
{}

const Counter& Counter::operator++()
		{
			++itsVal;
			return *this;
		}

const Counter Counter::operator++(int)
		{
			Counter temp( *this );
			++itsVal;
			return temp;
		}

// Main Program

int main()
{
	Counter i;
	cout << "The value of i is " << i.GetItsVal() <<endl;
	++i;
	cout << "The value of i is " << i.GetItsVal() <<endl;
	++i;
	cout << "The value of i is " << i.GetItsVal() <<endl;
	Counter a = ++i;
	cout << "The value of a is " << a.GetItsVal() <<endl;
	cout << "The value of i is " << i.GetItsVal() <<endl;
	return 0;


}
*/
