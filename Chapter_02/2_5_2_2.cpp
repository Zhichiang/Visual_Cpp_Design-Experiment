#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int array[] = { 10,23,6,88,19 };
	int index = 0;								//���ֵ�����ţ�Ĭ��Ϊ0
	int max = array[index];						//���ֵ
	//Ѱ�����ֵ
	int lenth = sizeof(array) / sizeof(int);

	for (int i = 1; i < lenth; i++) {
		if (array[i] > max) {
			index = i;
			max = array[i];
		}
	}

	cout << "���ֵΪ��" << max << "��������Ϊ" << index << endl;

    return 0;
}

