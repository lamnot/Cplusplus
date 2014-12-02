/*
 * Listing_10.18.cpp
 * Conversion operator
 * Converting a Counter to a USHORT using a builtin conversion operator
 *
 *  Created on: 26 Aug 2014
 *      Author: cohabo
 */
/*5760
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
	Counter( USHORT val );
	~Counter() {}
	USHORT GetItsVal() const { return itsVal; }
	void SetItsVal( USHORT x ) { itsVal = x; }
	operator USHORT ();
private:
	USHORT itsVal;
};

// Class Definitions

Counter::Counter():
		itsVal(0)
{}

Counter::Counter( USHORT val)
{
	itsVal = val;
}

Counter::operator USHORT ()
		{
	return (USHORT (itsVal));
		}

// Main Program
int main()
{
	Counter ctr(5);
	USHORT theShort = ctr;
	cout<< "theShort is " <<theShort <<endl;
	return 0;
}
*/



