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

//ָ����AClass��Ա������ָ���������ʽ
typedef void(AClass::*pAFunc)(int);
//����һ��ָ��AClass::Add()�ĺ���ָ��
pAFunc pAAdd = &(AClass::Add);

int main()
{
	AClass a;
	//������ָ��AClass��һ����Ա������ָ��
	int AClass::*pValue = &AClass::m_iValue;
	//���������µķ�ʽ��
	//int AClass::*pValue;
	//pValue = &AClass::m_iValue;
	a.*pValue = 4;
	cout << a.m_iValue << endl;

	(a.*pAAdd)(5);
	cout << a.m_iValue << endl;

    return 0;
}

