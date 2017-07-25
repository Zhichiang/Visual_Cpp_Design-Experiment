#include "stdafx.h"
#include <iostream>

using namespace std;

class Person {
public:
	Person(const char* sName, char* sSex, int nAge) {
		strcpy(m_sName, sName);
		strcpy(m_sSex, sSex);
		m_nAge = nAge;
		cout << "Person��Ĺ��캯��������" << endl;
	}
	
	//ʡ��Set��Ա����

	//��������
	~Person() {
		cout << "Person�����������������" << endl;
	}

private:
	char m_sName[20];									//����
	char m_sSex[6];										//�Ա�
	int m_nAge;											//����
};

class Teacher :public Person {
public:
	Teacher(const char* sName, char* sSex, int nAge, double dSalary, const char* sDepartment)
		:m_dSalary(dSalary), Person(sName, sSex, nAge) {
		cout << "Teacher��Ĺ��캯��������" << endl;
		strcpy(m_sDepartment, sDepartment);
	}

	//ʡ��Set��Ա����

	//��������
	~Teacher() {
		cout << "Teacher�����������������" << endl;
	}

private:
	double m_dSalary;									//н��
	char m_sDepartment[20];								//����
};

class Student :public Person {
public:
	Student(const char* sName, char* sSex, int nAge, int nScore, const char* sGrade)
		:m_nScore(nScore), Person(sName, sSex, nAge) {
		cout << "Student��Ĺ��캯��������" << endl;
		strcpy(m_sGrade, sGrade);
	}

	//ʡ��Set��Ա����

	//��������
	~Student() {
		cout << "Student��������������" << endl;
	}

private:
	int m_nScore;										//�ɼ�
	char m_sGrade[20];									//�꼶
};

int main()
{
	Teacher t("���", "��", 30, 2000, "����");
	Student stu("����", "��", 15, 90, "����");

	cout << "---------------------------------" << endl;

    return 0;
}

