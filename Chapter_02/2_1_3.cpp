#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//num���ڲ��������п���
	int num = 2;
	//���Ա���num
	if (num == 2) {
		//����num1����������Ϊif���ڵ�{}
		int num1 = num*num;
		cout << "num��ֵ�ǣ�" << num << "num1��ֵ�ǣ�" << num1 << endl;
	}
	//num1=2������num1δ֪
	cout << "num��ֵ�ǣ�" << num << endl;
    return 0;
}

