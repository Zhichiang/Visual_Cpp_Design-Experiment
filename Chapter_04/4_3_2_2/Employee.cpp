#include "stdafx.h"
#include <iostream>
#include "Employee.h"
#include "Manager.h"

using namespace std;

int main()
{
	int i = 0;
	Employee* ary[3];

	ary[0] = new Employee("Ǯ���", 24, 2000);
	ary[1] = new Employee("�����", 25, 2100);
	ary[2] = new Manager("����", 30, 2800, 2000);

	for (i = 0; i < 3; i++) {
		ary[i]->OutValue();
		cout << "�����룺" << ary[i]->CalcPay() << endl;
	}

	for (i = 0; i < 3; i++) {
		delete ary[i];
	}

    return 0;
}

