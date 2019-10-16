// Unit6DoK.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author: Kevin Feldhaus
// Date: October 15th, 2019
//

#include <iostream>
#include <string>

using namespace std;

// Function prototype
string shiftright(string bString);

int main()
{
	string bs = "", rs = "";

	cout << "Enter the string you want to shift: ";
	cin >> bs;

	rs = shiftright(bs);
	
	cout << "Shifted string: " << rs;

}

string shiftright(string bString)
{
	string rshift = bString.substr((bString.length() - 1), 1);		// store last character of the user's string

	bString.insert(0, rshift);		// insert the stored character at the beginning of the string
	bString.erase((bString.length() - 1), 1);		// delete the last character of the string, which was previously shifted

	return bString;
}