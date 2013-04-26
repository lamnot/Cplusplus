/*
 * Listing7.15.cpp
 * Demonstrates finding the nth Fibonacci number
 * using iteration
 *
 *  Created on: 24 Apr 2013
 *      Author: cohabo
 */
/*
#include <iostream>
using namespace std;

typedef unsigned long int ULONG;

ULONG fib(ULONG position);

int main()
{
	ULONG position, answer;
	cout << "Which position??\n";
	cin >> position;
	answer = fib(position);
	cout << "Number " << answer <<" is the " <<position <<"th" << " Fibonacci number" <<endl;
return 0;
}

ULONG fib(ULONG n)
{
	ULONG minusTwo = 0, minusOne = 1, answer = 2;

	if(n < 3)
		return 1;
	for(n -=3; n; n--)
	{
		minusTwo = minusOne;
		minusOne = answer;
		answer = minusOne + minusTwo;
	}
	return answer;
}

*/
