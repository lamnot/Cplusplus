/*
 * Listing9.9.cpp
 * Returning multiple values from a function using references
 *
 *  Created on: 30 Apr 2013
 *      Author: cohabo
 */
/*
// Headers and includes
#include<iostream>
using namespace std;

// types and defines
typedef unsigned short USHORT;
enum ERR_CODE {SUCCESS, ERROR};

// function declarations
ERR_CODE Factor(USHORT, USHORT &, USHORT &);

int main()
{
	USHORT number, squared, cubed;
	ERR_CODE result;

	cout<<"Enter a number between (0 - 20): ";
	cin>>number;
	result = Factor(number, squared, cubed);
	if(result == SUCCESS)
	{
		cout<<"number is: " <<number <<endl;
		cout<<"squared is: " <<squared <<endl;
		cout<<"cubed is: " <<cubed <<endl;
	}
	else
		cout<<"Error encountered\n";

	return 0;
}

ERR_CODE Factor(USHORT n, USHORT & rSquared, USHORT & rCubed)
{
	if(n > 20)
		return ERROR;	// simple error code
	else
	{
		rSquared = n * n;
		rCubed = n * n * n;
		return SUCCESS;
	}
}
*/
