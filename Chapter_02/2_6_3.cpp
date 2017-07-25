#include "stdafx.h"
#include <iostream>
#include <string.h>										//包含字符串函数的头文件

using namespace std;

int main()
{
	char str[100] = { "我们都知道" };
	char sName[20] = { 0 };
	char sSay[20] = { 0 };

	strcpy(sName, "王丽");								//将字符串“王丽”复制到sName中
	cout << "sName的内容是：" << sName << endl;
	strcat(sSay, "人很好");								//将字符串“人很好”连接到sSay上
	cout << "sSay的内容是：" << sSay << endl;
	strcat(str, sName);									//将字符串sName连接到str上
	cout << "str的内容是：" << str << endl;

	//在字符串sName中查找str
	//NULL是系统内置的常量，值为0，多用于初始化空指针
	if (strstr(str, sName) != NULL) {
		cout << "没错，说的就是" << sName << endl;
	}

    return 0;
}

