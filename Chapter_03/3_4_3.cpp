#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	void Swap(int&, int&);
	int i = 3, j = 4;

	cout << "i=" << i << ",j=" << j << endl;

	Swap(i, j);
	cout << "i=" << i << ",j=" << j << endl;

	system("PAUSE");

    return 0;
}

void Swap(int&a, int&b) {
	//形参为引用类型
	int temp;

	temp = a;
	a = b;
	b = temp;
}

