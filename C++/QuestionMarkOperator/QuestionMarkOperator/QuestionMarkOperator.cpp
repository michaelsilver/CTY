// DoWhile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int div_zero();

int main()
{
	int i, j, result;

	cout << "Enter dividend and divisor: ";
	cin >> i >> j;

	result = j ? i/j : div_zero();

	cout << "Result: " << result << endl;\

	system ("pause");
	return 0;
}

int div_zero()
{
	cout << "Cannot divide by zero. \n";
	return 0;
}

