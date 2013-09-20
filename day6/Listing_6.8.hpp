/*
 * Listing6.8.hpp
 *  Demonstration of class with other class as member data
 *   Declaring a complete class
 *
 *  Created on: 6 Dec 2012
 *      Author: hp
 */
/*
#ifndef LISTING6_8_HPP_
#define LISTING6_8_HPP_

#include <iostream>
using namespace std;

class cPoint					// holds x, y cordinates
{
public:
	void SetX(int x) {itsX = x;}
	void SetY(int y) {itsY = y;}
	int GetX() const {return itsX;}
	int GetY() const {return itsY;}
private:
	int itsX;
	int itsY;
};								// end of point class declaration

class cRectangle				// holds lines
{
public:
	cRectangle(int top, int left, int bottom, int right);
	~cRectangle() {}

	int GetTop() const {return itsTop;}
	int GetLeft() const {return itsLeft;}
	int GetBottom() const {return itsBottom;}
	int GetRight()  const {return itsRight;}

	cPoint GetUpperLeft() const {return itsUpperLeft;}
	cPoint GetLowerLeft() const {return itsLowerLeft;}
	cPoint GetUpperRight() const {return itsUpperRight;}
	cPoint GetLowerRight() const {return itsLowerRight;}

	void SetUpperLeft(cPoint Location) {itsUpperLeft = Location;}
	void SetLowerLeft(cPoint Location) {itsLowerLeft = Location;}
	void SetUpperRight(cPoint Location) {itsUpperRight = Location;}
	void SetLowerRight(cPoint Location) {itsLowerRight = Location;}

	void SetTop(int Top) {itsTop = Top;}
	void SetLeft(int Left) {itsLeft = Left;}
	void SetBottom(int Bottom) {itsBottom = Bottom;}
	void SetRight(int Right) {itsRight = Right;}

	int GetArea() const;

private:
	cPoint itsUpperLeft;
	cPoint itsLowerLeft;
	cPoint itsUpperRight;
	cPoint itsLowerRight;

	int itsTop;
	int itsLeft;
	int itsBottom;
	int itsRight;
};


#endif /* LISTING6_8_HPP_ */
