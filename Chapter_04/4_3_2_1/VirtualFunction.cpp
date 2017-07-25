#include "stdafx.h"
#include <iostream>

using namespace std;

class CBase {
public:
	virtual void foo1() {												//�麯��
		cout << "CBase::foo1()" << endl;
	}

	void foo2() {														//���麯��
		cout << "CBase::foo2()" << endl;
	}

	virtual void foo3() {												//�麯��
		cout << "CBase::foo3()" << endl;
	}

	//��������������
	virtual ~CBase() {
		cout << "��������������~CBase()������" << endl;
	}
};

class CDerived :public CBase {
public:
	virtual void foo1() {												//���ǣ���д�������������麯�������ж�̬��
		cout << "CDerived::foo1()" << endl;
	}

	void foo2() {
		cout << "CDerived::foo2()" << endl;								//���麯����ָ������ʱ���߱���̬�ԣ������û����е�ͬ������
	}

	//���������鹹����
	virtual ~CDerived() {
		cout << "���������鹹������~CDerived()������" << endl;
	}
};

int main()
{
	cout << "ֱ��ͨ���������ã�������麯��Ҳ�����ж�̬��" << endl;

	CBase obj;

	obj.foo1();
	obj.foo2();

	cout << "ͨ��ָ�����������ĸ�����ָ����ã�������麯�����ұ���д�����ж�̬��" << endl;

	CBase* pObj = new CDerived;

	pObj->foo1();
	pObj->foo2();

	cout << "��Ȼ���麯������û�б���������д���������ж�̬��" << endl;

	pObj->foo3();

	delete pObj;														//�˴�������͸�����������������

    return 0;															//�뿪�������obj�����CBase�����������������
}

