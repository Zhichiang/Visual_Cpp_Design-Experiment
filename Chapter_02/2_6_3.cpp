#include "stdafx.h"
#include <iostream>
#include <string.h>										//�����ַ���������ͷ�ļ�

using namespace std;

int main()
{
	char str[100] = { "���Ƕ�֪��" };
	char sName[20] = { 0 };
	char sSay[20] = { 0 };

	strcpy(sName, "����");								//���ַ��������������Ƶ�sName��
	cout << "sName�������ǣ�" << sName << endl;
	strcat(sSay, "�˺ܺ�");								//���ַ������˺ܺá����ӵ�sSay��
	cout << "sSay�������ǣ�" << sSay << endl;
	strcat(str, sName);									//���ַ���sName���ӵ�str��
	cout << "str�������ǣ�" << str << endl;

	//���ַ���sName�в���str
	//NULL��ϵͳ���õĳ�����ֵΪ0�������ڳ�ʼ����ָ��
	if (strstr(str, sName) != NULL) {
		cout << "û��˵�ľ���" << sName << endl;
	}

    return 0;
}

