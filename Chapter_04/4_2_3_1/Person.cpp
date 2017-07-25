#include "stdafx.h"
#include <iostream>

using namespace std;

class Person {
public:
	Person(const char* sName, char* sSex, int nAge) {
		strcpy(m_sName, sName);
		strcpy(m_sSex, sSex);
		m_nAge = nAge;
		cout << "Person类的构造函数被调用" << endl;
	}
	
	//省略Set成员函数

	//析构函数
	~Person() {
		cout << "Person类的析构函数被调用" << endl;
	}

private:
	char m_sName[20];									//姓名
	char m_sSex[6];										//性别
	int m_nAge;											//年龄
};

class Teacher :public Person {
public:
	Teacher(const char* sName, char* sSex, int nAge, double dSalary, const char* sDepartment)
		:m_dSalary(dSalary), Person(sName, sSex, nAge) {
		cout << "Teacher类的构造函数被调用" << endl;
		strcpy(m_sDepartment, sDepartment);
	}

	//省略Set成员函数

	//析构函数
	~Teacher() {
		cout << "Teacher类的析构函数被调用" << endl;
	}

private:
	double m_dSalary;									//薪酬
	char m_sDepartment[20];								//部门
};

class Student :public Person {
public:
	Student(const char* sName, char* sSex, int nAge, int nScore, const char* sGrade)
		:m_nScore(nScore), Person(sName, sSex, nAge) {
		cout << "Student类的构造函数被调用" << endl;
		strcpy(m_sGrade, sGrade);
	}

	//省略Set成员函数

	//析构函数
	~Student() {
		cout << "Student析构函数被调用" << endl;
	}

private:
	int m_nScore;										//成绩
	char m_sGrade[20];									//年级
};

int main()
{
	Teacher t("李刚", "男", 30, 2000, "教务处");
	Student stu("赵明", "男", 15, 90, "三班");

	cout << "---------------------------------" << endl;

    return 0;
}

