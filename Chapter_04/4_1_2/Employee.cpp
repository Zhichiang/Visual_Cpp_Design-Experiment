#include "stdafx.h"
#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
	Employee e;

	e.SetName("���");
	e.SetAge(30);
	e.SetSalary(2000);
	e.OutValue();

    return 0;
}

