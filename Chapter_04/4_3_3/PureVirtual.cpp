#include "stdafx.h"
#include <iostream>

using namespace std;

class CShape {
public:
	CShape(const char* sName) {
		strcpy(m_sName, sName);
	}

	virtual double CalcArea() = 0;

	void Out() {
		cout << m_sName << "的面积是：" << CalcArea() << endl;
	}

private:
	char m_sName[255];
};

class CCircle :public CShape {
public:
	CCircle(const char* sName, double r) :CShape(sName), m_r(r) {

	}

	virtual double CalcArea() {
		return (3.141592653*m_r*m_r);
	}

private:
	double m_r;													//半径
};

class CRectangle :public CShape {
public:
	CRectangle(const char* sName, double l, double w)
		:CShape(sName), m_l(l), m_w(w) {

	}

	virtual double CalcArea() {
		return m_l*m_w;
	}

private:
	double m_l;													//长度
	double m_w;													//宽度
};

int main()
{
	CCircle c("圆", 12.5);
	c.Out();

	CRectangle rect("矩形", 7.5, 23.8);
	rect.Out();

    return 0;
}

