// xyz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int x, y, z;
	int average;

	cout << "Enter value for x: ";
	cin >> x;

	cout << "Enter value for y: ";
	cin >> y;

	cout << "Enter value for z: ";
	cin >> z;
	cout <<endl;

	average = (x + y + z) / 3;

	cout << "The average of xyz is: " << average <<endl;

	if (average < 0 || average > 3)
		cout << "A caveman does not know of such a number!" <<endl <<endl <<endl;
	else cout << "A caveman knows of this number." <<endl <<endl <<endl;

	system ("pause");

	return 0;
}

