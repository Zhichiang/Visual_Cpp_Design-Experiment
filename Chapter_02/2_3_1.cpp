#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 13;								//�������ͱ���a������ʼ��Ϊ13
	int b = 14;								//�������ͱ���b������ʼ��Ϊ14

	cout << "a+b=" << a + b << endl;		//���a+b��ֵ
	cout << "a-b=" << a - b << endl;		//���a-b��ֵ
	cout << "a*b=" << a*b << endl;			//���a*b��ֵ
	cout << "a/b=" << a / b << endl;		//���a/b��ֵ
	cout << "a%b=" << a%b << endl;			//���a%b��ֵ
	cout << "a++=" << a++ << endl;			//���a++��ֵ
	cout << "++a=" << ++a << endl;			//���++a��ֵ
	cout << "b--=" << b-- << endl;			//���b--��ֵ
	cout << "--b=" << --b << endl;			//���--b��ֵ

    return 0;
}

