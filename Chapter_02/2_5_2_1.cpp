#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a[10];
	float b[5];
	char c[20];
	double d[5];
	bool e[5];

	//����������������������ע�����������
	cout << "a�ǣ�" << a << endl;
	cout << "b�ǣ�" << b << endl;
	cout << "c�ǣ�" << c << endl;
	cout << "d�ǣ�" << d << endl;
	cout << "e�ǣ�" << e << endl;
	cout << "-------------" << endl;
	//��������������е�һ��Ԫ�ص�ֵ��ע���������
	cout << "a[0]=" << a[0] << endl;
	cout << "b[0]=" << b[0] << endl;
	cout << "c[0]=" << c[0] << endl;
	cout << "d[0]=" << d[0] << endl;
	cout << "e[0]=" << e[0] << endl;
	cout << "-------------" << endl;
	//�������������ĳ���
	cout << "a�Ĵ�С�ǣ�" << sizeof(a) << endl;
	cout << "b�Ĵ�С�ǣ�" << sizeof(b) << endl;
	cout << "c�Ĵ�С�ǣ�" << sizeof(c) << endl;
	cout << "d�Ĵ�С�ǣ�" << sizeof(d) << endl;
	cout << "e�Ĵ�С�ǣ�" << sizeof(e) << endl;

    return 0;
}

