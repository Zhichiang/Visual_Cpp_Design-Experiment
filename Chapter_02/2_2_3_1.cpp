#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int i = 100;
	int c = 'a';
	short b = 3;
	float f = 1.89f;
	double d = 2.1;
	int ii = i + c;						//char���͵ı���c�Զ�ת��Ϊ��iһ�µ�int���Ͳμ�����
	float ff = b*f;						//short���͵ı���b�Զ�ת��Ϊ��fһ�µ�float���Ͳμ�����
	//int���͵ı���ii�Զ�ת��Ϊ��ffһ�µ�float���ͣ�ff/ii������Ϊfloat����Ȼ����ת��Ϊ��dһ�µ�double����
	double d1 = d + ff / ii;
	cout << "ii=" << ii << endl;
	cout << "ff=" << ff << endl;
    return 0;
}

