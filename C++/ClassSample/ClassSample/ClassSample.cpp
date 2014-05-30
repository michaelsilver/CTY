// DoWhile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Vehicle
{
	public:
		int passengers; //This is an instance variable that represents the number of passengers 
		int fuelcap;    //This is an instance variable that represents the fuel capacity in gallons
		int mpg;        //This is an instance variable that represents the fuel consumption in miles
		int range;
};

int calcrange (int fuelcap, int mpg)
{
	int range;
	range = fuelcap * mpg;
	return (range);
}

int main()
{
	Vehicle minivan;  //Create a variable object (and example of the generalization made by "Vehicle") called minivan
	Vehicle sportscar;

	minivan.passengers = 7;  //The dot operator is used to access a number of Vehicle
	minivan.fuelcap = 16;
	minivan.mpg = 21;

	minivan.range = calcrange (minivan.fuelcap, minivan.mpg);

	sportscar.passengers = 2;  //The dot operator is used to access a number of Vehicle
	sportscar.fuelcap = 14;
	sportscar.mpg = 12;

	sportscar.range = calcrange (minivan.fuelcap, minivan.mpg);


	cout << "Minivan can carry " << minivan.passengers << " with a range of " << minivan.range <<endl;
	cout << "Sportscars can carry " << sportscar.passengers << " with a range of " << sportscar.range <<endl;

	system ("pause");
	return 0;
}

