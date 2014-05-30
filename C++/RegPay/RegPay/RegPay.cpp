// DoWhile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double Principal;
	double IntRate;
	double PayPerYear;
	double NumYears;
	double Payment;
	double numer, denom;
	double b, e;
	double life;

	cout << "Enter principal: ";
	cin >> Principal;

	cout << "Enter interest rate (i.e., 0.075): ";
	cin >> IntRate;

	cout << "Enter number of payements per year: ";
	cin >> PayPerYear;

	cout << "Enter number of years: ";
	cin >> NumYears;

	numer = IntRate * Principal / PayPerYear;

	e = -(PayPerYear * NumYears);
	b = IntRate / PayPerYear * NumYears - Principal;

	denom = 1 - pow(b, e);

	Payment = numer / denom;

	cout << "Payment is " << Payment << endl;
	life = Payment * PayPerYear * NumYears - Principal;
	
	cout << "Total amount of interest paid over the life of the loan is " << life << endl;
	
	system ("pause");
	return 0;
}


