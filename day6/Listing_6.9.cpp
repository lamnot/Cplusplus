/*
 * Listing6.9.cpp
 *  Demonstration of class with other class as member data
 *
 *  Created on: 6 Dec 2012
 *      Author: hp
 */
/*
#include "Listing6.8.hpp"

cRectangle::cRectangle (int top, int left, int bottom, int right) {
	itsTop = top;
	itsLeft = left;
	itsBottom = bottom;
	itsRight = right;

	itsUpperLeft.SetX(left);
	itsUpperLeft.SetY(top);

	itsUpperRight.SetX(right);
	itsUpperRight.SetY(top);

	itsLowerLeft.SetX(left);
	itsLowerLeft.SetY(bottom);

	itsLowerRight.SetX(right);
	itsLowerRight.SetY(bottom);
}

int cRectangle::GetArea() const {		// find corners, establish width and height
	int Width = itsRight - itsLeft;		// and then multiply
	int Height = itsTop - itsBottom;
	return (Width * Height);
}

int main()
{
	cRectangle MyRectangle (100, 20, 50, 80); // initialise a local cRectangle variable
	int Area = MyRectangle.GetArea();

	cout << "Area: " << Area <<endl;
	cout << "Upper Left X coordinate: " << MyRectangle.GetUpperLeft().GetX();
	return 0;
}
*/
