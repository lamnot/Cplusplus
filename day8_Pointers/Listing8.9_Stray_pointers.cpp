/*
 * Listing8.9.cpp
 * Demonstrates a stray pointer
 *
 *  Created on: 29 Apr 2013
 *      Author: cohabo
 */
/*
// Headers and includes
#include<iostream>
using namespace std;

// Types and defines
typedef unsigned short int USHORT;

// Main program
int main()
{
	USHORT * pInt = new USHORT(10);
	if(!pInt) {
		cout <<"Error! No memory for pInt";
		return 0;
	}
	cout<<"*pInt is: " <<*pInt <<endl;
	delete pInt;
	pInt = 0;

	long * pLong = new long(90000);
	cout<<"*pLong is: " <<*pLong <<endl;

	if(!pInt) {
		cout <<"Error! No memory for pInt";
		return 0;
	}
	*pInt = 20;		// NOTE! this was deleted
	cout<<"*pInts is: " <<*pInt <<endl;

	cout<<"*pLong is: " <<*pLong <<endl;
	delete pLong;
	pLong = 0;

	return 0;
}
*/
