#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//�ö�ά�����ʾ����
	int matrix[][3] = { {1,2,0},{4,0,6},{0,8,9} };

	//��ӡ����
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;								//����
	}

    return 0;
}

