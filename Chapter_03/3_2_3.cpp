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

	//char* ptr=NULL是一样的
	char* ptr = 0;
	ptr = str + strlen(str) - 1;
	printf("开始地址：0x%x\n", ptr);

	for (unsigned int i = 0; i < strlen(str); i++) {
		printf("%c", *ptr);
		ptr--;
		//printf("  地址：0x%x\n", ptr);
	}

	printf("\n结束地址：0x%x\n", ptr);

	//为了显示控制台窗口，使用如下语句
	char ch;
	while (ch = getchar()) {
		return 0;
	}

	//或
	//printf("按任意键退出程序...");
	//getchar();

    return 0;
}

