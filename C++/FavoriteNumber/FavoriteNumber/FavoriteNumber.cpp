// DoWhile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "What is your favorite number? ";
	cin >> n;

	n = n + 1;

	cout <<endl;
	cout << "My favorite number is 1 more than that, " << n <<endl;

	cout<<endl <<endl;

	system ("pause");
	return 0;
}

