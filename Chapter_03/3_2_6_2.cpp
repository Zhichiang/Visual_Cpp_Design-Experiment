#include "stdafx.h"
#include <iostream>

using namespace std;

class AClass {
public:
	void Add(int a) {
		m_iValue += a;
	}
	int m_iValue;
};

int main()
{
	AClass a;
	//������ָ��AClass��һ����Ա������ָ��
	int AClass::*pValue = &AClass::m_iValue;
	//�������·�ʽ
	//int AClass::*pValue;
	//pValue = &AClass::m_iValue;

	a.*pValue = 4;
	cout << a.m_iValue << endl;

    return 0;
}

