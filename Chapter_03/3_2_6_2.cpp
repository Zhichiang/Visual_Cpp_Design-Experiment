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
	//声明并指向AClass的一个成员变量的指针
	int AClass::*pValue = &AClass::m_iValue;
	//或者如下方式
	//int AClass::*pValue;
	//pValue = &AClass::m_iValue;

	a.*pValue = 4;
	cout << a.m_iValue << endl;

    return 0;
}

