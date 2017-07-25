#include "stdafx.h"
#include "Manager.h"

Manager::Manager(const char* sName, int nAge, double nSalary, double dPrize)
	:Employee(sName, nAge, nSalary), m_dPrize(dPrize) {

}

double Manager::CalcPay() {
	return(Employee::CalcPay() + m_dPrize);
}