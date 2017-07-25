#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//定义三个整数变量用于比较
	int num1;
	int num2;
	int num3;
	//定义两个变量用于存储最大值与最小值
	int maxnum = 0;
	int minnum = 0;

	//从控制台输入三个整数
	cout << "请输入三个整数：" << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;

	//利用num1和num2进行比较找出较大的和较小的
	if (num1 > num2) {
		maxnum = num1;
		minnum = num2;
	}
	else {
		maxnum = num2;
		minnum = num1;
	}
	//再把maxNum和minNum分别和num3进行比较，最终得到最大值和最小值
	if (maxnum < num3) {
		maxnum = num3;
	}
	if (minnum > num3) {
		minnum = num3;
	}
	//分别输出最大值和最小值
	cout << "最大值是：" << maxnum << "最小值为：" << minnum << endl;

	if (maxnum % 2 == 0) {
		cout << "最大值为偶数" << endl;
	}
	else {
		cout << "最大值为奇数" << endl;
	}
	if (minnum % 2 == 0) {
		cout << "最小值为偶数" << endl;
	}
	else {
		cout << "最小值为奇数" << endl;
	}
    return 0;
}

