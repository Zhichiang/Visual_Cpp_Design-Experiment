#include "stdafx.h"
#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
	Employee e1;										//ʵ�������󣬻�����޲����Ĺ��캯��
	Employee e2("Ǯ��", 26, 1500);						//ʵ�������󣬻�����в����Ĺ��캯��

	e1.OutValue();
	e2.OutValue();

    return 0;
}

