#include "stdafx.h"
#include <iostream>
#include "Employee.h"
#include "Manager.h"

using namespace std;

int main()
{
	Employee e;							//ʵ��������
	
	e.SetName("���");
	e.SetAge(30);
	e.SetSalary(2000);
	e.OutValue();

	Employee e2("Ǯ��", 26, 1500);
	e2.OutValue();

	Employee* e3 = new Employee("��һ", 35, 1500);
	e3->OutValue();
	delete e3;

	Manager m("��һ", 35, 2500, 5000);
	m.OutValue();
	cout << "�����룺" << m.CalcPay() << endl;

    return 0;
}

