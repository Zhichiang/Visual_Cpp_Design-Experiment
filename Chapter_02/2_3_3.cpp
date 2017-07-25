#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	bool trueValue = true;														//定义bool变量trueValue，并初始化为true
	bool falseValue = false;													//定义bool变量falseValue，并初始化为false

	cout << "!trueValue=" << (!trueValue) << endl;
	cout << "!falseValue=" << (!falseValue) << endl;
	cout << "falseValue&&trueValue=" << (falseValue&&trueValue) << endl;
	cout << "falseValue||trueValue=" << (falseValue || trueValue) << endl;

    return 0;
}

