/*
 * Exercise9.6.cpp
 *  A program that creates a memory leak by reassigning a pointer before
 *  deleting the memory it is pointing to.
 *
 *  Created on: 6 May 2013
 *      Author: cohabo
 */
/*
#include<iostream>
using namespace std;

int main()
{
	int * pVar = new int;
	*pVar = 8;
	cout<<"*pVar is: "<<*pVar <<" " <<pVar <<endl;
	pVar = new int;
	*pVar = 10;
	cout<<"*pVar is: "<<*pVar <<" " <<pVar <<endl;

	return 0;
}

*/
