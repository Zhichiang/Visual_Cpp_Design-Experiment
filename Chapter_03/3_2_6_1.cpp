#include "stdafx.h"
#include <iostream>

using namespace std;

int int_add(int a, int b) {
	return(a + b);
}

int int_sub(int a, int b) {
	return (a - b);
}

int(*int_operator)(int, int) = int_add;

int main()
{
	cout << int_operator(4, 5) << endl;			//output 9;

	int_operator = int_sub;
	cout << int_operator(4, 5) << endl;			//output -1;
	//也可以这样写，增加可读性
	//(*int_operator)(4, 5);

    return 0;
}

