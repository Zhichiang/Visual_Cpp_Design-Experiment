//Employee.cpp�����ʵ��

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
	m_dSalary = nSalary;						//�淶д��Ӧ����nSalary?
}

void Employee::OutValue() {
	cout << "������" << m_sName << "�����䣺" << m_nAge << "������" << m_dSalary << endl;
}