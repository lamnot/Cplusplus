/*
 * Listing_10.2.cpp
 *
 *  Created on: 18 Sep 2013
 *      Author: cohabo
 *
 * Using Default Values
 */
/*
// Headers and Includes
#include<iostream>
using namespace std;

// Types and Definitions
typedef unsigned short int USHORT;
enum BOOL {FALSE, TRUE};

// Class Declarations
class Rectangle
{
public:
	// constructors
	Rectangle(USHORT width, USHORT height);
	~Rectangle(){}
	// member methods
	void DrawShape(USHORT aWidth, USHORT aHeight,
			         BOOL UseCurrentVals = FALSE) const;
	// member data
private:
	USHORT itsWidth;
	USHORT itsHeight;
};

// Class Definitions

// Constructor Implementations
Rectangle::Rectangle(USHORT width, USHORT height):
		itsWidth(width),		//initialisation
		itsHeight(height)
{}								//empty body

// default values used for third parameter
void Rectangle::DrawShape(
		USHORT width,
		USHORT height,
		BOOL UseCurrentValue
		)const
{
	int printWidth;
	int printHeight;

	if (UseCurrentValue == TRUE)
	{
		printWidth = itsWidth;		// Use current class values
		printHeight = itsHeight;
	}
	else
	{
		printWidth = width;
		printHeight = height;
	}
	for(int i = 0; i < printHeight; i++)
	{
		for(int j = 0; j < printWidth; j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}

// Main Program
// Driver Program to Demonstrate Overloaded Functions

int main()
{
// initialise a rectangle to 10, 20
Rectangle theRect(10, 20);
cout <<"DrawShape(10,20,TRUE)...\n";
theRect.DrawShape(10, 20, TRUE);
cout << "DrawShape (40,20)...\n";
theRect.DrawShape(40, 20);
return 0;
}
*/
