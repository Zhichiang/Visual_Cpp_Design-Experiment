#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			//输出a*b=c的格式
			cout << j << "*" << i << "=" << i*j << " ";
		}
		//输出空行
		cout << endl;
	}

    return 0;
}

