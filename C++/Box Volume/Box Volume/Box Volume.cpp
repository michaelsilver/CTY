// DoWhile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Box
{
	public:
		int width;
		int height;
		int length;
};

int calcvolume (int width, int height, int length)
{
	int volume;
	volume = width * height * length;
	return (volume);
}


int main()
{
	Box box1;
	Box box2;

	box1.width = 2;
	box1.height = 3;
	box1.length = 4;

	box2.width = 4;
	box2.height = 9;
	box2.length = 8;

	int volume1 = calcvolume (box1.width, box1.height, box1.length);
	int volume2 = calcvolume (box2.width, box2.height, box2.length);

	cout << "The volume of box1 is " <<volume1 <<endl <<endl;
	cout << "The voluem of box2 is " <<volume2 <<endl <<endl;

	system ("pause");
	return 0;
}

