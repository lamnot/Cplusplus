/*
 * Listing9.8.cpp
 * Returning multiple values from a function using pointers
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
enum ERROR_CODE { FAILURE, SUCCESS };

// functions declarations
ERROR_CODE Factor(USHORT, USHORT *, USHORT *);

// Main program
int main()
{
	USHORT number, squared, cubed;
	ERROR_CODE result;

	cout<<"Enter a number between (0 - 20): " <<endl;
	cin>>number;
	error = Factor(number, &squared, &cubed);
	if(result == !FAILURE)
	{
		cout<<"number is: " <<number <<endl;
		cout<<"squared is: " <<squared <<endl;
		cout<<"cubed is: " <<cubed <<endl;
	}
	else
		cout<<"Error encountered!!\n";

	return 0;
}

// Function definitions
ERROR_CODE Factor(USHORT n, USHORT *pSquared, USHORT *pCubed)
{
	if(n > 20)
		return FAILURE;
	else
	{
		*pSquared = n * n;
		*pCubed = n * n * n;
		return SUCCESS;
	}
}
*/

