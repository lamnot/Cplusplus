/*
 * Exercise9.4.cpp
 * A program that produces a stray pointer; created by calling
 * delete on a pointer - thereby freeing its  memory, and then trying
 * to use it without first reassigning it.
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
	cout<<"pVar is:" <<*pVar <<endl;
	delete pVar;
	pVar = 0;
	cout<<"pVar is:" <<*pVar <<endl;
	*pVar = 10;
	cout<<"pVar is:" <<*pVar <<endl;

	return 0;

}

*/
