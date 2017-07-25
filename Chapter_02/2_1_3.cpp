#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//num在内层作用域中可用
	int num = 2;
	//测试变量num
	if (num == 2) {
		//定义num1，其作用域为if所在的{}
		int num1 = num*num;
		cout << "num的值是：" << num << "num1的值是：" << num1 << endl;
	}
	//num1=2：错误！num1未知
	cout << "num的值是：" << num << endl;
    return 0;
}

