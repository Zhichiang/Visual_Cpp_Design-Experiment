#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int count = 10;
	int target = 3;

	for (int i = 1; i < count; i++) {
		if (i == target) {						//ӦΪif(i%target==0){
			cout << "�ҵ�Ŀ�꣺" << i << endl;
			break;
		}
	}

    return 0;
}

