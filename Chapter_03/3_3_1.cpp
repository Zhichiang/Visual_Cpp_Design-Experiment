#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int& r = a;								//�������ñ���r��r��a�ı���

	cout << "a�ĳ�ֵ�ǣ�" << a << endl;
	cout << "r�ĳ�ֵ�ǣ�" << r << endl;

	r++;

	cout << "a=" << a << endl;
	cout << "r=" << r << endl;

    return 0;
}

