#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int i = 100;
	int c = 'a';
	short b = 3;
	float f = 1.89f;
	double d = 2.1;
	int ii = i + c;						//char类型的变量c自动转换为与i一致的int类型参加运算
	float ff = b*f;						//short类型的变量b自动转换为与f一致的float类型参加运算
	//int类型的变量ii自动转换为与ff一致的float类型，ff/ii计算结果为float类型然后再转换为与d一致的double类型
	double d1 = d + ff / ii;
	cout << "ii=" << ii << endl;
	cout << "ff=" << ff << endl;
    return 0;
}

