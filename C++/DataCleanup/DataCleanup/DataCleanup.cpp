// DoWhile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	const int MAXLIST = 50;
	int n;
	int data[MAXLIST];
	int i;
	int left, right;
	int legit;

	cout << "How many numbers are in the list: ";
	cout << "(maximum is " <<MAXLIST << ") ";
	cin >> n;

	i = 0;
	cout << "Enter the first number: ";
	cin >> data[i];

	while (i < n - 1)
	{
		i = i + 1;
		cout << "Enter next number: ";
		cin >> data[i];
	}

	legit = n - 1;
	left = 0;
	right = n - 1;
	cout << endl;
	cout << "The origional list is" << endl;

	i = 0;
	while (i<= legit)
	{
		cout << data[i] << " ";
		i = i+1;
	}
	cout << endl;

	while (left < right)
	{
		if (data[left]	!= 0)
			left = left + 1;
		else
		{
	legit = legit - 1;
	data[left] = data[right];
	right = right - 1;
		}
	}
	if (data[left] == 0)
		legit = legit - 1;

	cout << "The cleaned list is" <<endl;
	i=0;
	while (i <= legit)
	{
		cout << data[i] << " ";
		i = i + 1;
	}
	cout << endl <<endl;

	system ("pause");
	return 0;
}

