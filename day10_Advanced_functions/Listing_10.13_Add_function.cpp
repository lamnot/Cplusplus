/*
 * Listing_10.13.cpp
 *
 * Operator overloading Unary Operators
 * The Add() function
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
	Counter( USHORT initialVal );
	~Counter () {}
	USHORT GetItsVal() const { return itsVal; }
	void SetItsVal( USHORT x ) { itsVal = x; }
	Counter Add( const Counter& );

private:
	USHORT itsVal;
};

// Class Definitions

Counter::Counter( USHORT initialVal ):
		itsVal(initialVal)
{}

Counter::Counter():
		itsVal(0)
{}

Counter Counter::Add( const Counter & rhs )
{
	return Counter( itsVal + rhs.GetItsVal() );
}

// Main Program

int main()
{
	Counter varOne(2), varTwo(4), varThree;
	varThree = varOne.Add(varTwo);
	cout << "varOne is " <<varOne.GetItsVal() <<endl;
	cout << "varTwo is " <<varTwo.GetItsVal() <<endl;
	cout << "varThree is " <<varThree.GetItsVal() <<endl;
	return 0;

}
*/
