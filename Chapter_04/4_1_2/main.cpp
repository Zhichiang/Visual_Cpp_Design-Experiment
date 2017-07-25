//Employee.cpp：类的实现

#include "stdafx.h"
#include "Employee.h"
#include <string.h>
#include <iostream>

using namespace std;

void Employee::SetName(const char* sName) {
	strcpy(m_sName, sName);
}

void Employee::SetAge(int nAge) {
	m_nAge = nAge;
}

void Employee::SetSalary(double nSalary) {
	m_dSalary = nSalary;						//规范写法应该是nSalary?
}

void Employee::OutValue() {
	cout << "姓名：" << m_sName << "；年龄：" << m_nAge << "；工资" << m_dSalary << endl;
}