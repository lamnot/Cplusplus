/*
 * Listing5.10.cpp
 *  A demonstration of recursion using the Fibonacci series
 *  Fibonacci find.
 *  Finds the nth Fibonacci number
 *  Uses this algorithm: Fib(n) = Fib(n-1) + Fib(n-2)
 *  Stop conditions are when: n = 2 || n = 1
 *
 *  Created on: 28 Nov 2012
 *      Author: hp
 */
/*
//Headers and Includes
#include <iostream>
using namespace std;

//Function declarations
int Fib(int n);

//Main program
int main()
{
	int n, answer;
	cout << "Enter a number to work with. ";
	cin >> n;
	cout << "\n\n";

	answer = Fib(n);

	cout << answer << " is the " << n << "th Fibonacci number\n";
	return 0;
}

//Function definitions
int Fib(int n) {
	cout << "Processing fib(" << n << ").... ";
	if(n < 3) {
		cout << "Return 1!\n";
		return (1);
	}
	else
	{
		cout << "Call fib(" << n-2 << ") and fib(" << n-1 <<").\n";
		return (Fib(n-2) + Fib(n-1));
	}
}

*/
