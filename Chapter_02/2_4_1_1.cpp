#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//�������������������ڱȽ�
	int num1;
	int num2;
	int num3;
	//���������������ڴ洢���ֵ����Сֵ
	int maxnum = 0;
	int minnum = 0;

	//�ӿ���̨������������
	cout << "����������������" << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;

	//����num1��num2���бȽ��ҳ��ϴ�ĺͽ�С��
	if (num1 > num2) {
		maxnum = num1;
		minnum = num2;
	}
	else {
		maxnum = num2;
		minnum = num1;
	}
	//�ٰ�maxNum��minNum�ֱ��num3���бȽϣ����յõ����ֵ����Сֵ
	if (maxnum < num3) {
		maxnum = num3;
	}
	if (minnum > num3) {
		minnum = num3;
	}
	//�ֱ�������ֵ����Сֵ
	cout << "���ֵ�ǣ�" << maxnum << "��СֵΪ��" << minnum << endl;

	if (maxnum % 2 == 0) {
		cout << "���ֵΪż��" << endl;
	}
	else {
		cout << "���ֵΪ����" << endl;
	}
	if (minnum % 2 == 0) {
		cout << "��СֵΪż��" << endl;
	}
	else {
		cout << "��СֵΪ����" << endl;
	}
    return 0;
}

