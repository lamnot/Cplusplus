/*
 * Listing7.4.cpp
 *  Demonstrates break and continue
 *
 *  Created on: 17 Dec 2012
 *      Author: hp
 */
/*
#include <iostream>
using namespace std;

int main()
{
	unsigned short small;
	unsigned long large;
	unsigned long skip;
	unsigned long target;
	const unsigned short MAXSMALL = 65535;

	cout << "Enter a small number: " <<endl;
	cin >> small;
	cout << "Enter a large number: " <<endl;
	cin >> large;
	cout << "Enter a number to skip: " <<endl;
	cin >> skip;
	cout << "Enter a target number" <<endl;
	cin >> target;
	cout << "\n";

	// set up 3 stop conditions for the loop
	while (small < large && large > 0 && small < MAXSMALL)
	{
		small++;
		if (small % skip == 0) {		// skip the decrement
			cout << "Skipping on " <<small <<endl;
			continue;
		}
		if (large == target) {			// exact match for target
			cout << "Target Reached. The End!" <<endl;
			break;
		}
		large -= 2;
	}									// end of while loop
	cout << "\nSmall: "<<small << " Large: " << large <<endl;
	return 0;
}
*/
