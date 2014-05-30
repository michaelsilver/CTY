// WhileLoop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()

{
	int len;

	cout << "Enter length (1 to 79): ";
	cin >> len;


	while (len > 1 && len < 80)
	{
		cout << '.';
		len--;
	}

	cout <<endl;

	system ("pause");

	return 0;
}

