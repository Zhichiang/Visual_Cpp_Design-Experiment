#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			//���a*b=c�ĸ�ʽ
			cout << j << "*" << i << "=" << i*j << " ";
		}
		//�������
		cout << endl;
	}

    return 0;
}

