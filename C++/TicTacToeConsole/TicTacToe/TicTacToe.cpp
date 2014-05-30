// TicTacToe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	beginning:
	char choice;
	char choice2;
	char a = '1';
	char b = '2';
	char c = '3';
	char d = '4';
	char e = '5';
	char f = '6';
	char g = '7';
	char h = '8';
	char i = '9';
	
	cout << a << " | " << b << " | " << c << endl;
	cout << "__________" << endl;
	cout << d << " | " << e << " | " << f << endl;
	cout << "__________" << endl;
	cout << g << " | " << h << " | " << i << endl << endl;
	NextTurn:
	Inv1:
	cout << "Player 1, please enter an integer from 1-9. "<<endl;
	cin >> choice;
	if(choice == a || choice == b || choice == c || choice == d || choice == e || choice == f || choice == g || choice == h || choice == i)
	{
		
	}
	else
	{
		cout << "You did not enter a valid number, please try again. \n";
		goto Inv1;
	}
	
	if (choice == a)
	{
		a = 'x';
	}
	if (choice == b)
	{
		b = 'x';
	}
	if (choice == c)
	{
		c = 'x';
	}
	if (choice == d)
	{
		d = 'x';
	}
	if (choice == e)
	{
		e = 'x';
	}
	if (choice == f)
	{
		f = 'x';
	}
	if (choice == g)
	{
		g = 'x';
	}
	if (choice == h)
	{
		h = 'x';
	}
	if (choice == i)
	{
		i = 'x';
	}
	
	cout << a << " | " << b << " | " << c << endl;
	cout << "__________" << endl;
	cout << d << " | " << e << " | " << f << endl;
	cout << "__________" << endl;
	cout << g << " | " << h << " | " << i << endl << endl;
	if ((a=='x' && b=='x' && c=='x') || (a=='x' && d=='x' && g=='x') || (a=='x' && e=='x' & i=='x') ||
		(i=='x' && h=='x' && g=='x') || (c=='x' && f=='x' && i=='x') || (c=='x' && e=='x' && g=='x'))
	{
		goto end1;
	}
	if (a!='1' && b!='2' && c!='3' && d!='4' && e!='5' && f!='6' && g!='7' && h!='8' && i!='9')
	{
		goto end4;
	}
	Inv2:
	cout << "Player 2, please enter an integer from 1-9. "<<endl;
	cin >> choice;
	if(choice == a || choice == b || choice == c || choice == d || choice == e || choice == f || choice == g || choice == h || choice == i)
	{
		
	}
	else
	{
		cout << "You did not enter a valid number, please try again. \n";
		goto Inv2;
	}
	
	if (choice == a)
	{
		a = 'o';
	}
	if (choice == b)
	{
		b = 'o';
	}
	if (choice == c)
	{
		c = 'o';
	}
	if (choice == d)
	{
		d = 'o';
	}
	if (choice == e)
	{
		e = 'o';
	}
	if (choice == f)
	{
		f = 'o';
	}
	if (choice == g)
	{
		g = 'o';
	}
	if (choice == h)
	{
		h = 'o';
	}
	if (choice == i)
	{
		i = 'o';
	}
	
	cout << a << " | " << b << " | " << c << endl;
	cout << "__________" << endl;
	cout << d << " | " << e << " | " << f << endl;
	cout << "__________" << endl;
	cout << g << " | " << h << " | " << i << endl << endl;
	if ((a=='o' && b=='o' && c=='o') || (a=='o' && d=='o' && g=='o') || (a=='o' && e=='o' & i=='o') ||
		(i=='o' && h=='o' && g=='o') || (c=='o' && f=='o' && i=='o') || (c=='o' && e=='o' && g=='o'))
	{
		goto end2;
	}
	else
	{
		goto NextTurn;
	}

	end1:
	cout << "Congradulations! Player 1 has won!"<<endl;
	goto end3;
	end2:
	cout << "Congradulations! Player 2 has won!"<<endl;
	goto end3;
	end4:
	cout << "Its a tie! \n";
	end3:
	cout << "Do you want to play again? (Y/N) \n";
	cin >> choice2;
	if (choice2 == 'Y' || choice2 == 'y')
	{
		goto beginning;
	}
	if (choice2 == 'N' || choice2 == 'n')
	{
	}
	else
	{
		cout << "You did not enter either Y or N. \n";
		goto end3;
	}
	system("pause");
	return 0;
}

