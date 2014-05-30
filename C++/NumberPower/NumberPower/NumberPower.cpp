// Multiply a number by a power

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int number,power,count,i;
	int again;

	cout << "Enter Number: ";
	cin >> number;
	cout << "Enter the power: ";
	cin >> power;

	count = 1;
	for (i=1; i <=power; i++)
	count = count*number;

	cout << count << endl;

	system ("pause");
	return 0;
}


