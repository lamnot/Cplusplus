/*
 * Exercise_10.cpp
 * Day 10: Advanced Functioins
 *
 *  Created on: 28 Aug 2014
 *      Author: cohabo
 */

// Headers and Includes

/*
#include<iostream>
using namespace std;

// Types and Defines
typedef unsigned short USHORT;

// Class Declarations

// Simple Circle class declaration with one member variable: itsRadius

class SimpleCircle
{
public:
	SimpleCircle();										// Class Constructor: Default Constructor
	SimpleCircle( USHORT x);							// Class Constructor: Overloaded Constructor
	SimpleCircle( const SimpleCircle & );				// Class Constructor: Copy Constructor
	~SimpleCircle() {}									// Class Destructor: Default Destructor
	USHORT GetItsRadius() const { return *itsRadius; }  // Class Methods: Accessor Functions
	void SetItsRadius( USHORT x ) { *itsRadius = x; }	// Class Methods: Accessor Functions
	const SimpleCircle& operator++(); 						// Class Methods: Prefix Increment Operator
	const SimpleCircle operator++( int ); 					// Class Methods: Postfix Increment Operator
	SimpleCircle operator=( const SimpleCircle & );		// Assignment Operator

private:
	USHORT * itsRadius;
};

// Class Definition

SimpleCircle::SimpleCircle()
{
	itsRadius = new USHORT (5);
}

SimpleCircle::SimpleCircle( USHORT x )
{
	itsRadius = new USHORT (x);
}

SimpleCircle::SimpleCircle( const SimpleCircle & rhs )
{
	itsRadius = new USHORT;
	*itsRadius = rhs.GetItsRadius();
}

const SimpleCircle& SimpleCircle::operator++()
		{
	++itsRadius;
	return *this;
		}

const SimpleCircle SimpleCircle::operator++( int )
		{
	SimpleCircle temp(*this);
	++itsRadius;
	return temp;
		}

SimpleCircle SimpleCircle::operator=( const SimpleCircle & rhs )
{
	if ( this == &rhs )
		return *this;
	delete itsRadius;
	itsRadius = new USHORT;
	*itsRadius = rhs.GetItsRadius();
	return *this;
}

// Main Program

int main()
{
	SimpleCircle theCircle;
	SimpleCircle anotherCircle(9);
	++theCircle;
	++anotherCircle;
	cout << "The radius of theCircle is " <<theCircle.GetItsRadius() <<endl;
	cout << "The radius of anotherCircle is " <<anotherCircle.GetItsRadius() <<endl;
	theCircle = anotherCircle;
	cout << "The radius of theCircle is " <<theCircle.GetItsRadius() <<endl;
	cout << "The radius of anotherCircle is " <<anotherCircle.GetItsRadius() <<endl;
	return 0;
}
*/
