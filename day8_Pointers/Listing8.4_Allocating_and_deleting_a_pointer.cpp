/*
 * Listing8.4.cpp
 * Allocating, using and deleting pointers
 *
 *  Created on: 29 Apr 2013
 *      Author: cohabo
 */

/*
// Headers and includes
#include<iostream>
using namespace std;

// Main program
int main()
{
	int localVariable = 5;			// a variable
	int * pLocal = &localVariable;	//	a pointer to a variable
	int * pHeap = new int(7);		//	a pointer to the free store with a default value
	if(!pHeap)						// if NOT something.
	{
		cout<<"Error! No memory for pHeap!!";
		return 0;
	}
	// *pHeap = 7;
	cout<<"localVariable is:\t" <<localVariable <<endl;
	cout<<"*pLocal is:\t\t" <<*pLocal <<endl;
	cout<<"*pHeap is:\t\t" <<*pHeap <<endl;
	delete pHeap;
	pHeap = 0;
	pHeap = new int(9);
	if(!pHeap)
	{
		cout<<"Error! No memory for pHEAP!!";
		return 0;
	}
	// *pHeap = 9;
	cout<<"*pHeap is:\t\t" <<*pHeap <<endl;
	delete pHeap;
	pHeap = 0;

	return 0;


}
*/


