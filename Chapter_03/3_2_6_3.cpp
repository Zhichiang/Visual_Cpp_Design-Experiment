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

//指向类AClass成员函数的指针的声明方式
typedef void(AClass::*pAFunc)(int);
//声明一个指向AClass::Add()的函数指针
pAFunc pAAdd = &(AClass::Add);

int main()
{
	AClass a;
	//声明并指向AClass的一个成员变量的指针
	int AClass::*pValue = &AClass::m_iValue;
	//或者用以下的方式：
	//int AClass::*pValue;
	//pValue = &AClass::m_iValue;
	a.*pValue = 4;
	cout << a.m_iValue << endl;

	(a.*pAAdd)(5);
	cout << a.m_iValue << endl;

    return 0;
}

