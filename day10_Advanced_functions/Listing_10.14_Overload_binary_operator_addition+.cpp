/*
 * Listing_10.14.cpp
 * Overloading operator+
 *
 * Overload operator plus (+)
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
	Counter( USHORT initialVal );
	~Counter() {}
	USHORT GetItsVal() const { return itsVal; }
	void SetItsVal( USHORT x ) { itsVal = x; }
	Counter operator+( const Counter & );	// returnType Operator op (const sameReturnType & )

private:
	USHORT itsVal;
};

// Class Declarations

Counter::Counter():
		itsVal(0)
{}

Counter::Counter( USHORT initialVal ):
		itsVal(initialVal)
{}

Counter Counter::operator+ ( const Counter & rhs )
	{
	return Counter( itsVal + rhs.GetItsVal() );
	}

// Main Program

int main()
{
	Counter varOne = 2, varTwo = 3, varThree;
	varThree = varOne + varTwo;
	cout << "varOne is " << varOne.GetItsVal() <<endl;
	cout << "varTwo is " << varTwo.GetItsVal() <<endl;
	cout << "varThree is " << varThree.GetItsVal() <<endl;
	return 0;
}
*/
