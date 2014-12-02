/*
 * Listing8.8.cpp
 * Using the this pointer
 *
 *  Created on: 29 Apr 2013
 *      Author: cohabo
 */
/*
#include<iostream>
using namespace std;

class Rectangle
{
public:
	Rectangle();
	~Rectangle();
	void SetLength(int length) {this->itsLength = length;}		// accessor function
	int GetLength() const {return this->itsLength;}	// accessor function
	void SetWidth(int width) {itsWidth = width;}
	int GetWidth() const {return itsWidth;}			// accessor function

private:
	int itsLength;
	int itsWidth;
};

Rectangle::Rectangle()
{
	itsLength = 10;
	itsWidth = 5;
}

Rectangle::~Rectangle()
{}

int main()
{
	Rectangle theRect;
	cout<<"theRect is " <<theRect.GetWidth() <<" feet wide.\n";
	cout<<"theRect is " <<theRect.GetLength() <<" feet long.\n";
	theRect.SetWidth(10);
	theRect.SetLength(20);
	cout<<"theRect is " <<theRect.GetWidth() <<" feet wide.\n";
	cout<<"theRect is " <<theRect.GetLength() <<" feet long.\n";

	return 0;
}
*/
