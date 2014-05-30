// DoWhile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{	
	float A;
	float B;
	float C;
	float answer1;
	float answer2;

	cout << "This is a program to solve a quadratic equation in the form y = Ax^2+Bx+C" <<endl <<endl;
	cout << "Input the value of A: ";
	cin >> A;
	cout << "Input the value of B: ";
	cin >> B;
	cout << "Input the value of C: ";
	cin >> C;

	if ((B * B - 4 * A * C) < 0)
		cout << "Solutions not in real domain" <<endl <<endl;
	
	answer1 = (-B + sqrt(B * B - 4 * A * C)) / (2 * A);
	answer2 = (-B - sqrt(B * B - 4 * A * C)) / (2 * A);

	if (answer1 == answer2)
		cout << "The solution is: " <<answer1;
	else cout << "The solutions are: " <<answer1 << "and " <<answer2 <<endl <<endl;

	system ("pause");
	return 0;
}



