// Gas Milage.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float gallons;
	float start;
	float end;
	float distance;
	
	cout << "Gallons used: ";
	cin >> gallons;
	cout << endl;

	cout << "Starting mileage: ";
	cin >> start;
	cout << endl;

	cout << "Ending mileage: ";
	cin >> end;
	cout << endl << endl <<endl <<endl;

	distance = (end-start);
	
	cout << "Your mpg: " << (distance / gallons) <<endl <<endl <<endl <<endl <<endl <<endl;


	system ("pause");

	return 0;
}

