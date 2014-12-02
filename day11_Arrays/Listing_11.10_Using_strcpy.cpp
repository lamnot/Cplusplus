/*
 * Listing_11.10_Using_strcpy.cpp
 *
 *  Created on: 20 Nov 2014
 *      Author: cohabo
 */
/*
// Headers and Includes

using namespace std;
#include <iostream>
#include <string.h>

// Types and Defines

typedef unsigned short int USHORT;

// Function

USHORT getsize(char arr[]);

// Main program

int main()
{
	//declare origin array of arbitrary char element and


	// declare origin array initialised with a string of "n" char elements.
	// and destination array of 80 char elements
	char String1[] = "No man is an Island";
	char String2[20];

	// Copy from string1 to String2.
	// strcpy(destination_array, origin_array)
	strcpy(String2, String1);

	// Print both origin and destination arrays
	cout <<String1 <<"\t" <<String2 <<"\n";

	cout <<sizeof(String1) <<endl;
	cout <<sizeof(String2) <<endl;
	cout <<"\n\n";
	cout <<getsize(String1) <<endl;
	cout <<getsize(String2) <<endl;

	return 0;
}

USHORT getsize(char arr[]) {
	USHORT ArrayLength;
	cout <<arr <<"\t"<<sizeof(arr) <<"\t" <<sizeof(arr[0]) <<endl;
	return ArrayLength = sizeof(arr) / sizeof(arr[0]);
}

*/
