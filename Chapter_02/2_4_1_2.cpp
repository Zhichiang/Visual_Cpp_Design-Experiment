#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int year;
	cout << "请输入年份：";
	cin >> year;

	if ((year % 100) == 0) {
		if ((year % 400) == 0) {
			cout << year << "是闰年" << endl;
		}
		else {
			cout << year << "不是闰年" << endl;
		}
	}
	else if ((year % 4) == 0) {
		cout << year << "是闰年" << endl;
	}
	else {
		cout << year << "不是闰年" << endl;
	}

    return 0;
}

