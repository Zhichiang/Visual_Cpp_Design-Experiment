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
	cout << "������" << m_sName << "�����䣺" << m_nAge << "���¹��ʣ�" << m_dSalary << "���깤�ʣ�" << CalcPay() << endl;
}

//�޲����Ĺ��캯��
Employee::Employee() {
	m_sName[0] = 0;															//�ַ���������������Ϊ��
	m_dSalary = 0.0;
	m_nAge = 0;
	m_sPosition = new char[30];
}

//�в����Ĺ��캯��
Employee::Employee(const char* sName, int nAge, double nSalary)
	:m_nAge(nAge), m_dSalary(nSalary) {										//���ó�Ա��ʼ�����ʼ�����Ա
	strcpy(m_sName, sName);
	m_sPosition = new char[30];
}

//��������
Employee::~Employee() {
	cout << "����������ִ��" << endl;
	delete[]m_sPosition;
}

//�����깤��
double Employee::CalcPay() {
	return 12 * m_dSalary;
}