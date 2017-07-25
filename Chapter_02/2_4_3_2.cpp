#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int count = 10;								//循环次数
	int target = 3;								//寻找能够被3整除的数

	for (int i = 0; i < count; i++) {
		if (i % target == 0) {
			cout << "找到目标：" << i << endl;
			continue;
		}
		cout << i << endl;						//打印当前的值
	}

    return 0;
}

