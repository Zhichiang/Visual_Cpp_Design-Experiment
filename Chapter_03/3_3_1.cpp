#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int& r = a;								//定义引用变量r，r是a的别名

	cout << "a的初值是：" << a << endl;
	cout << "r的初值是：" << r << endl;

	r++;

	cout << "a=" << a << endl;
	cout << "r=" << r << endl;

    return 0;
}

