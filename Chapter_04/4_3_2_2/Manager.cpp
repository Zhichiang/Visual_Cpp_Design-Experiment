#include "stdafx.h"
#include <iostream>
#include "Manager.h"

using namespace std;

Manager::Manager(const char* sName, int nAge, double nSalary, double dPrize)
	:Employee(sName, nAge, nSalary), m_dPrize(dPrize) {

}

double Manager::CalcPay() {
	return(Employee::CalcPay() + m_dPrize);
}

Manager::~Manager() {
	cout << "Manager类析构函数被执行" << endl;
}