#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int *p1;								//����p1δ�趨��ʼֵ
	int *p2 = &a;

	//���p1��ֵ��������p1δ��ʼ��������������ִ���
	//cout << "p1��ֵ�ǣ�" << p1 << endl;
	//���p2��ֵ
	cout << "p2��ֵ�ǣ�" << p2 << endl;
	//���p2��ָ�����ֵ
	cout << "p2��ָ�����ֵ�ǣ�" << *p2 << endl;

    return 0;
}

