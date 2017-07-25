#include "stdafx.h"
#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
	Employee e1;										//实例化对象，会调用无参数的构造函数
	Employee e2("钱丽", 26, 1500);						//实例化对象，会调用有参数的构造函数

	e1.OutValue();
	e2.OutValue();

    return 0;
}

