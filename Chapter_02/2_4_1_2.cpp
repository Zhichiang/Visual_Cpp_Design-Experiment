#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int year;
	cout << "��������ݣ�";
	cin >> year;

	if ((year % 100) == 0) {
		if ((year % 400) == 0) {
			cout << year << "������" << endl;
		}
		else {
			cout << year << "��������" << endl;
		}
	}
	else if ((year % 4) == 0) {
		cout << year << "������" << endl;
	}
	else {
		cout << year << "��������" << endl;
	}

    return 0;
}

