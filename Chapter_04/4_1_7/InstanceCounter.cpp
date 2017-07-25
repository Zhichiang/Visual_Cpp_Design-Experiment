#include "stdafx.h"
#include <iostream>

using namespace std;

class InstanceCounter {
public:
	InstanceCounter() {
		m_nCount++;
	}

	static int GetCount() {
		return m_nCount;
	}

private:
	static int m_nCount;
};

int InstanceCounter::m_nCount = 0;

int main()
{
	InstanceCounter o1, o2, o3, o4;

	cout << "实例化对象的个数为：" << InstanceCounter::GetCount() << endl;
    
	return 0;
}

