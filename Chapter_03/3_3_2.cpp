#include "stdafx.h"
#include <iostream>

using namespace std;

//��������
void SwapVarValue(int& r1, int& r2);

int main()
{
	int a = 1;
	int b = 2;

	cout << "����ǰ��a=" << a << " b=" << b << endl;

	SwapVarValue(a, b);
	cout << "������a=" << a << " b=" << b << endl;

    return 0;
}

//���彻������ֵ�ĺ���
void SwapVarValue(int& r1, int& r2) {
	//ע��ͨ��������(*)��������ʵ�ε�ֵ
	int temp = r1;
	r1 = r2;
	r2 = temp;
}

