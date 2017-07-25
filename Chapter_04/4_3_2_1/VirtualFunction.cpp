#include "stdafx.h"
#include <iostream>

using namespace std;

class CBase {
public:
	virtual void foo1() {												//虚函数
		cout << "CBase::foo1()" << endl;
	}

	void foo2() {														//非虚函数
		cout << "CBase::foo2()" << endl;
	}

	virtual void foo3() {												//虚函数
		cout << "CBase::foo3()" << endl;
	}

	//父类虚析构函数
	virtual ~CBase() {
		cout << "父类析构函数：~CBase()被调用" << endl;
	}
};

class CDerived :public CBase {
public:
	virtual void foo1() {												//覆盖（重写）父类声明的虚函数，具有多态性
		cout << "CDerived::foo1()" << endl;
	}

	void foo2() {
		cout << "CDerived::foo2()" << endl;								//非虚函数，指针引用时不具备多态性，将引用基类中的同名函数
	}

	//派生类类虚构函数
	virtual ~CDerived() {
		cout << "派生类类虚构函数：~CDerived()被调用" << endl;
	}
};

int main()
{
	cout << "直接通过类对象调用，如果是虚函数也不具有多态性" << endl;

	CBase obj;

	obj.foo1();
	obj.foo2();

	cout << "通过指向派生类对象的父类性指针调用，如果是虚函数并且被重写将具有多态性" << endl;

	CBase* pObj = new CDerived;

	pObj->foo1();
	pObj->foo2();

	cout << "虽然是虚函数，但没有被派生类重写，将不具有多态性" << endl;

	pObj->foo3();

	delete pObj;														//此处派生类和父类析构函数被调用

    return 0;															//离开作用域后obj对象的CBase类的析构函数被调用
}

