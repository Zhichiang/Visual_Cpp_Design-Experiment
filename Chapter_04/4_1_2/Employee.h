#pragma once
//Employee.h����Ķ���

class Employee {
public:
	void SetName(const char* sName);
	void SetAge(int nAge);
	void SetSalary(double nSalary);
	void OutValue();

private:
	char m_sName[20];
	int m_nAge;
	double m_dSalary;
};