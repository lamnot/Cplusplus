/*
 * ListingR1.1.cpp
 * Week 1 in review listing
 *
 *  Created on: 25 Apr 2013
 *      Author: cohabo
 */

/*
#include<iostream>
using namespace std;

//	type and defines

typedef unsigned short int USHORT;
typedef unsigned short int ULONG;
enum BOOL {FALSE, TRUE};
enum CHOICE {DrawRect = 1, GetArea, GetPerim, ChangeDimensions, Quit};

// class interface declarations

class Rectangle
{
public:
	// constructors
	Rectangle(USHORT width, USHORT height);
	~Rectangle();

	// accessors
	USHORT GetWidth() const {return itsWidth;}
	USHORT GetHeight() const {return itsHeight;}
	ULONG GetArea() const {return itsHeight * itsWidth;}
	ULONG GetPerim() const {return 2 * itsHeight + 2 * itsWidth;}
	void SetSize(USHORT newWidth, USHORT newHeight);

	// misc. methods
	void DrawShape() const;

private:
	USHORT itsWidth;
	USHORT itsHeight;
};

// class method implementations

void Rectangle::SetSize(USHORT newWidth, USHORT newHeight)
{
	itsWidth = newWidth;
	itsHeight = newHeight;
}

Rectangle::Rectangle(USHORT width, USHORT height)
{
	itsWidth = width;
	itsHeight = height;
}

Rectangle::~Rectangle() {}

//	prototypes

USHORT DoMenu();
void DoDrawRect(Rectangle);
void DoGetArea(Rectangle);
void DoGetPerim(Rectangle);



int main()
{
// initialise a rectangle to 10 & 20
	Rectangle theRect(10, 20);

	USHORT choice = DrawRect;
	USHORT fQuit = FALSE;

	while(!fQuit)
	{
		choice = DoMenu();
		if(choice < DrawRect || choice > Quit)
		{
			cout<<"Invalid choice please try again!\n\n";
			continue;
		}
		switch(choice)
		{
		case DrawRect:
			DoDrawRect(theRect);
			break;
		case GetArea:
			DoGetArea(theRect);
			break;
		case GetPerim:
			DoGetPerim(theRect);
			break;
		case ChangeDimensions:
			USHORT newWidth, newHeight;
			cout <<"\nNew Width: ";
			cin >>newWidth;
			cout <<"\nNew Height: ";
			cin >>newHeight;
			theRect.SetSize(newWidth, newHeight);
			DoDrawRect(theRect);
			break;
		case Quit:
			fQuit = TRUE;
			cout <<"Exciting...\n\n";
			break;
		default:
			cout << "Error in choice!\n";
			fQuit = TRUE;
			break;
		}			//	end switch
	}				//	end while
	return 0;
}					//	end main

USHORT DoMenu()
{
	USHORT choice;
	cout << "\n\n	**** MENU ****\n";
	cout << "(1) Draw Rectangle\n";
	cout << "(2) Area\n";
	cout << "(3) Perimeter\n";
	cout << "(4) Resize\n";
	cout << "(5) Quit\n";
	cin >> choice;
	return choice;
}

void DoDrawRect(Rectangle theRect)
{
	USHORT width = theRect.GetWidth();
	USHORT height = theRect.GetHeight();

	for(USHORT i = 0; i <= height; i++)
		{
		for(USHORT j = 0; j < width; j++)
				cout<<"*";
		cout<<"\n";
		}

}

void DoGetArea(Rectangle theRect)
{
	cout <<"Area: " <<theRect.GetArea() <<endl;
}
void DoGetPerim(Rectangle theRect)
{
	cout <<"Perim: " <<theRect.GetPerim() <<endl;
}

*/
