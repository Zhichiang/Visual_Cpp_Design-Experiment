#pragma once														//防止多次包含

#include "stdafx.h"
#include <iostream>
#include "Employee.h"

class Manager :public Employee {
public:
	Manager(const char* sName, int nAge, double nSalary, double dPrize);

	//计算年工资
	double CalcPay();

	//析构函数
	~Manager();

private:
	double m_dPrize;												//年终奖
};
