#include "stdafx.h"
#include <iostream>
#include <string.h>
#include <stdio.h>


using namespace std;

int main()
{
	char* str = "co.ltd|donghe|type|books|data1|version1|";

	//while (*str != '\0') {
	//	printf("%c", *str);
	//}

	//char* ptr=NULL��һ����
	char* ptr = 0;
	ptr = str + strlen(str) - 1;
	printf("��ʼ��ַ��0x%x\n", ptr);

	for (unsigned int i = 0; i < strlen(str); i++) {
		printf("%c", *ptr);
		ptr--;
		//printf("  ��ַ��0x%x\n", ptr);
	}

	printf("\n������ַ��0x%x\n", ptr);

	//Ϊ����ʾ����̨���ڣ�ʹ���������
	char ch;
	while (ch = getchar()) {
		return 0;
	}

	//��
	//printf("��������˳�����...");
	//getchar();

    return 0;
}

