#include <tchar.h>
#include <Windows.h>

int main() {
	TCHAR sCity[] = _T("Hello.");
	//����API������ʾ�ַ���
	MessageBox(0, sCity, _T("����"), MB_OK);
}