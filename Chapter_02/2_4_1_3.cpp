#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int month;
	cout << "�������·ݣ�";
	cin >> month;

	switch (month) {
	case 1:
		cout << "һ�£����¹���31��" << endl;
		break;
	case 2:
		cout << "���£����¹���29��" << endl;
		break;
	case 3:
		cout << "���£����¹���31��" << endl;
		break;
	case 4:
		cout << "���£����¹���30��" << endl;
		break;
	case 5:
		cout << "���£����¹���31��" << endl;
		break;
	case 6:
		cout << "���£����¹���30��" << endl;
		break;
	case 7:
		cout << "���£����¹���31��" << endl;
		break;
	case 8:
		cout << "���£����¹���31��" << endl;
		break;
	case 9:
		cout << "���£����¹���30��" << endl;
		break;
	case 10:
		cout << "ʮ�£����¹���31��" << endl;
		break;
	case 11:
		cout << "ʮһ�£����¹���30��" << endl;
		break;
	case 12:
		cout << "ʮ���£����¹���31��" << endl;
		break;
	default:
		cout << "��Ч�·�" << endl;
		break;
	}
    return 0;
}

