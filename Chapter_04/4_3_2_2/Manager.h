#pragma once														//��ֹ��ΰ���

#include "stdafx.h"
#include <iostream>
#include "Employee.h"

class Manager :public Employee {
public:
	Manager(const char* sName, int nAge, double nSalary, double dPrize);

	//�����깤��
	double CalcPay();

	//��������
	~Manager();

private:
	double m_dPrize;												//���ս�
};
