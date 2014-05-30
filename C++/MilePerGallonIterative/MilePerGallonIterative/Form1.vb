// Gas Milage.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    repeatme:
	float gallons;
	float start;
	float end;
	float distance;
	float average;
    char again;

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
	average = (distance / gallons);

	cout << "Your mpg: " <<average <<endl <<endl;

	if (average > 25)
		cout << "You are getting GOOD gas mileage.";
	else cout << "You are getting BAD gas mileage!!!!!!!!!!!!!";

	cout <<endl <<endl;

    cout << "do you want to do this again? Enter (Y/N): ";

    if (again == "y" || again == "Y"
        {
            goto repeatme;
        }

	system ("pause");

	return 0;
}

