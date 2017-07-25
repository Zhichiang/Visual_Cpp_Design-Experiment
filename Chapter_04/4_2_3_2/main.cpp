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
	cout << "姓名：" << m_sName << "；年龄：" << m_nAge << "；月工资：" << m_dSalary << "；年工资：" << CalcPay() << endl;
}

//无参数的构造函数
Employee::Employee() {
	m_sName[0] = 0;															//字符串（姓名）设置为空
	m_dSalary = 0.0;
	m_nAge = 0;
	m_sPosition = new char[30];
}

//有参数的构造函数
Employee::Employee(const char* sName, int nAge, double nSalary)
	:m_nAge(nAge), m_dSalary(nSalary) {										//利用成员初始化表初始化类成员
	strcpy(m_sName, sName);
	m_sPosition = new char[30];
}

//析构函数
Employee::~Employee() {
	cout << "析构函数被执行" << endl;
	delete[]m_sPosition;
}

//计算年工资
double Employee::CalcPay() {
	return 12 * m_dSalary;
}