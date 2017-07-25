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

//�޲����Ĺ��캯��
Employee::Employee() {
	strcpy(m_sName, "δ����");
	m_dSalary = 0.0;
	m_nAge = 0;
}

//�в����Ĺ��캯��
Employee::Employee(const char* sName, int nAge, double nSalary)
	:m_nAge(nAge), m_dSalary(nSalary) {										//���ó�Ա��ʼ�����ʼ�����Ա
	strcpy(m_sName, sName);
}