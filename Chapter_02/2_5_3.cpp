#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//用二维矩阵表示矩阵
	int matrix[][3] = { {1,2,0},{4,0,6},{0,8,9} };

	//打印矩阵
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;								//换行
	}

    return 0;
}

