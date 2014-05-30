// DoWhile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char letter;
	float base;
	float height;
	float area;
	float mileage;
	float speed;
	float time;

	cout << "Enter 'A' for the area of a triangle. Enter 'B' for the flying time between two cities.: ";
	cin >> letter;
	
	if (letter == 'A' || letter == 'a' )
		{
			goto triangle;
	}
	else goto fly;

triangle:
	cout << "Enter the value of the base: ";
	cin >> base;

	cout << "Enter the value of the height: ";
	cin >> height;

	area = base * height * 0.5;
	cout << endl;
	cout << "The area is: " << area <<endl;
	goto end;

fly:
	cout << "Enter the value of the mileage: ";
	cin >> mileage;

	cout << "Enter the value of the average speed: ";
	cin >> speed;

	time = (mileage / speed); 
	cout << endl;
	cout << "The flying time is: " << time <<endl;

end:

	system ("pause");
	return 0;
}

