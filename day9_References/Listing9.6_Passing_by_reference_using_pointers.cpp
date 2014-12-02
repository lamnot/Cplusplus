/*
 * Listing9.6.cpp
 * Passing by reference using pointers
 *
 *  Created on: 30 Apr 2013
 *      Author: cohabo
 */
/*
// Headers and includes
#include<iostream>
using namespace std;

// Function declarations
void swap(int * px, int * py);	// expect a pointer

// Main program
int main()
{
	int x = 5, y = 10;
	cout<<"Main. Before swap, x is: " <<x <<" y is: " <<y <<endl;
	swap(&x,&y);	// for pointers the parameter value is the memory address
	cout<<"Main. After swap, x is: " <<x <<" y is: " <<y <<endl;

	return 0;
}

// Function definitions
void swap(int *px, int *py)	// function header creates the pointer
{
	int temp;
	cout<<"Swap. Before swap, *px is: " <<*px <<" *py is: " <<*py <<endl;
	temp = *px;
	*px = *py;
	*py = temp;
	cout<<"Swap. After swap, *px is: " <<*px <<" *py is: " <<*py <<endl;
}
*/
