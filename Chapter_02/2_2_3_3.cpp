#include "stdafx.h"
#include <iostream>

using namespace std;

class Animal {
public:
	virtual void printShout() {};
	virtual void printShout(const char* str) {};
};

class Dog :public Animal {
public:
	void printShout() {
		printf("呜汪...");
		return;
	}

	void printShout(const char* str) {
		printf("%s", str);
		return;
	}
};

class Cat :public Animal {
public:
	void printShout() {
		printf("喵喵...");
		return;
	}

	void printShout(const char* str) {
		printf("%s", str);
		return;
	}
};

int main()
{
	Animal* ptrB = static_cast<Animal*>(new Dog());		//等同于Animal* ptrB=new Dog();
	Dog* ptrD = static_cast<Dog*>(new Animal());
	//not safe, ptrD may be point to Animal
	//Animal* ptrB=new Dog(); //向上转换
	//Animal* ptrB=new Cat(); //向上转换
	ptrB->printShout();
	ptrD->printShout();
	system("pause");
    return 0;
}

