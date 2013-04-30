/*
 * Listing9.8.cpp
 * Returning multiple values from a function using pointers
 *
 *  Created on: 30 Apr 2013
 *      Author: cohabo
 */
/*
#include<iostream>
using namespace std;

// types and defines
typedef unsigned short USHORT;

// functions declarations
short Factor(USHORT, USHORT *, USHORT *);


int main()
{
	USHORT number, squared, cubed;
	short error;

	cout<<"Enter a number between (0 - 20): " <<endl;
	cin>>number;
	error = Factor(number, &squared, &cubed);
	if(!error)
	{
		cout<<"number is: " <<number <<endl;
		cout<<"squared is: " <<squared <<endl;
		cout<<"cubed is: " <<cubed <<endl;
	}
	else
		cout<<"Error encountered!!\n";

	return 0;
}

short Factor(USHORT n, USHORT *pSquared, USHORT *pCubed)
{
	short Value = 0;
	if(n > 20)
		Value = 1;
	else
	{
		*pSquared = n * n;
		*pCubed = n * n * n;
		Value = 0;
	}
	return Value;
}
*/
