#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 12;
	int x1 = sizeof(a);
	int x2 = sizeof(int);

	cout << "x1=" << x1 << ";" << "x2=" << x2 << endl;
    return 0;
}

