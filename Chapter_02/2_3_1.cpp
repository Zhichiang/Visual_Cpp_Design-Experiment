#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 13;								//定义整型变量a，并初始化为13
	int b = 14;								//定义整型变量b，并初始化为14

	cout << "a+b=" << a + b << endl;		//输出a+b的值
	cout << "a-b=" << a - b << endl;		//输出a-b的值
	cout << "a*b=" << a*b << endl;			//输出a*b的值
	cout << "a/b=" << a / b << endl;		//输出a/b的值
	cout << "a%b=" << a%b << endl;			//输出a%b的值
	cout << "a++=" << a++ << endl;			//输出a++的值
	cout << "++a=" << ++a << endl;			//输出++a的值
	cout << "b--=" << b-- << endl;			//输出b--的值
	cout << "--b=" << --b << endl;			//输出--b的值

    return 0;
}

