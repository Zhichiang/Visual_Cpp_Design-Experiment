#include "stdafx.h"
#include <iostream>

using namespace std;

//��������
int GetProduct(int x, int y);

int main()
{
	int a = 12;
	int b = 230;

	cout << "a*b�Ļ��ǣ�" << GetProduct(a, b) << endl;

	return 0;
}

//�������壬�������������ȥ�������������Ӵ���
int GetProduct(int x, int y) {
	return x*y;
}

