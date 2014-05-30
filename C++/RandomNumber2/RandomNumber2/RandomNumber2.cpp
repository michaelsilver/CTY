// RandomNumber.cpp : main project file.

#include "stdafx.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
srand(time(0));
int number=rand()%1000000000000+1;
int guess;
cout<<"Im thinking of a number between 1-1,000,000,000,000. Take a guess: ";
cin>>guess; 

while(guess!=number)
{
if(guess>number)
{
cout<<"Too high,Guess again: ";
cin>>guess;
} 
if(guess<number)
{
cout<<"Too low,Guess again: ";
cin>>guess;
}
}
if(guess=number)
{ 
cout<<"Congrats!! You got it." << endl;
} 

system ("pause");

return 0;
}

