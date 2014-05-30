// DoWhile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int input;
	float temperature;
	char again;

start:
	cout << "Please select the following \n" << "1.) Fahrenheit-to-Celsius \n" << "2.) Celsius-to-Fahrenheit \n" << "Enter:";
	cin >> input;
	if (input == 1)
	{
		cout <<endl << "Enter temperature in Fahrenheit to convert into degrees Celsius: ";
		cin >> temperature;
		cout << "Temperature in Celsius is: " << (temperature - 32) * 5 / 9;
		goto repeat;
	}
	else cout <<endl << "Enter temperature in Celsius to convert into degrees Fahrenheit: ";
		cin >> temperature;
		cout << "Temperature in Fahrenheit is: " << (temperature * 9 / 5) + 32;
		goto repeat;

repeat: cout <<endl <<endl << "Would you like to try again? (Y/N)";
		cin >> again;

if (again == 'y' || again == 'Y')
	{
	cout <<endl <<endl;
	goto start;
	}

	system ("pause");
	return 0;
}

