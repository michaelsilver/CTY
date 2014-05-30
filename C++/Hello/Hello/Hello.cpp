#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char name [20];
	int age;

	cout << "What is your name?" <<endl;
	cout << "Name: ";
	cin >> name;
	cout << endl;
	
		
	cout << "What is your age?" <<endl;
	cout << "Age: ";
	cin >> age;
	cout << endl;
	
	cout << "Your name is " << name << " and your age is " << age <<endl;

	system ("pause");

	return 0;
}

