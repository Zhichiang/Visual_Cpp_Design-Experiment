#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	bool trueValue = true;														//����bool����trueValue������ʼ��Ϊtrue
	bool falseValue = false;													//����bool����falseValue������ʼ��Ϊfalse

	cout << "!trueValue=" << (!trueValue) << endl;
	cout << "!falseValue=" << (!falseValue) << endl;
	cout << "falseValue&&trueValue=" << (falseValue&&trueValue) << endl;
	cout << "falseValue||trueValue=" << (falseValue || trueValue) << endl;

    return 0;
}

