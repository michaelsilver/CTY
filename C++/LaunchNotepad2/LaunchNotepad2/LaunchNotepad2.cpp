// Launch notepad using C++
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main(void)
{

cout << "Notepad will launch. \n" <<endl;

// replace with the path to your explorer.exe

system("c:\\windows\\notepad.exe");

system("pause");

return 0;
}