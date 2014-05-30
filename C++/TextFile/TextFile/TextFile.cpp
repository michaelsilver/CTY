// DoWhile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;
const char *FILENAME = "myfile.txt";

int main()
{
	//create output object associated w/ file
	ofstream fout(FILENAME);
	cout << "Enter your text: ";
	char str[100];
	cin >> str;
	//Write the text to the file.
	//Do not put a space between words.
	//Use the underscore instead.
	fout << "here is your text\n";
	fout <<str<<endl;
	//close file
	fout.close();

	ifstream fin(FILENAME);
	char ch;
	while (fin.get(ch))
	cout << ch;
	fin.close();
	system("pause");
	return 0;
}


