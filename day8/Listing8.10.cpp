/*
 * Listing8.10.cpp
 * Using pointers with const methods
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

	void SetLength(int length) {itsLength = length;}
	int GetLength() const {return itsLength;}

	void SetWidth(int Width) {itsWidth = Width;}
	int GetWidth() const {return itsWidth;}

private:
	int itsLength;
	int itsWidth;
};

Rectangle::Rectangle()
{
	itsWidth = 5;
	itsLength = 10;
}

Rectangle::~Rectangle()
{ }

int main()
{
	Rectangle * pRect = new Rectangle;
		// const pointers cannot be reassigned to point to other objects
	const Rectangle * pConstRect = new Rectangle;
		// pointers to const objects cannot change objects to which they point
	Rectangle * const pConstPtr = new Rectangle;

	cout<<"pRect width:\t\t" <<pRect->GetWidth() <<" feet." <<endl;
	cout<<"pConstRect width:\t" <<pConstRect->GetWidth() <<" feet." <<endl;
	cout<<"pConstPtr width:\t" <<pConstPtr->GetWidth() <<" feet." <<endl;

	pRect->SetWidth(10);
	//pConstRect->SetWidth(10);
	pConstPtr->SetWidth(10);
	cout<<"pRect width:\t\t" <<pRect->GetWidth() <<" feet." <<endl;
	cout<<"pConstRect width:\t" <<pConstRect->GetWidth() <<" feet." <<endl;
	cout<<"pConstPtr width:\t" <<pConstPtr->GetWidth() <<" feet." <<endl;

}
*/
