#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int month;
	cout << "请输入月份：";
	cin >> month;

	switch (month) {
	case 1:
		cout << "一月，该月共有31天" << endl;
		break;
	case 2:
		cout << "二月，该月共有29天" << endl;
		break;
	case 3:
		cout << "三月，该月共有31天" << endl;
		break;
	case 4:
		cout << "四月，该月共有30天" << endl;
		break;
	case 5:
		cout << "五月，该月共有31天" << endl;
		break;
	case 6:
		cout << "六月，该月共有30天" << endl;
		break;
	case 7:
		cout << "七月，该月共有31天" << endl;
		break;
	case 8:
		cout << "八月，该月共有31天" << endl;
		break;
	case 9:
		cout << "九月，该月共有30天" << endl;
		break;
	case 10:
		cout << "十月，该月共有31天" << endl;
		break;
	case 11:
		cout << "十一月，该月共有30天" << endl;
		break;
	case 12:
		cout << "十二月，该月共有31天" << endl;
		break;
	default:
		cout << "无效月份" << endl;
		break;
	}
    return 0;
}

