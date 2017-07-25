#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 10;								//定义整型变量a，并初始化为10
	int b = 20;								//定义整型变量b，并初始化为20

	cout << "a>b=" << (a > b) << endl;		//输出a>b的值
	cout << "a<b=" << (a < b) << endl;		//输出a<b的值
	cout << "a==b=" << (a == b) << endl;	//输出a==b的值
	cout << "a>=b=" << (a >= b) << endl;	//输出a>=b的值
	cout << "a<=b=" << (a <= b) << endl;	//输出a<=b的值

    return 0;
}

