#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//动态分配3个整型单元,p是首地址
	int* p = new int[3];
	//依次给每个内存单元赋值
	*p = 1;
	*(p + 1) = 2;
	*(p + 2) = 3;

	//输出每个内存单元的值
	cout << *p << " " << *(p + 1) << " " << *(p + 2) << endl;

	//释放动态内存
	delete[]p;

    return 0;
}

