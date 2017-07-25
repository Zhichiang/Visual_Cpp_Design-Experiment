#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int array[] = { 10,23,6,88,19 };
	int index = 0;								//最大值索引号，默认为0
	int max = array[index];						//最大值
	//寻找最大值
	int lenth = sizeof(array) / sizeof(int);

	for (int i = 1; i < lenth; i++) {
		if (array[i] > max) {
			index = i;
			max = array[i];
		}
	}

	cout << "最大值为：" << max << "，索引号为" << index << endl;

    return 0;
}

