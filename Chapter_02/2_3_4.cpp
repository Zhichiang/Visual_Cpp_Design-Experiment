#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num1 = 9;
	int num2 = 7;
	int fei = ~num1;							//��
	int huo = num1 | num2;						//��
	int yu = num1&num2;							//��
	int yiHuo = num1^num2;						//���
	int youYi = num1 >> 1;						//����
	int zuoYi = num1 << 1;						//����

	cout << "fei=" << fei << endl;
	cout << "huo=" << huo << endl;
	cout << "yu=" << yu << endl;
	cout << "yiHuo=" << yiHuo << endl;
	cout << "youYi=" << youYi << endl;
	cout << "zuoYi=" << zuoYi << endl;

    return 0;
}

