#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int count = 10;								//ѭ������
	int target = 3;								//Ѱ���ܹ���3��������

	for (int i = 0; i < count; i++) {
		if (i % target == 0) {
			cout << "�ҵ�Ŀ�꣺" << i << endl;
			continue;
		}
		cout << i << endl;						//��ӡ��ǰ��ֵ
	}

    return 0;
}

