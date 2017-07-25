#include "stdafx.h"
#include <iostream>

using namespace std;

//声明函数
void SwapVarValue(int& r1, int& r2);

int main()
{
	int a = 1;
	int b = 2;

	cout << "交换前，a=" << a << " b=" << b << endl;

	SwapVarValue(a, b);
	cout << "交换后，a=" << a << " b=" << b << endl;

    return 0;
}

//定义交换变量值的函数
void SwapVarValue(int& r1, int& r2) {
	//注意通过解引用(*)操作的是实参的值
	int temp = r1;
	r1 = r2;
	r2 = temp;
}

