#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//��̬����3�����͵�Ԫ,p���׵�ַ
	int* p = new int[3];
	//���θ�ÿ���ڴ浥Ԫ��ֵ
	*p = 1;
	*(p + 1) = 2;
	*(p + 2) = 3;

	//���ÿ���ڴ浥Ԫ��ֵ
	cout << *p << " " << *(p + 1) << " " << *(p + 2) << endl;

	//�ͷŶ�̬�ڴ�
	delete[]p;

    return 0;
}

