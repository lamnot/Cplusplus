/*
 * Listing_11.12_Using_a_string_class.cpp
 *
 *  Created on: 20 Nov 2014
 *      Author: cohabo
 */

// Headers and Includes

using namespace std;
#include <iostream>
#include<string.h>

// Types and Defines

typedef unsigned short int USHORT;

// Class Declaration

class String
{
public:
	// constructors
	String();
	String(const char *);
	String(const String &);

	// destructor
	~String();
	
	//overloaded operators
	char & operator[] (USHORT offset);
	char operator[] (USHORT offset) const;
	String operator+ (const String &);
	void operator+= (const String &);
	String & operator= (const String &);

	// general accessors
	USHORT GetLength() const { return itsLen; }
	const char * GetString() const { return itsString; }

protected:

private:
	// private constructor
	String(USHORT);
	char * itsString;
	USHORT itsLen;
};

// Class definition

// default constructor creates string of 0 bytes
String::String() {
	itsString = new char[1];
	itsString[0] = '\0';
	itsLen = 0;
}

// private helper constructor, used only by class methods for 
// creating a new string of required size. Null filled.
String::String(USHORT len) {
	itsString = new char[ len+1 ];
	for( USHORT i = 0; i <= len; i++ )
		itsString[1] = '\0';
	itsLen = len;
}

// converts a character array into a string
String::String(const char * cString) {
	itsLen = strlen(cString);
	itsString = new char[ itsLen + 1 ];
	for( USHORT i = 0; i < itsLen; i++ )
		itsString[i] = cString[i];
	itsString[itsLen] = '\0';
}

// copy constructor
String::String(const String & rhs) {
	itsLen = rhs.GetLength();
	itsString = new char[itsLen+1];
	for( USHORT i = 0; i < itsLen; i++ )
		itsString[i] = rhs[i];
	itsString[itsLen] = '\0';
}

// destructor frees allocated memory
String::~String() {
	delete [] itsString;
	itsLen = 0;
}

// operator= equals frees existing memory
//  then copies string and size.
String & String::operator= (const String & rhs) {
	if( this == &rhs )
		return *this;
	delete [] itsString;
	itsLen = rhs.GetLength();
	itsString = new char [ itsLen+1 ];
	for( USHORT i = 0; i < itsLen; i++ )
		itsString[i] = rhs[i];
	itsString[itsLen+1] = '\0';
	return *this;
}

// non-constant offset operator, return reference
//  to character so it can be changed.
char & String::operator[] (USHORT offset) {
	if( offset > itsLen )
		return itsString[itsLen - 1];
	else 
		return itsString[offset];
}

// constant offset operator for use on const objects
// (see copy constructor!)
char String::operator[] (USHORT offset) const {
	if( offset > itsLen )
		return itsString[itsLen - 1];
	else
		return itsString[offset];
}

// creates a new string by adding current string to rhs
String String::operator+ (const String & rhs) {
	USHORT totalLen = itsLen + rhs.GetLength();
	String temp(totalLen);
	USHORT i, j;
	for( i = 0; i < itsLen; i++ )
		temp[i] = itsString[i];
	for( j = 0; j < rhs.GetLength(); j++, i++ )
		temp[i] = rhs[j];
	temp[totalLen] = '\0';
	return temp;
}

// changes current string, returns nothing
void String::operator+= (const String & rhs) {
	USHORT rhsLen = rhs.GetLength();
	USHORT totalLen = itsLen + rhsLen;
	USHORT i, j;
	String temp(totalLen);
	for( i = 0; i < itsLen; i++ )
		temp[i] = itsString[i];
	for( j = 0; j < rhs.GetLength(); j++, i++ )
		temp[i] = rhs[i - itsLen];
	temp[totalLen] = '\0';
	*this = temp;
}

int main()
{

	String s1("Initial test");
	cout << "s1 is:\t" <<s1.GetString() <<endl;

	char * temp = "Hello World";
	s1 = temp;
	cout <<"s1 is:\t" <<s1.GetString() <<endl;

	char tempTwo[20];
	strcpy( tempTwo, "; nice to be here!");
	s1 += tempTwo;
	cout <<"tempTwo is:\t" <<tempTwo <<endl;
	cout <<"s1 is:\t" <<s1.GetString() <<endl;
	
	cout <<"s1[4] is:\t" <<s1[4] <<endl;
	s1[4] = 'x';
	cout <<"s1 is:\t" <<s1.GetString() <<endl;

	cout <<"s1[999]:\t" <<s1[999] <<endl;

	String s2("Another string");
	String s3;
	s3 = s1 + s2;
	cout <<"s3 is:\t" <<s3.GetString() <<endl;
	
	String s4;
	s4 = "Why does this work?";
	cout <<"s4 is:\t" <<s4.GetString() <<endl;

	return 0;
}