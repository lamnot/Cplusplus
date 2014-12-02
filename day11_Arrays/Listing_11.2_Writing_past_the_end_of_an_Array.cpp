/*
 * Listing_11.2.cpp
 * DEmonstrates what happens when you write past the end of an array
 *
 *  Created on: 1 Sep 2014
 *      Author: cohabo
 */

// Headers and Includes
/*
#include<iostream>
using namespace std;

// Types and Defines

int main()
{
	long sentinelOne[3];	// Sentinels
	long TargetArray[25];	// Array to fill
	long sentinelTwo[3];	// Sentinels

	int i;

	for( i=0; i<3; i++ )
		sentinelOne[i] = sentinelTwo[i] = 0;

	for( i=0; i<25; i++ )
		TargetArray[i] = 0;

	cout <<"Test 1: \n";
	cout << "targetArray[0]: " <<TargetArray[0] <<"\n";
	cout << "targetArray[24]: " <<TargetArray[24] <<"\n\n";

	for( i=0; i<3; i++ )
		{
		cout << "sentinelOne[" <<i <<"]: " << sentinelOne[i] <<"\n";
		cout << "sentinelTwo[" <<i <<"]: " << sentinelTwo[i] <<"\n";
		}

	cout <<"\n Assigning... ";
	for( i=0; i<=25; i++ )
		TargetArray[i] = 20;

	cout << "\nTest 2: \n";
	cout << "targetArray[0]: " <<TargetArray[0] <<"\n";
	cout << "targetArray[24]: " <<TargetArray[24] <<"\n";
	cout << "targetArray[25]: " <<TargetArray[25] <<"\n\n";

	for( i=0; i<3; i++ )
	{
		cout << "sentinelOne[" <<i <<"]: " << sentinelOne[i] <<"\n";
		cout << "sentinelTwo[" <<i <<"]: " << sentinelTwo[i] <<"\n";
	}
	cout << "\n\nsentinelOne[" <<i <<"]:  " << &sentinelOne[i] <<"\n";
	cout << "targetArray[24]: " <<&TargetArray[24] <<"\n";
	cout << "sentinelTwo[" <<i <<"]:  " << &sentinelTwo[i] <<"\n";

	return 0;
}

*/
