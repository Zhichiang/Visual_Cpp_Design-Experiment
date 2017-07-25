#pragma once
//Employee.h：类的定义

class Employee {
public:
	//不带参数的构造函数
	Employee();
	//带参数的构造函数
	Employee(const char* sName, int nAge, double nSalary);

	void SetName(const char* sName);
	void SetAge(int nAge);
	void SetSalary(double nSalary);
	void OutValue();

private:
	char m_sName[20];
	int m_nAge;
	double m_dSalary;
};