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
	//声明并指向AClass的一个静态成员变量的指针
	int *pValue = &AClass::m_iValue;
	//或者如下方式
	//int *pValue;
	//pValue = &AClass::m_iValue;
	*pValue = 4;								//使用方式同普通指针，赋值
	cout << *pValue << endl;

	pAAdd p = &AClass::Add;
	p(5);										//调用方式同普通函数指针
	cout << *pValue << endl;

    return 0;
}

