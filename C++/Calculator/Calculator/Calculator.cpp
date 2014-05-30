// DoWhile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "string"

using namespace std;

float Multyplication(float&,float&);
float Division(float&,float&);
float Addition(float&,float&);
float Subtraction(float&,float&);

///////////////		cout<<a<<"*"<<b<<"="<<formula;		For !!MULTYpLIcation!!

void main()
{
loop:

ofstream eout;
eout.open("Calculation.HTML");

float a=0.0;
float b=0.0;
float mul=1.0;
float div=1.0;
float add=1.0;
float sub=1.0;

cout<<"Enter a Number: "<<endl;
cin>>a;

cout<<"Enter another Number: "<<endl;
cin>>b;

//////////////////////////////
mul=Multyplication(a,b);
div=Division(a,b);
add=Addition(a,b);
sub=Subtraction(a,b);
//////////////////////////////
cout<<setprecision(2),setiosflags(ios::fixed|ios::showpoint);

cout<<endl;

cout<<a<<"+"<<b<<"="<<add<<endl;

cout<<a<<"-"<<b<<"="<<sub<<endl;

cout<<a<<"*"<<b<<"="<<mul<<endl;

cout<<a<<"/"<<b<<"="<<div<<endl;

string answer="";
cout<<"\nWanna go again?";
cin>>answer;
if(answer=="yes"|answer=="YES"||answer=="Yes")
{
	goto loop;
}
system("pause");
}

float Multyplication(float &a,float &b) {
	float formula=0.0;
	formula=a*b;
	return formula;
	}

float Division(float &a,float &b) {
	float formula=0.0;
	formula=a/b;
	return formula;
	}

float Addition(float &a,float &b) {
	float formula=0.0;
	formula=a+b;
	return formula;
	}

float Subtraction(float &a,float &b) {
	float formula=0.0;
	formula=a-b;
	return formula;
	}


