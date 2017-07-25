#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a[10];
	float b[5];
	char c[20];
	double d[5];
	bool e[5];

	//下面输出各数组的数组名，注意输出的内容
	cout << "a是：" << a << endl;
	cout << "b是：" << b << endl;
	cout << "c是：" << c << endl;
	cout << "d是：" << d << endl;
	cout << "e是：" << e << endl;
	cout << "-------------" << endl;
	//下面输出各数组中第一个元素的值，注意输出内容
	cout << "a[0]=" << a[0] << endl;
	cout << "b[0]=" << b[0] << endl;
	cout << "c[0]=" << c[0] << endl;
	cout << "d[0]=" << d[0] << endl;
	cout << "e[0]=" << e[0] << endl;
	cout << "-------------" << endl;
	//下面输出各数组的长度
	cout << "a的大小是：" << sizeof(a) << endl;
	cout << "b的大小是：" << sizeof(b) << endl;
	cout << "c的大小是：" << sizeof(c) << endl;
	cout << "d的大小是：" << sizeof(d) << endl;
	cout << "e的大小是：" << sizeof(e) << endl;

    return 0;
}

