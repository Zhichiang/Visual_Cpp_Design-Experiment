#include "stdafx.h"
#include <iostream>

using namespace std;

//��������
int ArraySum(int* ary, int arySize);

int main()
{
	int a[] = { 1,3,5,7,8,9,10,12 };				//����һ������
	int nSum = 0;								//����һ�����ͱ������ڴ洢������
	int nLength = sizeof(a) / sizeof(int);		//���������Ԫ�ظ���

	nSum = ArraySum(a, nLength);				//���ú������
	cout << "����������Ԫ�صĺ��ǣ�" << nSum << endl;

    return 0;
}

//���庯��
int ArraySum(int* ary, int arySize) {
	int nSum = 0;

	for (int i = 0; i < arySize; i++) {
		nSum = nSum + *ary;						//ͨ�������ñ��������е�Ԫ��
		ary++;									//����һ����Ԫ
	}

	return nSum;
}

