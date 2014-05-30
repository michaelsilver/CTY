// DoWhile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int speed;
	int distance;
	char repeat;

	cout << "Do you want to plan a trip? (Y or N) ";
	cin >> repeat;

	while (repeat == 'y' || repeat == 'Y')
	{
		cout << "\nEnter your speed in mph: ";
		cin >> speed;
	
		cout << "\nEnter your disance in miles: ";
		cin >> distance;

		cout << "\nAt " <<speed << "mph, it will take\n" <<distance / speed << " hours to travel " <<distance << " miles.\n";

		cout << "\nDo you want to plan another trip? (Y or N) ";
		cin >> repeat;
	}

	system ("pause");
	return 0;
}

