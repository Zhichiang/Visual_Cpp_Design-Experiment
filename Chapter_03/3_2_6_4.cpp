#include "stdafx.h"
#include <iostream>

using namespace std;

class AClass {
public:
	static void Add(int a) {
		m_iValue += a;
	}
	static int m_iValue;
};

int AClass::m_iValue;
typedef void(*pAAdd)(int);

int main()
{
	//������ָ��AClass��һ����̬��Ա������ָ��
	int *pValue = &AClass::m_iValue;
	//�������·�ʽ
	//int *pValue;
	//pValue = &AClass::m_iValue;
	*pValue = 4;								//ʹ�÷�ʽͬ��ָͨ�룬��ֵ
	cout << *pValue << endl;

	pAAdd p = &AClass::Add;
	p(5);										//���÷�ʽͬ��ͨ����ָ��
	cout << *pValue << endl;

    return 0;
}

