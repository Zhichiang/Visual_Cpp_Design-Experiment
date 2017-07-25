#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int count = 10;
	int target = 3;

	for (int i = 1; i < count; i++) {
		if (i == target) {						//应为if(i%target==0){
			cout << "找到目标：" << i << endl;
			break;
		}
	}

    return 0;
}

