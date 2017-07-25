#include "stdafx.h"
#include <iostream>

using namespace std;

//函数声明
int GetProduct(int x, int y);

int main()
{
	int a = 12;
	int b = 230;

	cout << "a*b的积是：" << GetProduct(a, b) << endl;

	return 0;
}

//函数定义，如果将函数定义去掉，将出现连接错误
int GetProduct(int x, int y) {
	return x*y;
}

