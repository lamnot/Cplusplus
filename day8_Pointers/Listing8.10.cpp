/*
 * Listing8.10.cpp
 * Using pointers with const methods
 *
 *  Created on: 29 Apr 2013
 *      Author: cohabo
 */

/*
// Headers and Includes
#include<iostream>
using namespace std;

// Class declarations
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

// Class definitions
Rectangle::Rectangle():			// Class definition initialisation shorthand
		itsWidth(5),
		itsLength(10)
{}

Rectangle::~Rectangle()
{ }


// Main program
int main()
{
	Rectangle * pRect = new Rectangle;
	if(!pRect) {
		cout <<"Error! No memory for pRect.";
		return 0;
	}
		// const pointers cannot be reassigned to point to other objects
	const Rectangle * pConstRect = new Rectangle;
	if(!pConstRect) {
			cout <<"Error! No memory for pConstRect.";
			return 0;
		}
		// pointers to const objects cannot change objects to which they point
	Rectangle * const pConstPtr = new Rectangle;
	if(!pConstPtr) {
			cout <<"Error! No memory for pConstPtr.";
			return 0;
		}

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
