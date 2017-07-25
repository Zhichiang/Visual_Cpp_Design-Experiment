#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int *p1;								//这里p1未设定初始值
	int *p2 = &a;

	//输出p1的值，但由于p1未初始化，编译器会出现错误
	//cout << "p1的值是：" << p1 << endl;
	//输出p2的值
	cout << "p2的值是：" << p2 << endl;
	//输出p2所指对象的值
	cout << "p2所指对象的值是：" << *p2 << endl;

    return 0;
}

