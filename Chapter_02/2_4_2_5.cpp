#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int beginYear;
	int endYear;

	cout << "请输入年份：" << endl;
	cin >> beginYear >> endYear;
	cout << "从" << beginYear << "到" << endYear << "中闰年为：" << endl;

	for (int year = beginYear, i = 0; year <= endYear; year++, i++) {
		if (((year % 100) == 0) && ((year % 400) == 0) || ((year % 4) == 0)) {
			cout << year << " ";
		}

		//调整输出格式
		if (year % 8 == 0) {
			cout << endl;
		}
	}

    return 0;
}

