/*
 * Listing10.1.cpp
 * Overloading Member Functions
 *
 *  Created on: 18 Sep 2013
 *      Author: cohabo
 */
/*
// Headers and Includes
#include<iostream>
using namespace std;

// Types and Definitions
typedef unsigned short int USHORT;
enum BOOL {False, TRUE};

// Class Declarations

class Rectangle
{
public:
	// constructors
	Rectangle (USHORT width, USHORT height);
	~Rectangle(){}

	//overloaded class function DrawShape
	void DrawShape() const;
	void DrawShape (USHORT aWidth, USHORT aHeight) const;

private:
	USHORT itsWidth;
	USHORT itsHeight;
};

// Class Definitions

// Constructor Implementation
Rectangle::Rectangle(USHORT width, USHORT height)
{
	itsWidth = width;
	itsHeight = height;
}
// Overloaded DrawShape - takes no value
// Draws based on current class member values
void Rectangle::DrawShape() const
{
	DrawShape(itsWidth, itsHeight);
}
// Overloaded DrawShape - takes two values
// Draws based on the parameters
void Rectangle::DrawShape(USHORT width, USHORT height) const
{
	for(USHORT i = 0; i < height; i++)
	{
		for(USHORT j = 0; j < width; j++)
		{
			cout <<"*";
		}
		cout <<"\n";
	}
}

// Main Program
// Driver program to demonstrate overloaded functions

int main()
{
	// initialise a rectangle to 30,5
	Rectangle theRect(30, 5);
	cout <<"DrawShape(): \n";
	theRect.DrawShape();
	cout<<"\nDrawShape (40,2): \n";
	theRect.DrawShape(40, 2);
	return 0;
}

*/


