#pragma once
//Employee.h����Ķ���

class Employee {
public:
	//���������Ĺ��캯��
	Employee();
	//�������Ĺ��캯��
	Employee(const char* sName, int nAge, double nSalary);
	//��������
	~Employee();

	void SetName(const char* sName);
	void SetAge(int nAge);
	void SetSalary(double nSalary);
	void OutValue();

	//�����깤��
	double CalcPay();

private:
	char m_sName[20];				//����
	int m_nAge;						//����
	double m_dSalary;				//нˮ
	char* m_sPosition;				//ְ��
};