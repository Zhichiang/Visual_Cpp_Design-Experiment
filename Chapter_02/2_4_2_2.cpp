#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int count = 5;
	int i = 1;								//循环上限
	do {
		cout << "当前是：" << i << endl;
		i++;
	} while (i < count);

    return 0;
}

