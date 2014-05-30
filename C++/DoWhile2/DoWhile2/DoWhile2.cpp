// DoWhile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int magic; // magic number
	int guess; // user's guess
	srand(50);
	magic = rand(); // get a random number

	do {
		cout << "Enter your guess: ";
		cin >> guess;

		if (guess == magic)
		{
			cout << "** Right ** ";
			cout << magic << "is the magic number. \n";

		}
		else
		{
			cout << "... Sorry you're wrong.";
			if (guess > magic)
				cout << "Your guess is too high. \n";
			else cout << "Your guess is too low. \n";
		}
		}
	while (guess != magic);

	system ("pause");
	return 0;
}

