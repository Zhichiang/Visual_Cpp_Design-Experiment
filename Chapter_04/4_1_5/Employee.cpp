#include "stdafx.h"
#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
	Employee e;							//实例化对象
	
	e.SetName("李刚");
	e.SetAge(30);
	e.SetSalary(2000);
	e.OutValue();

	Employee e2("钱丽", 26, 1500);
	e2.OutValue();

	Employee* e3 = new Employee("谷一", 35, 1500);
	e3->OutValue();
	delete e3;

    return 0;
}

