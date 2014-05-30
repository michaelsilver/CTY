// DoWhile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int i;
	char str[80];
	char numbers[10][80] = {

	"Ethan",  "555-1111", 
	"Sophie", "555-2222",
	"Nathan", "555-3333",
	"Natalie", "555-4444",
	"Michael", "555-5555",
	};

	cout << "Enter name: ";
	cin >> str;

	for (i=0; i<10; i += 2)
		if (!strcmp(str, numbers[i])) {
			cout << "Number is " << numbers[i+1] << "\n";
			break;
		}

		if (i == 10) cout << "Not found. \n";



	system ("pause");
	return 0;
}



