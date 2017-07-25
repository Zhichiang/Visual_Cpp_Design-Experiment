#include "stdafx.h"
#include <iostream>

using namespace std;

//声明函数
int ArraySum(int* ary, int arySize);

int main()
{
	int a[] = { 1,3,5,7,8,9,10,12 };				//定义一个数组
	int nSum = 0;								//定义一个整型变量用于存储计算结果
	int nLength = sizeof(a) / sizeof(int);		//计算数组的元素个数

	nSum = ArraySum(a, nLength);				//调用函数求和
	cout << "数组中所有元素的和是：" << nSum << endl;

    return 0;
}

//定义函数
int ArraySum(int* ary, int arySize) {
	int nSum = 0;

	for (int i = 0; i < arySize; i++) {
		nSum = nSum + *ary;						//通过解引用遍历数组中的元素
		ary++;									//步进一个单元
	}

	return nSum;
}

