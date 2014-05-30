// TicTacToe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void moveLocation(char player);
void board();
void ai();
void win(std::string player);
void block(std::string player);
void bestAlternate();
void compare(std::string buttonFirst, std::string buttonSecond);
void computerMove();
void gameEnd();

int start;
int aa;
int bb;
int cc;
int ii;
int x = 0;
int y = x + 1;
int firstRank;
int secondRank;

std::string buttonFirst;
std::string buttonSecond;
std::string player;
std::string playerAlternate;
std::string match = "0";
int moveCount = 1;

std::string button [9] = {"a3z", "b3", "c3y", "a2", "b2yz", "c2", "a1y", "b1", "c1z"};

int rank [9] = {};

char choice;
char choice2 = 'y';
char a = '1';
char b = '2';
char c = '3';
char d = '4';
char e = '5';
char f = '6';
char g = '7';
char h = '8';
char i = '9';

int main()
{
	board();

	while ((a!='1' && b!='2' && c!='3' && d!='4' && e!='5' && f!='6' && g!='7' && h!='8' && i!='9') && (choice2 == 'Y' || choice2 == 'y'))
	{
		cout << "Please enter an integer from 1-9. \n";
		cin >> choice;

		while (choice != a || choice != b || choice != c || choice != d || choice != e || choice != f || choice != g || choice != h || choice != i)
		{
			cout << "You did not enter a valid number, please try again. \n";
			cin >> choice;
		}

		moveLocation('x');
	
		board();

		if (a!='1' && b!='2' && c!='3' && d!='4' && e!='5' && f!='6' && g!='7' && h!='8' && i!='9')
		{
			cout << "Stalemate \n";
			break;
		}
	
		ai();

		// cin >> choice;
		
		moveLocation('o');
	
		board();
	}
	system("pause");
	return 0;
}

void moveLocation(char player)
{
	if (choice == 1)
		a = player;
	if (choice == 2)
		b = player;
	if (choice == 3)
		c = player;
	if (choice == 4)
		d = player;
	if (choice == 5)
		e = player;
	if (choice == 6)
		f = player;
	if (choice == 7)
		g = player;
	if (choice == 8)
		h = player;
	if (choice == 9)
		i = player;
}

void board()
{
	cout << a << " | " << b << " | " << c << endl;
	cout << "__________" << endl;
	cout << d << " | " << e << " | " << f << endl;
	cout << "__________" << endl;
	cout << g << " | " << h << " | " << i << endl << endl;
}

void ai()
{
	while (moveCount == 0)
	{
		win("o");
		if (moveCount == 1)
		{
			cout << "Computer wins. \n";
			gameEnd();
			break;
		}
		block("x");
		if (moveCount == 1)
			break;
		bestAlternate();
	}
}

void win(std::string player)
{
	start = 0;

	while ((match.compare("0") == 0) && (aa<10  || bb<10))
	{
		for (aa=start; aa<10; aa++)
		{
			std::size_t found = button[aa].find(player); 
			if (found!=std::string::npos)
				break;
		}

		for (bb=start+1; bb<10; bb++)
		{
			std::size_t found = button[bb].find(player); 
			if (found!=std::string::npos)
				break;
		}
		
		compare (button [aa], button [bb]);
		start++;
	}

	if (match.compare("0") != 0)
	{
		for (ii=0; ii<10; ii++)
		{
			if (player.compare("o") == 0)
				playerAlternate = "x"; //SEE HERE
			else playerAlternate = "o";
			std::size_t found = button[ii].find(match);
			std::size_t foundPlayer = button[ii].find(playerAlternate); //HERE deal with player
			if ((found!=std::string::npos) && (ii != aa) && (ii != bb) && (foundPlayer!=std::string::npos))
				break;
		}
		computerMove();
	}
}

void block(std::string player)
{
	win(player);
}

void bestAlternate()
{
	for (ii=0; ii<10; ii++)
	{
		std::size_t found = button[ii].find("x");
		std::size_t foundo = button[ii].find("o");
		if ((found=std::string::npos) && (foundo=std::string::npos))
		{
			for (bb=ii+1; bb<10; bb++)
			{
				compare (button [ii], button [bb]); 
				std::size_t found = button[bb].find("x");
				std::size_t foundo = button[bb].find("o");
				if ((foundo!=std::string::npos) && (match.compare("0") != 0))
				{
					 for (cc=bb+1; cc<10; cc++)
					 {
						std::size_t found = button[cc].find(match);
						if (found!=std::string::npos)
							rank[cc] = rank[cc] + 2; 
					 }
				}
				else if ((found=std::string::npos) && (match.compare("0") != 0))
				{
					for (cc=bb+1; cc<10; cc++)
					 {
						std::size_t found = button[cc].find(match);
						if (found!=std::string::npos)
							rank[cc] = rank[cc] + 1; 
					 }
				}
				else if (found=std::string::npos)
					break;
			}
		}

	firstRank = rank[x];
	secondRank = rank[y];

	}
}

void compare(std::string buttonFirst, std::string buttonSecond)
{
	std::string buttonFirst0 (1,buttonFirst[0]);
	std::string buttonFirst1 (1,buttonFirst[1]);
	std::string buttonFirst2 (1,buttonFirst[2]);
	std::string buttonFirst3 (1,buttonFirst[3]);
	std::string buttonSecond0 (1,buttonSecond[0]);
	std::string buttonSecond1 (1,buttonSecond[1]);
	std::string buttonSecond2 (1,buttonSecond[2]);
	std::string buttonSecond3 (1,buttonSecond[3]);

	if (buttonFirst0.compare(buttonSecond0) == 0)
		match = buttonFirst0;
	if (buttonFirst1.compare(buttonSecond1) == 0)
		match = buttonFirst1;
	if ((buttonFirst2.compare(buttonSecond2) == 0) && (buttonFirst2.compare("x") != 0) && (buttonFirst2.compare("o") != 0))
		match = buttonFirst2;
	if ((buttonFirst2.compare(buttonSecond3) == 0) && (buttonFirst2.compare("x") != 0) && (buttonFirst2.compare("o") != 0))
		match = buttonFirst2;
	if ((buttonFirst3.compare(buttonSecond2) == 0) && (buttonFirst3.compare("x") != 0) && (buttonFirst3.compare("o") != 0))
		match = buttonFirst3;
}

void computerMove()
{
	choice = i + 1;
	button[i] += std::string(1, 'o');
	moveCount = 1;
}

void gameEnd()
{
	cout << "Do you want to play again? (Y/N) \n";
	cin >> choice2;

	while (choice2 != 'Y' && choice2 != 'y' && choice2 == 'N' && choice2 == 'n')
	{
		cout << "You did not enter either Y or N, please try again. \n";
		cin >> choice2;

		if (choice2 == 'N' || choice2 == 'n')
		{
			break;
		}
	}
}


