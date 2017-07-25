#include "stdafx.h"
#include <iostream>
#include "Employee.h"
#include "Manager.h"

using namespace std;

int main()
{
	int i = 0;
	Employee* ary[3];

	ary[0] = new Employee("钱多多", 24, 2000);
	ary[1] = new Employee("孙玉芬", 25, 2100);
	ary[2] = new Manager("李荣", 30, 2800, 2000);

	for (i = 0; i < 3; i++) {
		ary[i]->OutValue();
		cout << "年收入：" << ary[i]->CalcPay() << endl;
	}

	for (i = 0; i < 3; i++) {
		delete ary[i];
	}

    return 0;
}

