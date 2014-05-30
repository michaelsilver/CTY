// DoWhile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	int product;
	int count;

	cout << "This is a program to multiply two numbers. " <<endl << endl <<endl;

	cout << "Enter the value of the FIRST NUMBER (natural numbers only): ";
	cin >> a;
	cout << endl;

	cout << "Enter the value of the FIRST NUMBER (natural numbers only): ";
	cin >> b;
	cout <<endl <<endl <<endl;

	if (a == 0 || b == 0)
		product = 0;
	else 
	{
	count = 0;
	product = 0;
	}

	if (a > b)
		do
		{
		product = product + a;
		count++;
		}
		while (count < b);

	else
		do
		{
		product = product + b;
		count++;
		}
		while (count < a);

	cout << "The ANSWER is: " <<product <<endl <<endl;

	system ("pause");
	return 0;
}



