#include "stdafx.h"
#include <iostream>

using namespace std;

//��������
void SwapVarValue(int* p1, int* p2);

int main()
{
	int a = 1;
	int b = 2;

	cout << "����ǰ��a=" << a << ",b=" << b << endl;
	SwapVarValue(&a, &b);
	cout << "������a=" << a << ",b=" << b << endl;

	return 0;
}

//���彻������ֵ�ĺ���
void SwapVarValue(int* p1, int* p2) {
	//ע��ͨ��������(*)��������ʵ�ε�ֵ
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

