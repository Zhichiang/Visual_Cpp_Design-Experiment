#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int beginYear;
	int endYear;

	cout << "��������ݣ�" << endl;
	cin >> beginYear >> endYear;
	cout << "��" << beginYear << "��" << endYear << "������Ϊ��" << endl;

	for (int year = beginYear, i = 0; year <= endYear; year++, i++) {
		if (((year % 100) == 0) && ((year % 400) == 0) || ((year % 4) == 0)) {
			cout << year << " ";
		}

		//���������ʽ
		if (year % 8 == 0) {
			cout << endl;
		}
	}

    return 0;
}

