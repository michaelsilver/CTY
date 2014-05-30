// CircumferenceArea.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int r;
	float pi = 3.14;
	float circumference;
	float area;

	cout << "Enter value for r: ";
	cin >> r;
	
	circumference = 2 * pi * r;
	cout << "The circumference is: " << circumference <<endl <<endl;
	
	area = pi * pow(r,2.0);
	cout << "The area is: " << area <<endl;

	system ("pause");

	return 0;
}

