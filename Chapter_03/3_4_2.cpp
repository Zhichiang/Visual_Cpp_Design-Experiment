#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	void Swap(int*, int*);
	int i = 3, j = 4;

	cout << "i=" << i << ",j=" << j << endl;

	Swap(&i, &j);
	cout << "i=" << i << ",j=" << j << endl;

	system("PAUSE");

    return 0;
}

void Swap(int* p1, int* p2) {
	//形参为整型指针变量
	int temp;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
