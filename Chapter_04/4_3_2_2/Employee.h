#pragma once
//Employee.h：类的定义

class Employee {
public:
	//构造函数函数
	Employee();
	//带参数的构造函数
	Employee(const char* sName, int nAge, double nSalary);
	//虚析构函数
	virtual ~Employee();

	void SetName(const char* sName);
	void SetAge(int nAge);
	void SetSalary(double nSalary);
	void OutValue();

	//计算年工资
	virtual double CalcPay();

private:
	char m_sName[20];				//姓名
	int m_nAge;						//年龄
	double m_dSalary;				//薪水
	char* m_sPosition;				//职务
};