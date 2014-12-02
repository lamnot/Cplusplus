/*
 * Exercise_10.4.cpp
 *
 *  Created on: 29 Aug 2014
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
	SimpleCircle();										// Default Constructor
	SimpleCircle( USHORT x );							// Overloaded Constructor
	~SimpleCircle() {}									// Default Destructor
	USHORT GetItsRadius() const { return itsRadius; }	// Accessor Functions
	void SetItsRadius( USHORT x ) { itsRadius = x; }	// Accessor Functions
	const SimpleCircle& operator++();					// Prefix Increment operator
	const SimpleCircle operator++(int);				// Postfix Increment Operator
private:
	USHORT itsRadius;									// Member Variable
};

// Class Definition

SimpleCircle::SimpleCircle():
		itsRadius(5)
{}

SimpleCircle::SimpleCircle( USHORT x ):
		itsRadius(x)
{}

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
*/
